/*******************************************************************************
* File Name: Lcd_Juego_LCDPort.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Lcd_Juego_LCDPort_H) /* Pins Lcd_Juego_LCDPort_H */
#define CY_PINS_Lcd_Juego_LCDPort_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Lcd_Juego_LCDPort_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Lcd_Juego_LCDPort__PORT == 15 && ((Lcd_Juego_LCDPort__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Lcd_Juego_LCDPort_Write(uint8 value);
void    Lcd_Juego_LCDPort_SetDriveMode(uint8 mode);
uint8   Lcd_Juego_LCDPort_ReadDataReg(void);
uint8   Lcd_Juego_LCDPort_Read(void);
void    Lcd_Juego_LCDPort_SetInterruptMode(uint16 position, uint16 mode);
uint8   Lcd_Juego_LCDPort_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Lcd_Juego_LCDPort_SetDriveMode() function.
     *  @{
     */
        #define Lcd_Juego_LCDPort_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Lcd_Juego_LCDPort_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Lcd_Juego_LCDPort_DM_RES_UP          PIN_DM_RES_UP
        #define Lcd_Juego_LCDPort_DM_RES_DWN         PIN_DM_RES_DWN
        #define Lcd_Juego_LCDPort_DM_OD_LO           PIN_DM_OD_LO
        #define Lcd_Juego_LCDPort_DM_OD_HI           PIN_DM_OD_HI
        #define Lcd_Juego_LCDPort_DM_STRONG          PIN_DM_STRONG
        #define Lcd_Juego_LCDPort_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Lcd_Juego_LCDPort_MASK               Lcd_Juego_LCDPort__MASK
#define Lcd_Juego_LCDPort_SHIFT              Lcd_Juego_LCDPort__SHIFT
#define Lcd_Juego_LCDPort_WIDTH              7u

/* Interrupt constants */
#if defined(Lcd_Juego_LCDPort__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Lcd_Juego_LCDPort_SetInterruptMode() function.
     *  @{
     */
        #define Lcd_Juego_LCDPort_INTR_NONE      (uint16)(0x0000u)
        #define Lcd_Juego_LCDPort_INTR_RISING    (uint16)(0x0001u)
        #define Lcd_Juego_LCDPort_INTR_FALLING   (uint16)(0x0002u)
        #define Lcd_Juego_LCDPort_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Lcd_Juego_LCDPort_INTR_MASK      (0x01u) 
#endif /* (Lcd_Juego_LCDPort__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Lcd_Juego_LCDPort_PS                     (* (reg8 *) Lcd_Juego_LCDPort__PS)
/* Data Register */
#define Lcd_Juego_LCDPort_DR                     (* (reg8 *) Lcd_Juego_LCDPort__DR)
/* Port Number */
#define Lcd_Juego_LCDPort_PRT_NUM                (* (reg8 *) Lcd_Juego_LCDPort__PRT) 
/* Connect to Analog Globals */                                                  
#define Lcd_Juego_LCDPort_AG                     (* (reg8 *) Lcd_Juego_LCDPort__AG)                       
/* Analog MUX bux enable */
#define Lcd_Juego_LCDPort_AMUX                   (* (reg8 *) Lcd_Juego_LCDPort__AMUX) 
/* Bidirectional Enable */                                                        
#define Lcd_Juego_LCDPort_BIE                    (* (reg8 *) Lcd_Juego_LCDPort__BIE)
/* Bit-mask for Aliased Register Access */
#define Lcd_Juego_LCDPort_BIT_MASK               (* (reg8 *) Lcd_Juego_LCDPort__BIT_MASK)
/* Bypass Enable */
#define Lcd_Juego_LCDPort_BYP                    (* (reg8 *) Lcd_Juego_LCDPort__BYP)
/* Port wide control signals */                                                   
#define Lcd_Juego_LCDPort_CTL                    (* (reg8 *) Lcd_Juego_LCDPort__CTL)
/* Drive Modes */
#define Lcd_Juego_LCDPort_DM0                    (* (reg8 *) Lcd_Juego_LCDPort__DM0) 
#define Lcd_Juego_LCDPort_DM1                    (* (reg8 *) Lcd_Juego_LCDPort__DM1)
#define Lcd_Juego_LCDPort_DM2                    (* (reg8 *) Lcd_Juego_LCDPort__DM2) 
/* Input Buffer Disable Override */
#define Lcd_Juego_LCDPort_INP_DIS                (* (reg8 *) Lcd_Juego_LCDPort__INP_DIS)
/* LCD Common or Segment Drive */
#define Lcd_Juego_LCDPort_LCD_COM_SEG            (* (reg8 *) Lcd_Juego_LCDPort__LCD_COM_SEG)
/* Enable Segment LCD */
#define Lcd_Juego_LCDPort_LCD_EN                 (* (reg8 *) Lcd_Juego_LCDPort__LCD_EN)
/* Slew Rate Control */
#define Lcd_Juego_LCDPort_SLW                    (* (reg8 *) Lcd_Juego_LCDPort__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Lcd_Juego_LCDPort_PRTDSI__CAPS_SEL       (* (reg8 *) Lcd_Juego_LCDPort__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Lcd_Juego_LCDPort_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Lcd_Juego_LCDPort__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Lcd_Juego_LCDPort_PRTDSI__OE_SEL0        (* (reg8 *) Lcd_Juego_LCDPort__PRTDSI__OE_SEL0) 
#define Lcd_Juego_LCDPort_PRTDSI__OE_SEL1        (* (reg8 *) Lcd_Juego_LCDPort__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Lcd_Juego_LCDPort_PRTDSI__OUT_SEL0       (* (reg8 *) Lcd_Juego_LCDPort__PRTDSI__OUT_SEL0) 
#define Lcd_Juego_LCDPort_PRTDSI__OUT_SEL1       (* (reg8 *) Lcd_Juego_LCDPort__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Lcd_Juego_LCDPort_PRTDSI__SYNC_OUT       (* (reg8 *) Lcd_Juego_LCDPort__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Lcd_Juego_LCDPort__SIO_CFG)
    #define Lcd_Juego_LCDPort_SIO_HYST_EN        (* (reg8 *) Lcd_Juego_LCDPort__SIO_HYST_EN)
    #define Lcd_Juego_LCDPort_SIO_REG_HIFREQ     (* (reg8 *) Lcd_Juego_LCDPort__SIO_REG_HIFREQ)
    #define Lcd_Juego_LCDPort_SIO_CFG            (* (reg8 *) Lcd_Juego_LCDPort__SIO_CFG)
    #define Lcd_Juego_LCDPort_SIO_DIFF           (* (reg8 *) Lcd_Juego_LCDPort__SIO_DIFF)
#endif /* (Lcd_Juego_LCDPort__SIO_CFG) */

/* Interrupt Registers */
#if defined(Lcd_Juego_LCDPort__INTSTAT)
    #define Lcd_Juego_LCDPort_INTSTAT            (* (reg8 *) Lcd_Juego_LCDPort__INTSTAT)
    #define Lcd_Juego_LCDPort_SNAP               (* (reg8 *) Lcd_Juego_LCDPort__SNAP)
    
	#define Lcd_Juego_LCDPort_0_INTTYPE_REG 		(* (reg8 *) Lcd_Juego_LCDPort__0__INTTYPE)
	#define Lcd_Juego_LCDPort_1_INTTYPE_REG 		(* (reg8 *) Lcd_Juego_LCDPort__1__INTTYPE)
	#define Lcd_Juego_LCDPort_2_INTTYPE_REG 		(* (reg8 *) Lcd_Juego_LCDPort__2__INTTYPE)
	#define Lcd_Juego_LCDPort_3_INTTYPE_REG 		(* (reg8 *) Lcd_Juego_LCDPort__3__INTTYPE)
	#define Lcd_Juego_LCDPort_4_INTTYPE_REG 		(* (reg8 *) Lcd_Juego_LCDPort__4__INTTYPE)
	#define Lcd_Juego_LCDPort_5_INTTYPE_REG 		(* (reg8 *) Lcd_Juego_LCDPort__5__INTTYPE)
	#define Lcd_Juego_LCDPort_6_INTTYPE_REG 		(* (reg8 *) Lcd_Juego_LCDPort__6__INTTYPE)
#endif /* (Lcd_Juego_LCDPort__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Lcd_Juego_LCDPort_H */


/* [] END OF FILE */
