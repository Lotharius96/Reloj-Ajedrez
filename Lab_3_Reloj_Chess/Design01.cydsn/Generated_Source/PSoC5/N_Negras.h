/*******************************************************************************
* File Name: N_Negras.h  
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

#if !defined(CY_PINS_N_Negras_H) /* Pins N_Negras_H */
#define CY_PINS_N_Negras_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "N_Negras_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 N_Negras__PORT == 15 && ((N_Negras__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    N_Negras_Write(uint8 value);
void    N_Negras_SetDriveMode(uint8 mode);
uint8   N_Negras_ReadDataReg(void);
uint8   N_Negras_Read(void);
void    N_Negras_SetInterruptMode(uint16 position, uint16 mode);
uint8   N_Negras_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the N_Negras_SetDriveMode() function.
     *  @{
     */
        #define N_Negras_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define N_Negras_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define N_Negras_DM_RES_UP          PIN_DM_RES_UP
        #define N_Negras_DM_RES_DWN         PIN_DM_RES_DWN
        #define N_Negras_DM_OD_LO           PIN_DM_OD_LO
        #define N_Negras_DM_OD_HI           PIN_DM_OD_HI
        #define N_Negras_DM_STRONG          PIN_DM_STRONG
        #define N_Negras_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define N_Negras_MASK               N_Negras__MASK
#define N_Negras_SHIFT              N_Negras__SHIFT
#define N_Negras_WIDTH              1u

/* Interrupt constants */
#if defined(N_Negras__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in N_Negras_SetInterruptMode() function.
     *  @{
     */
        #define N_Negras_INTR_NONE      (uint16)(0x0000u)
        #define N_Negras_INTR_RISING    (uint16)(0x0001u)
        #define N_Negras_INTR_FALLING   (uint16)(0x0002u)
        #define N_Negras_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define N_Negras_INTR_MASK      (0x01u) 
#endif /* (N_Negras__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define N_Negras_PS                     (* (reg8 *) N_Negras__PS)
/* Data Register */
#define N_Negras_DR                     (* (reg8 *) N_Negras__DR)
/* Port Number */
#define N_Negras_PRT_NUM                (* (reg8 *) N_Negras__PRT) 
/* Connect to Analog Globals */                                                  
#define N_Negras_AG                     (* (reg8 *) N_Negras__AG)                       
/* Analog MUX bux enable */
#define N_Negras_AMUX                   (* (reg8 *) N_Negras__AMUX) 
/* Bidirectional Enable */                                                        
#define N_Negras_BIE                    (* (reg8 *) N_Negras__BIE)
/* Bit-mask for Aliased Register Access */
#define N_Negras_BIT_MASK               (* (reg8 *) N_Negras__BIT_MASK)
/* Bypass Enable */
#define N_Negras_BYP                    (* (reg8 *) N_Negras__BYP)
/* Port wide control signals */                                                   
#define N_Negras_CTL                    (* (reg8 *) N_Negras__CTL)
/* Drive Modes */
#define N_Negras_DM0                    (* (reg8 *) N_Negras__DM0) 
#define N_Negras_DM1                    (* (reg8 *) N_Negras__DM1)
#define N_Negras_DM2                    (* (reg8 *) N_Negras__DM2) 
/* Input Buffer Disable Override */
#define N_Negras_INP_DIS                (* (reg8 *) N_Negras__INP_DIS)
/* LCD Common or Segment Drive */
#define N_Negras_LCD_COM_SEG            (* (reg8 *) N_Negras__LCD_COM_SEG)
/* Enable Segment LCD */
#define N_Negras_LCD_EN                 (* (reg8 *) N_Negras__LCD_EN)
/* Slew Rate Control */
#define N_Negras_SLW                    (* (reg8 *) N_Negras__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define N_Negras_PRTDSI__CAPS_SEL       (* (reg8 *) N_Negras__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define N_Negras_PRTDSI__DBL_SYNC_IN    (* (reg8 *) N_Negras__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define N_Negras_PRTDSI__OE_SEL0        (* (reg8 *) N_Negras__PRTDSI__OE_SEL0) 
#define N_Negras_PRTDSI__OE_SEL1        (* (reg8 *) N_Negras__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define N_Negras_PRTDSI__OUT_SEL0       (* (reg8 *) N_Negras__PRTDSI__OUT_SEL0) 
#define N_Negras_PRTDSI__OUT_SEL1       (* (reg8 *) N_Negras__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define N_Negras_PRTDSI__SYNC_OUT       (* (reg8 *) N_Negras__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(N_Negras__SIO_CFG)
    #define N_Negras_SIO_HYST_EN        (* (reg8 *) N_Negras__SIO_HYST_EN)
    #define N_Negras_SIO_REG_HIFREQ     (* (reg8 *) N_Negras__SIO_REG_HIFREQ)
    #define N_Negras_SIO_CFG            (* (reg8 *) N_Negras__SIO_CFG)
    #define N_Negras_SIO_DIFF           (* (reg8 *) N_Negras__SIO_DIFF)
#endif /* (N_Negras__SIO_CFG) */

/* Interrupt Registers */
#if defined(N_Negras__INTSTAT)
    #define N_Negras_INTSTAT            (* (reg8 *) N_Negras__INTSTAT)
    #define N_Negras_SNAP               (* (reg8 *) N_Negras__SNAP)
    
	#define N_Negras_0_INTTYPE_REG 		(* (reg8 *) N_Negras__0__INTTYPE)
#endif /* (N_Negras__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_N_Negras_H */


/* [] END OF FILE */
