/*******************************************************************************
* File Name: p_Segundos.h  
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

#if !defined(CY_PINS_p_Segundos_H) /* Pins p_Segundos_H */
#define CY_PINS_p_Segundos_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "p_Segundos_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 p_Segundos__PORT == 15 && ((p_Segundos__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    p_Segundos_Write(uint8 value);
void    p_Segundos_SetDriveMode(uint8 mode);
uint8   p_Segundos_ReadDataReg(void);
uint8   p_Segundos_Read(void);
void    p_Segundos_SetInterruptMode(uint16 position, uint16 mode);
uint8   p_Segundos_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the p_Segundos_SetDriveMode() function.
     *  @{
     */
        #define p_Segundos_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define p_Segundos_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define p_Segundos_DM_RES_UP          PIN_DM_RES_UP
        #define p_Segundos_DM_RES_DWN         PIN_DM_RES_DWN
        #define p_Segundos_DM_OD_LO           PIN_DM_OD_LO
        #define p_Segundos_DM_OD_HI           PIN_DM_OD_HI
        #define p_Segundos_DM_STRONG          PIN_DM_STRONG
        #define p_Segundos_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define p_Segundos_MASK               p_Segundos__MASK
#define p_Segundos_SHIFT              p_Segundos__SHIFT
#define p_Segundos_WIDTH              1u

/* Interrupt constants */
#if defined(p_Segundos__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in p_Segundos_SetInterruptMode() function.
     *  @{
     */
        #define p_Segundos_INTR_NONE      (uint16)(0x0000u)
        #define p_Segundos_INTR_RISING    (uint16)(0x0001u)
        #define p_Segundos_INTR_FALLING   (uint16)(0x0002u)
        #define p_Segundos_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define p_Segundos_INTR_MASK      (0x01u) 
#endif /* (p_Segundos__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define p_Segundos_PS                     (* (reg8 *) p_Segundos__PS)
/* Data Register */
#define p_Segundos_DR                     (* (reg8 *) p_Segundos__DR)
/* Port Number */
#define p_Segundos_PRT_NUM                (* (reg8 *) p_Segundos__PRT) 
/* Connect to Analog Globals */                                                  
#define p_Segundos_AG                     (* (reg8 *) p_Segundos__AG)                       
/* Analog MUX bux enable */
#define p_Segundos_AMUX                   (* (reg8 *) p_Segundos__AMUX) 
/* Bidirectional Enable */                                                        
#define p_Segundos_BIE                    (* (reg8 *) p_Segundos__BIE)
/* Bit-mask for Aliased Register Access */
#define p_Segundos_BIT_MASK               (* (reg8 *) p_Segundos__BIT_MASK)
/* Bypass Enable */
#define p_Segundos_BYP                    (* (reg8 *) p_Segundos__BYP)
/* Port wide control signals */                                                   
#define p_Segundos_CTL                    (* (reg8 *) p_Segundos__CTL)
/* Drive Modes */
#define p_Segundos_DM0                    (* (reg8 *) p_Segundos__DM0) 
#define p_Segundos_DM1                    (* (reg8 *) p_Segundos__DM1)
#define p_Segundos_DM2                    (* (reg8 *) p_Segundos__DM2) 
/* Input Buffer Disable Override */
#define p_Segundos_INP_DIS                (* (reg8 *) p_Segundos__INP_DIS)
/* LCD Common or Segment Drive */
#define p_Segundos_LCD_COM_SEG            (* (reg8 *) p_Segundos__LCD_COM_SEG)
/* Enable Segment LCD */
#define p_Segundos_LCD_EN                 (* (reg8 *) p_Segundos__LCD_EN)
/* Slew Rate Control */
#define p_Segundos_SLW                    (* (reg8 *) p_Segundos__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define p_Segundos_PRTDSI__CAPS_SEL       (* (reg8 *) p_Segundos__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define p_Segundos_PRTDSI__DBL_SYNC_IN    (* (reg8 *) p_Segundos__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define p_Segundos_PRTDSI__OE_SEL0        (* (reg8 *) p_Segundos__PRTDSI__OE_SEL0) 
#define p_Segundos_PRTDSI__OE_SEL1        (* (reg8 *) p_Segundos__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define p_Segundos_PRTDSI__OUT_SEL0       (* (reg8 *) p_Segundos__PRTDSI__OUT_SEL0) 
#define p_Segundos_PRTDSI__OUT_SEL1       (* (reg8 *) p_Segundos__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define p_Segundos_PRTDSI__SYNC_OUT       (* (reg8 *) p_Segundos__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(p_Segundos__SIO_CFG)
    #define p_Segundos_SIO_HYST_EN        (* (reg8 *) p_Segundos__SIO_HYST_EN)
    #define p_Segundos_SIO_REG_HIFREQ     (* (reg8 *) p_Segundos__SIO_REG_HIFREQ)
    #define p_Segundos_SIO_CFG            (* (reg8 *) p_Segundos__SIO_CFG)
    #define p_Segundos_SIO_DIFF           (* (reg8 *) p_Segundos__SIO_DIFF)
#endif /* (p_Segundos__SIO_CFG) */

/* Interrupt Registers */
#if defined(p_Segundos__INTSTAT)
    #define p_Segundos_INTSTAT            (* (reg8 *) p_Segundos__INTSTAT)
    #define p_Segundos_SNAP               (* (reg8 *) p_Segundos__SNAP)
    
	#define p_Segundos_0_INTTYPE_REG 		(* (reg8 *) p_Segundos__0__INTTYPE)
#endif /* (p_Segundos__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_p_Segundos_H */


/* [] END OF FILE */
