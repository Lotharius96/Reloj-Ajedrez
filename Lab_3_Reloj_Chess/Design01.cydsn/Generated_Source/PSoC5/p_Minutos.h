/*******************************************************************************
* File Name: p_Minutos.h  
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

#if !defined(CY_PINS_p_Minutos_H) /* Pins p_Minutos_H */
#define CY_PINS_p_Minutos_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "p_Minutos_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 p_Minutos__PORT == 15 && ((p_Minutos__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    p_Minutos_Write(uint8 value);
void    p_Minutos_SetDriveMode(uint8 mode);
uint8   p_Minutos_ReadDataReg(void);
uint8   p_Minutos_Read(void);
void    p_Minutos_SetInterruptMode(uint16 position, uint16 mode);
uint8   p_Minutos_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the p_Minutos_SetDriveMode() function.
     *  @{
     */
        #define p_Minutos_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define p_Minutos_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define p_Minutos_DM_RES_UP          PIN_DM_RES_UP
        #define p_Minutos_DM_RES_DWN         PIN_DM_RES_DWN
        #define p_Minutos_DM_OD_LO           PIN_DM_OD_LO
        #define p_Minutos_DM_OD_HI           PIN_DM_OD_HI
        #define p_Minutos_DM_STRONG          PIN_DM_STRONG
        #define p_Minutos_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define p_Minutos_MASK               p_Minutos__MASK
#define p_Minutos_SHIFT              p_Minutos__SHIFT
#define p_Minutos_WIDTH              1u

/* Interrupt constants */
#if defined(p_Minutos__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in p_Minutos_SetInterruptMode() function.
     *  @{
     */
        #define p_Minutos_INTR_NONE      (uint16)(0x0000u)
        #define p_Minutos_INTR_RISING    (uint16)(0x0001u)
        #define p_Minutos_INTR_FALLING   (uint16)(0x0002u)
        #define p_Minutos_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define p_Minutos_INTR_MASK      (0x01u) 
#endif /* (p_Minutos__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define p_Minutos_PS                     (* (reg8 *) p_Minutos__PS)
/* Data Register */
#define p_Minutos_DR                     (* (reg8 *) p_Minutos__DR)
/* Port Number */
#define p_Minutos_PRT_NUM                (* (reg8 *) p_Minutos__PRT) 
/* Connect to Analog Globals */                                                  
#define p_Minutos_AG                     (* (reg8 *) p_Minutos__AG)                       
/* Analog MUX bux enable */
#define p_Minutos_AMUX                   (* (reg8 *) p_Minutos__AMUX) 
/* Bidirectional Enable */                                                        
#define p_Minutos_BIE                    (* (reg8 *) p_Minutos__BIE)
/* Bit-mask for Aliased Register Access */
#define p_Minutos_BIT_MASK               (* (reg8 *) p_Minutos__BIT_MASK)
/* Bypass Enable */
#define p_Minutos_BYP                    (* (reg8 *) p_Minutos__BYP)
/* Port wide control signals */                                                   
#define p_Minutos_CTL                    (* (reg8 *) p_Minutos__CTL)
/* Drive Modes */
#define p_Minutos_DM0                    (* (reg8 *) p_Minutos__DM0) 
#define p_Minutos_DM1                    (* (reg8 *) p_Minutos__DM1)
#define p_Minutos_DM2                    (* (reg8 *) p_Minutos__DM2) 
/* Input Buffer Disable Override */
#define p_Minutos_INP_DIS                (* (reg8 *) p_Minutos__INP_DIS)
/* LCD Common or Segment Drive */
#define p_Minutos_LCD_COM_SEG            (* (reg8 *) p_Minutos__LCD_COM_SEG)
/* Enable Segment LCD */
#define p_Minutos_LCD_EN                 (* (reg8 *) p_Minutos__LCD_EN)
/* Slew Rate Control */
#define p_Minutos_SLW                    (* (reg8 *) p_Minutos__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define p_Minutos_PRTDSI__CAPS_SEL       (* (reg8 *) p_Minutos__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define p_Minutos_PRTDSI__DBL_SYNC_IN    (* (reg8 *) p_Minutos__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define p_Minutos_PRTDSI__OE_SEL0        (* (reg8 *) p_Minutos__PRTDSI__OE_SEL0) 
#define p_Minutos_PRTDSI__OE_SEL1        (* (reg8 *) p_Minutos__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define p_Minutos_PRTDSI__OUT_SEL0       (* (reg8 *) p_Minutos__PRTDSI__OUT_SEL0) 
#define p_Minutos_PRTDSI__OUT_SEL1       (* (reg8 *) p_Minutos__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define p_Minutos_PRTDSI__SYNC_OUT       (* (reg8 *) p_Minutos__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(p_Minutos__SIO_CFG)
    #define p_Minutos_SIO_HYST_EN        (* (reg8 *) p_Minutos__SIO_HYST_EN)
    #define p_Minutos_SIO_REG_HIFREQ     (* (reg8 *) p_Minutos__SIO_REG_HIFREQ)
    #define p_Minutos_SIO_CFG            (* (reg8 *) p_Minutos__SIO_CFG)
    #define p_Minutos_SIO_DIFF           (* (reg8 *) p_Minutos__SIO_DIFF)
#endif /* (p_Minutos__SIO_CFG) */

/* Interrupt Registers */
#if defined(p_Minutos__INTSTAT)
    #define p_Minutos_INTSTAT            (* (reg8 *) p_Minutos__INTSTAT)
    #define p_Minutos_SNAP               (* (reg8 *) p_Minutos__SNAP)
    
	#define p_Minutos_0_INTTYPE_REG 		(* (reg8 *) p_Minutos__0__INTTYPE)
#endif /* (p_Minutos__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_p_Minutos_H */


/* [] END OF FILE */
