/*******************************************************************************
* File Name: Tiempos.h  
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

#if !defined(CY_PINS_Tiempos_H) /* Pins Tiempos_H */
#define CY_PINS_Tiempos_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Tiempos_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Tiempos__PORT == 15 && ((Tiempos__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Tiempos_Write(uint8 value);
void    Tiempos_SetDriveMode(uint8 mode);
uint8   Tiempos_ReadDataReg(void);
uint8   Tiempos_Read(void);
void    Tiempos_SetInterruptMode(uint16 position, uint16 mode);
uint8   Tiempos_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Tiempos_SetDriveMode() function.
     *  @{
     */
        #define Tiempos_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Tiempos_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Tiempos_DM_RES_UP          PIN_DM_RES_UP
        #define Tiempos_DM_RES_DWN         PIN_DM_RES_DWN
        #define Tiempos_DM_OD_LO           PIN_DM_OD_LO
        #define Tiempos_DM_OD_HI           PIN_DM_OD_HI
        #define Tiempos_DM_STRONG          PIN_DM_STRONG
        #define Tiempos_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Tiempos_MASK               Tiempos__MASK
#define Tiempos_SHIFT              Tiempos__SHIFT
#define Tiempos_WIDTH              1u

/* Interrupt constants */
#if defined(Tiempos__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Tiempos_SetInterruptMode() function.
     *  @{
     */
        #define Tiempos_INTR_NONE      (uint16)(0x0000u)
        #define Tiempos_INTR_RISING    (uint16)(0x0001u)
        #define Tiempos_INTR_FALLING   (uint16)(0x0002u)
        #define Tiempos_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Tiempos_INTR_MASK      (0x01u) 
#endif /* (Tiempos__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Tiempos_PS                     (* (reg8 *) Tiempos__PS)
/* Data Register */
#define Tiempos_DR                     (* (reg8 *) Tiempos__DR)
/* Port Number */
#define Tiempos_PRT_NUM                (* (reg8 *) Tiempos__PRT) 
/* Connect to Analog Globals */                                                  
#define Tiempos_AG                     (* (reg8 *) Tiempos__AG)                       
/* Analog MUX bux enable */
#define Tiempos_AMUX                   (* (reg8 *) Tiempos__AMUX) 
/* Bidirectional Enable */                                                        
#define Tiempos_BIE                    (* (reg8 *) Tiempos__BIE)
/* Bit-mask for Aliased Register Access */
#define Tiempos_BIT_MASK               (* (reg8 *) Tiempos__BIT_MASK)
/* Bypass Enable */
#define Tiempos_BYP                    (* (reg8 *) Tiempos__BYP)
/* Port wide control signals */                                                   
#define Tiempos_CTL                    (* (reg8 *) Tiempos__CTL)
/* Drive Modes */
#define Tiempos_DM0                    (* (reg8 *) Tiempos__DM0) 
#define Tiempos_DM1                    (* (reg8 *) Tiempos__DM1)
#define Tiempos_DM2                    (* (reg8 *) Tiempos__DM2) 
/* Input Buffer Disable Override */
#define Tiempos_INP_DIS                (* (reg8 *) Tiempos__INP_DIS)
/* LCD Common or Segment Drive */
#define Tiempos_LCD_COM_SEG            (* (reg8 *) Tiempos__LCD_COM_SEG)
/* Enable Segment LCD */
#define Tiempos_LCD_EN                 (* (reg8 *) Tiempos__LCD_EN)
/* Slew Rate Control */
#define Tiempos_SLW                    (* (reg8 *) Tiempos__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Tiempos_PRTDSI__CAPS_SEL       (* (reg8 *) Tiempos__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Tiempos_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Tiempos__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Tiempos_PRTDSI__OE_SEL0        (* (reg8 *) Tiempos__PRTDSI__OE_SEL0) 
#define Tiempos_PRTDSI__OE_SEL1        (* (reg8 *) Tiempos__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Tiempos_PRTDSI__OUT_SEL0       (* (reg8 *) Tiempos__PRTDSI__OUT_SEL0) 
#define Tiempos_PRTDSI__OUT_SEL1       (* (reg8 *) Tiempos__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Tiempos_PRTDSI__SYNC_OUT       (* (reg8 *) Tiempos__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Tiempos__SIO_CFG)
    #define Tiempos_SIO_HYST_EN        (* (reg8 *) Tiempos__SIO_HYST_EN)
    #define Tiempos_SIO_REG_HIFREQ     (* (reg8 *) Tiempos__SIO_REG_HIFREQ)
    #define Tiempos_SIO_CFG            (* (reg8 *) Tiempos__SIO_CFG)
    #define Tiempos_SIO_DIFF           (* (reg8 *) Tiempos__SIO_DIFF)
#endif /* (Tiempos__SIO_CFG) */

/* Interrupt Registers */
#if defined(Tiempos__INTSTAT)
    #define Tiempos_INTSTAT            (* (reg8 *) Tiempos__INTSTAT)
    #define Tiempos_SNAP               (* (reg8 *) Tiempos__SNAP)
    
	#define Tiempos_0_INTTYPE_REG 		(* (reg8 *) Tiempos__0__INTTYPE)
#endif /* (Tiempos__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Tiempos_H */


/* [] END OF FILE */
