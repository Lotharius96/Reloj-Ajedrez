/*******************************************************************************
* File Name: Lcd_Juego_LCDPort.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Lcd_Juego_LCDPort_ALIASES_H) /* Pins Lcd_Juego_LCDPort_ALIASES_H */
#define CY_PINS_Lcd_Juego_LCDPort_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Lcd_Juego_LCDPort_0			(Lcd_Juego_LCDPort__0__PC)
#define Lcd_Juego_LCDPort_0_INTR	((uint16)((uint16)0x0001u << Lcd_Juego_LCDPort__0__SHIFT))

#define Lcd_Juego_LCDPort_1			(Lcd_Juego_LCDPort__1__PC)
#define Lcd_Juego_LCDPort_1_INTR	((uint16)((uint16)0x0001u << Lcd_Juego_LCDPort__1__SHIFT))

#define Lcd_Juego_LCDPort_2			(Lcd_Juego_LCDPort__2__PC)
#define Lcd_Juego_LCDPort_2_INTR	((uint16)((uint16)0x0001u << Lcd_Juego_LCDPort__2__SHIFT))

#define Lcd_Juego_LCDPort_3			(Lcd_Juego_LCDPort__3__PC)
#define Lcd_Juego_LCDPort_3_INTR	((uint16)((uint16)0x0001u << Lcd_Juego_LCDPort__3__SHIFT))

#define Lcd_Juego_LCDPort_4			(Lcd_Juego_LCDPort__4__PC)
#define Lcd_Juego_LCDPort_4_INTR	((uint16)((uint16)0x0001u << Lcd_Juego_LCDPort__4__SHIFT))

#define Lcd_Juego_LCDPort_5			(Lcd_Juego_LCDPort__5__PC)
#define Lcd_Juego_LCDPort_5_INTR	((uint16)((uint16)0x0001u << Lcd_Juego_LCDPort__5__SHIFT))

#define Lcd_Juego_LCDPort_6			(Lcd_Juego_LCDPort__6__PC)
#define Lcd_Juego_LCDPort_6_INTR	((uint16)((uint16)0x0001u << Lcd_Juego_LCDPort__6__SHIFT))

#define Lcd_Juego_LCDPort_INTR_ALL	 ((uint16)(Lcd_Juego_LCDPort_0_INTR| Lcd_Juego_LCDPort_1_INTR| Lcd_Juego_LCDPort_2_INTR| Lcd_Juego_LCDPort_3_INTR| Lcd_Juego_LCDPort_4_INTR| Lcd_Juego_LCDPort_5_INTR| Lcd_Juego_LCDPort_6_INTR))

#endif /* End Pins Lcd_Juego_LCDPort_ALIASES_H */


/* [] END OF FILE */
