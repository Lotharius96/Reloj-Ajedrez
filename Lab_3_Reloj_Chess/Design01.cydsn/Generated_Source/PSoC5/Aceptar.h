/*******************************************************************************
* File Name: Aceptar.h  
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

#if !defined(CY_PINS_Aceptar_H) /* Pins Aceptar_H */
#define CY_PINS_Aceptar_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Aceptar_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Aceptar__PORT == 15 && ((Aceptar__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Aceptar_Write(uint8 value);
void    Aceptar_SetDriveMode(uint8 mode);
uint8   Aceptar_ReadDataReg(void);
uint8   Aceptar_Read(void);
void    Aceptar_SetInterruptMode(uint16 position, uint16 mode);
uint8   Aceptar_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Aceptar_SetDriveMode() function.
     *  @{
     */
        #define Aceptar_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Aceptar_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Aceptar_DM_RES_UP          PIN_DM_RES_UP
        #define Aceptar_DM_RES_DWN         PIN_DM_RES_DWN
        #define Aceptar_DM_OD_LO           PIN_DM_OD_LO
        #define Aceptar_DM_OD_HI           PIN_DM_OD_HI
        #define Aceptar_DM_STRONG          PIN_DM_STRONG
        #define Aceptar_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Aceptar_MASK               Aceptar__MASK
#define Aceptar_SHIFT              Aceptar__SHIFT
#define Aceptar_WIDTH              1u

/* Interrupt constants */
#if defined(Aceptar__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Aceptar_SetInterruptMode() function.
     *  @{
     */
        #define Aceptar_INTR_NONE      (uint16)(0x0000u)
        #define Aceptar_INTR_RISING    (uint16)(0x0001u)
        #define Aceptar_INTR_FALLING   (uint16)(0x0002u)
        #define Aceptar_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Aceptar_INTR_MASK      (0x01u) 
#endif /* (Aceptar__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Aceptar_PS                     (* (reg8 *) Aceptar__PS)
/* Data Register */
#define Aceptar_DR                     (* (reg8 *) Aceptar__DR)
/* Port Number */
#define Aceptar_PRT_NUM                (* (reg8 *) Aceptar__PRT) 
/* Connect to Analog Globals */                                                  
#define Aceptar_AG                     (* (reg8 *) Aceptar__AG)                       
/* Analog MUX bux enable */
#define Aceptar_AMUX                   (* (reg8 *) Aceptar__AMUX) 
/* Bidirectional Enable */                                                        
#define Aceptar_BIE                    (* (reg8 *) Aceptar__BIE)
/* Bit-mask for Aliased Register Access */
#define Aceptar_BIT_MASK               (* (reg8 *) Aceptar__BIT_MASK)
/* Bypass Enable */
#define Aceptar_BYP                    (* (reg8 *) Aceptar__BYP)
/* Port wide control signals */                                                   
#define Aceptar_CTL                    (* (reg8 *) Aceptar__CTL)
/* Drive Modes */
#define Aceptar_DM0                    (* (reg8 *) Aceptar__DM0) 
#define Aceptar_DM1                    (* (reg8 *) Aceptar__DM1)
#define Aceptar_DM2                    (* (reg8 *) Aceptar__DM2) 
/* Input Buffer Disable Override */
#define Aceptar_INP_DIS                (* (reg8 *) Aceptar__INP_DIS)
/* LCD Common or Segment Drive */
#define Aceptar_LCD_COM_SEG            (* (reg8 *) Aceptar__LCD_COM_SEG)
/* Enable Segment LCD */
#define Aceptar_LCD_EN                 (* (reg8 *) Aceptar__LCD_EN)
/* Slew Rate Control */
#define Aceptar_SLW                    (* (reg8 *) Aceptar__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Aceptar_PRTDSI__CAPS_SEL       (* (reg8 *) Aceptar__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Aceptar_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Aceptar__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Aceptar_PRTDSI__OE_SEL0        (* (reg8 *) Aceptar__PRTDSI__OE_SEL0) 
#define Aceptar_PRTDSI__OE_SEL1        (* (reg8 *) Aceptar__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Aceptar_PRTDSI__OUT_SEL0       (* (reg8 *) Aceptar__PRTDSI__OUT_SEL0) 
#define Aceptar_PRTDSI__OUT_SEL1       (* (reg8 *) Aceptar__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Aceptar_PRTDSI__SYNC_OUT       (* (reg8 *) Aceptar__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Aceptar__SIO_CFG)
    #define Aceptar_SIO_HYST_EN        (* (reg8 *) Aceptar__SIO_HYST_EN)
    #define Aceptar_SIO_REG_HIFREQ     (* (reg8 *) Aceptar__SIO_REG_HIFREQ)
    #define Aceptar_SIO_CFG            (* (reg8 *) Aceptar__SIO_CFG)
    #define Aceptar_SIO_DIFF           (* (reg8 *) Aceptar__SIO_DIFF)
#endif /* (Aceptar__SIO_CFG) */

/* Interrupt Registers */
#if defined(Aceptar__INTSTAT)
    #define Aceptar_INTSTAT            (* (reg8 *) Aceptar__INTSTAT)
    #define Aceptar_SNAP               (* (reg8 *) Aceptar__SNAP)
    
	#define Aceptar_0_INTTYPE_REG 		(* (reg8 *) Aceptar__0__INTTYPE)
#endif /* (Aceptar__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Aceptar_H */


/* [] END OF FILE */
