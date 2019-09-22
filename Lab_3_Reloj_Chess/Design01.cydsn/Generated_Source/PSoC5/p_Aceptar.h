/*******************************************************************************
* File Name: p_Aceptar.h  
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

#if !defined(CY_PINS_p_Aceptar_H) /* Pins p_Aceptar_H */
#define CY_PINS_p_Aceptar_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "p_Aceptar_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 p_Aceptar__PORT == 15 && ((p_Aceptar__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    p_Aceptar_Write(uint8 value);
void    p_Aceptar_SetDriveMode(uint8 mode);
uint8   p_Aceptar_ReadDataReg(void);
uint8   p_Aceptar_Read(void);
void    p_Aceptar_SetInterruptMode(uint16 position, uint16 mode);
uint8   p_Aceptar_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the p_Aceptar_SetDriveMode() function.
     *  @{
     */
        #define p_Aceptar_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define p_Aceptar_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define p_Aceptar_DM_RES_UP          PIN_DM_RES_UP
        #define p_Aceptar_DM_RES_DWN         PIN_DM_RES_DWN
        #define p_Aceptar_DM_OD_LO           PIN_DM_OD_LO
        #define p_Aceptar_DM_OD_HI           PIN_DM_OD_HI
        #define p_Aceptar_DM_STRONG          PIN_DM_STRONG
        #define p_Aceptar_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define p_Aceptar_MASK               p_Aceptar__MASK
#define p_Aceptar_SHIFT              p_Aceptar__SHIFT
#define p_Aceptar_WIDTH              1u

/* Interrupt constants */
#if defined(p_Aceptar__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in p_Aceptar_SetInterruptMode() function.
     *  @{
     */
        #define p_Aceptar_INTR_NONE      (uint16)(0x0000u)
        #define p_Aceptar_INTR_RISING    (uint16)(0x0001u)
        #define p_Aceptar_INTR_FALLING   (uint16)(0x0002u)
        #define p_Aceptar_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define p_Aceptar_INTR_MASK      (0x01u) 
#endif /* (p_Aceptar__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define p_Aceptar_PS                     (* (reg8 *) p_Aceptar__PS)
/* Data Register */
#define p_Aceptar_DR                     (* (reg8 *) p_Aceptar__DR)
/* Port Number */
#define p_Aceptar_PRT_NUM                (* (reg8 *) p_Aceptar__PRT) 
/* Connect to Analog Globals */                                                  
#define p_Aceptar_AG                     (* (reg8 *) p_Aceptar__AG)                       
/* Analog MUX bux enable */
#define p_Aceptar_AMUX                   (* (reg8 *) p_Aceptar__AMUX) 
/* Bidirectional Enable */                                                        
#define p_Aceptar_BIE                    (* (reg8 *) p_Aceptar__BIE)
/* Bit-mask for Aliased Register Access */
#define p_Aceptar_BIT_MASK               (* (reg8 *) p_Aceptar__BIT_MASK)
/* Bypass Enable */
#define p_Aceptar_BYP                    (* (reg8 *) p_Aceptar__BYP)
/* Port wide control signals */                                                   
#define p_Aceptar_CTL                    (* (reg8 *) p_Aceptar__CTL)
/* Drive Modes */
#define p_Aceptar_DM0                    (* (reg8 *) p_Aceptar__DM0) 
#define p_Aceptar_DM1                    (* (reg8 *) p_Aceptar__DM1)
#define p_Aceptar_DM2                    (* (reg8 *) p_Aceptar__DM2) 
/* Input Buffer Disable Override */
#define p_Aceptar_INP_DIS                (* (reg8 *) p_Aceptar__INP_DIS)
/* LCD Common or Segment Drive */
#define p_Aceptar_LCD_COM_SEG            (* (reg8 *) p_Aceptar__LCD_COM_SEG)
/* Enable Segment LCD */
#define p_Aceptar_LCD_EN                 (* (reg8 *) p_Aceptar__LCD_EN)
/* Slew Rate Control */
#define p_Aceptar_SLW                    (* (reg8 *) p_Aceptar__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define p_Aceptar_PRTDSI__CAPS_SEL       (* (reg8 *) p_Aceptar__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define p_Aceptar_PRTDSI__DBL_SYNC_IN    (* (reg8 *) p_Aceptar__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define p_Aceptar_PRTDSI__OE_SEL0        (* (reg8 *) p_Aceptar__PRTDSI__OE_SEL0) 
#define p_Aceptar_PRTDSI__OE_SEL1        (* (reg8 *) p_Aceptar__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define p_Aceptar_PRTDSI__OUT_SEL0       (* (reg8 *) p_Aceptar__PRTDSI__OUT_SEL0) 
#define p_Aceptar_PRTDSI__OUT_SEL1       (* (reg8 *) p_Aceptar__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define p_Aceptar_PRTDSI__SYNC_OUT       (* (reg8 *) p_Aceptar__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(p_Aceptar__SIO_CFG)
    #define p_Aceptar_SIO_HYST_EN        (* (reg8 *) p_Aceptar__SIO_HYST_EN)
    #define p_Aceptar_SIO_REG_HIFREQ     (* (reg8 *) p_Aceptar__SIO_REG_HIFREQ)
    #define p_Aceptar_SIO_CFG            (* (reg8 *) p_Aceptar__SIO_CFG)
    #define p_Aceptar_SIO_DIFF           (* (reg8 *) p_Aceptar__SIO_DIFF)
#endif /* (p_Aceptar__SIO_CFG) */

/* Interrupt Registers */
#if defined(p_Aceptar__INTSTAT)
    #define p_Aceptar_INTSTAT            (* (reg8 *) p_Aceptar__INTSTAT)
    #define p_Aceptar_SNAP               (* (reg8 *) p_Aceptar__SNAP)
    
	#define p_Aceptar_0_INTTYPE_REG 		(* (reg8 *) p_Aceptar__0__INTTYPE)
#endif /* (p_Aceptar__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_p_Aceptar_H */


/* [] END OF FILE */
