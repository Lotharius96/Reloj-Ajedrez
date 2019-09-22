/*******************************************************************************
* File Name: isr_Aceptar.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_isr_Aceptar_H)
#define CY_ISR_isr_Aceptar_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isr_Aceptar_Start(void);
void isr_Aceptar_StartEx(cyisraddress address);
void isr_Aceptar_Stop(void);

CY_ISR_PROTO(isr_Aceptar_Interrupt);

void isr_Aceptar_SetVector(cyisraddress address);
cyisraddress isr_Aceptar_GetVector(void);

void isr_Aceptar_SetPriority(uint8 priority);
uint8 isr_Aceptar_GetPriority(void);

void isr_Aceptar_Enable(void);
uint8 isr_Aceptar_GetState(void);
void isr_Aceptar_Disable(void);

void isr_Aceptar_SetPending(void);
void isr_Aceptar_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isr_Aceptar ISR. */
#define isr_Aceptar_INTC_VECTOR            ((reg32 *) isr_Aceptar__INTC_VECT)

/* Address of the isr_Aceptar ISR priority. */
#define isr_Aceptar_INTC_PRIOR             ((reg8 *) isr_Aceptar__INTC_PRIOR_REG)

/* Priority of the isr_Aceptar interrupt. */
#define isr_Aceptar_INTC_PRIOR_NUMBER      isr_Aceptar__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isr_Aceptar interrupt. */
#define isr_Aceptar_INTC_SET_EN            ((reg32 *) isr_Aceptar__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isr_Aceptar interrupt. */
#define isr_Aceptar_INTC_CLR_EN            ((reg32 *) isr_Aceptar__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isr_Aceptar interrupt state to pending. */
#define isr_Aceptar_INTC_SET_PD            ((reg32 *) isr_Aceptar__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isr_Aceptar interrupt. */
#define isr_Aceptar_INTC_CLR_PD            ((reg32 *) isr_Aceptar__INTC_CLR_PD_REG)


#endif /* CY_ISR_isr_Aceptar_H */


/* [] END OF FILE */
