/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
; //Ref_Usuario-Neggras
volatile uint16 Sref_N,Sref_B=0; // 
volatile uint16 Mref_N,Mref_B=0;
volatile uint16 Minutos_N,Minutos_B=0;
volatile uint16 Segundos_B,Segundos_N=0;
//volatile uint8 Flag_Sound=0;
volatile uint8 Flag_Configuracion=0;
volatile uint8 Register1=0;
volatile uint8 cont=0;
volatile uint8 cont_eventA=0;
volatile uint8 r_visual=0;
volatile char data_s;
volatile char enter;
volatile uint8 Type=0;
volatile char Data_PrintN[5]="";
volatile char8 datay;
volatile uint8 count_int=0;
volatile uint8 Unidad_M=0;
volatile uint8 Decena_M=0;
volatile uint8 Unidad_S=0;
volatile uint8 Decena_S=0;
volatile uint8 Data_Value=0; //variable_de_datos
volatile uint8 segmento_7;
volatile uint8 comm=0001;
char Concat5[5];
char Concat1[1];
void Activar_Conteo();
void visualizacion(char *data_print); //isualizacion_de_datos
//char *Numeros(uint8 vector[4]);
//volatile uint8 Centena=0;
//uint8 Seg_Conversion(char datay);
void Num_to_String(uint16 Numero){
   //Concat[4];
   uint8 Temp1=(int)(Numero/1000);
   uint8 Temp2=(int)((Numero-Temp1*1000)/100);
   uint8 Temp3=(int)((Numero-Temp1*1000-Temp2*100)/10);
   uint8 Temp4=Numero-Temp1*1000-Temp2*100-Temp3*10;
   char T_Chain[5]={(char)Temp1+48,(char)Temp2+48,':',(char)Temp3+48,(char)Temp4+48};
   //char *t_String=""; 
   strcpy(Concat5,T_Chain);
   //return t_String;
}

//void Num_to_Char(uint8 Numero){
void Switch_Conter(){
  switch(cont_eventA){
    case 1:
     Decena_M=cont;    
    break;
    case 2:
    Unidad_M=cont;
    break;
    case 3:
    Decena_S=cont;
    break;
    case 4:
    Unidad_S=cont;
    break;
    default:
    
    break;

  }
}
//
void visual_Type(int x){
  if(x==1){
   Num_to_String(100*Minutos_N+Segundos_N);
   Lcd_Juego_Position(1,8);
   Lcd_Juego_PrintString(Concat5);
  }else if(x==0){
   Num_to_String(100*Minutos_B+Segundos_B);
   Lcd_Juego_Position(0,8);
   Lcd_Juego_PrintString(Concat5);
  }

}
//
////

////
CY_ISR(Aceptar){
    //  Pin_1_Write(1);
     CyDelay(60);
     int flag=0;
    //count_int++;
    
    if(Aceptar_Read()!=1){
    //Pin_1_Write(1);
   CyDelay(20);
    flag=1;
    count_int=0;
    }
    
    if(flag==1){
      Pin_1_Write(1);
      cont_eventA++;
      if(cont_eventA>5){
         cont_eventA=1;
      }  
      Switch_Conter();
      if(cont_eventA==5 && Flag_Configuracion==1){
        ///if(Flag)
       Sref_N=10*Decena_S+Unidad_S;
       Mref_N=10*Decena_M+Unidad_M;
       Segundos_N=Sref_N;
       Minutos_N=Mref_N;
       visual_Type(1);
       Timer_1_Start();
      
      }else if(cont_eventA==5 && Flag_Configuracion==0){
       Sref_B=10*Decena_S+Unidad_S;
       Mref_B=10*Decena_M+Unidad_M;
       Segundos_B=Sref_B;
       Minutos_B=Mref_B;
       visual_Type(0);
       Timer_1_Start();
      }
      
    }
    CyDelay(20);
   Aceptar_ClearInterrupt();
}
//
////
CY_ISR(Tiempos){
    // Pin_1_Write(1);
    CyDelay(60);
    int flag=0;
    if(Tiempos_Read()!=1){
    //Pin_1_Write(1);
    CyDelay(20);
    flag=1;
    count_int=0;
    }
     if(flag==1){
        cont++;
       if(cont==6){
        cont=0;  
         Pin_1_Write(1);
      }
    }
    CyDelay(20);
    Tiempos_ClearInterrupt();
    //isr_Tiempos_ClearPending();
}
////
CY_ISR(C_Negras){
   //Pin_1_Write(1);
    int flag=0;
    CyDelay(60);
    if(C_Negras_Read()!=1){
    Pin_1_Write(1);
    CyDelay(20);
    flag=1;
    count_int=0;
    }
    if(flag==1){
      Flag_Configuracion=1;
    }
    C_Negras_ClearInterrupt();
}

////
CY_ISR(C_Blancas){
    int flag=0;
    CyDelay(60);
    if(C_Blancas_Read()!=1){
    Pin_1_Write(1);
    CyDelay(20);
    flag=1;
    //count_int=0;
    }
    if(flag==1){
      Flag_Configuracion=0;
    }
    C_Blancas_ClearInterrupt();
}
//
//
CY_ISR(Timer)
{
   uint16 total_ref=(Flag_Configuracion==1?Minutos_B+Segundos_B:Minutos_N+Segundos_N);
   //
    if(Flag_Configuracion==1){
      visual_Type(1);
    }else{
      visual_Type(0);
    }
////  //Segundos--;
    if(Segundos_N>0 && Flag_Configuracion==1){
      Segundos_N--;
    //Minutos--;
     }else if(total_ref!=0 && Flag_Configuracion==1 && Segundos_N==0){
     Minutos_N--; 
     Segundos_N=59;
    }else if(Segundos_B>0 && Flag_Configuracion==0){
     Segundos_B--;
     }else if(Segundos_B==0 && Flag_Configuracion==0 && total_ref!=0){
     Minutos_B--;
     Segundos_B=59;
     }
     if(total_ref==0){
        Timer_1_Start();
        Pin_1_Write(1);
     }
   isr_Timer_ClearPending();
}


//
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_Timer_StartEx(Timer);
    isr_Aceptar_StartEx(Aceptar);
// 
    isr_Blancas_StartEx(C_Blancas);
//    
    isr_Negras_StartEx(C_Negras);
    
    isr_Tiempos_StartEx(Tiempos);
//    //isr_C2_SetPriority(6);
    //isr_Aceptar_StartEx(Aceptar);
//    //isr_C4_SetPriority(5);
//    isr_C4_StartEx(Aceptar);
    //Register2=1;
    Lcd_Juego_Start();
    Lcd_Juego_Position(0,0);
     Lcd_Juego_PrintString("Blancas:");
    Lcd_Juego_Position(1,0);
    Lcd_Juego_PrintString("Negras:");
    
    for(;;)
    {
       
     //Segmentos_7_Write(Seg_Conversion(un));     
 //   visualizacion("H");
    Pin_1_Write(0);
//    F_Write(Register2);
//    Register1=Register2;
//     CyDelay(29);
//    Register2=Register2<<1;
//    // CyDelay(10);
//    //F_Write(Register2);
//    if(Register2<9){
//     Register2=Register2;
//    }else{
//      Register2=1;
//    }
//    CyDelay(4);
//    pin1_Write(0);
   }
}




/* [] END OF FILE */
