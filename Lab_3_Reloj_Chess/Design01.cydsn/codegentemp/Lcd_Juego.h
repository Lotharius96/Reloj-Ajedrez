/*******************************************************************************
* File Name: Lcd_Juego.h
* Version 2.20
*
* Description:
*  This header file contains registers and constants associated with the
*  Character LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CHARLCD_Lcd_Juego_H)
#define CY_CHARLCD_Lcd_Juego_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*   Conditional Compilation Parameters
***************************************/

#define Lcd_Juego_CONVERSION_ROUTINES     (1u)
#define Lcd_Juego_CUSTOM_CHAR_SET         (0u)

/* Custom character set types */
#define Lcd_Juego_NONE                     (0u)    /* No Custom Fonts      */
#define Lcd_Juego_HORIZONTAL_BG            (1u)    /* Horizontal Bar Graph */
#define Lcd_Juego_VERTICAL_BG              (2u)    /* Vertical Bar Graph   */
#define Lcd_Juego_USER_DEFINED             (3u)    /* User Defined Fonts   */


/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;
} Lcd_Juego_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

void Lcd_Juego_Init(void) ;
void Lcd_Juego_Enable(void) ;
void Lcd_Juego_Start(void) ;
void Lcd_Juego_Stop(void) ;
void Lcd_Juego_WriteControl(uint8 cByte) ;
void Lcd_Juego_WriteData(uint8 dByte) ;
void Lcd_Juego_PrintString(char8 const string[]) ;
void Lcd_Juego_Position(uint8 row, uint8 column) ;
void Lcd_Juego_PutChar(char8 character) ;
void Lcd_Juego_IsReady(void) ;
void Lcd_Juego_SaveConfig(void) ;
void Lcd_Juego_RestoreConfig(void) ;
void Lcd_Juego_Sleep(void) ;
void Lcd_Juego_Wakeup(void) ;

#if((Lcd_Juego_CUSTOM_CHAR_SET == Lcd_Juego_VERTICAL_BG) || \
                (Lcd_Juego_CUSTOM_CHAR_SET == Lcd_Juego_HORIZONTAL_BG))

    void  Lcd_Juego_LoadCustomFonts(uint8 const customData[])
                        ;

    void  Lcd_Juego_DrawHorizontalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value)
                         ;

    void Lcd_Juego_DrawVerticalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value)
                        ;

#endif /* ((Lcd_Juego_CUSTOM_CHAR_SET == Lcd_Juego_VERTICAL_BG) */

#if(Lcd_Juego_CUSTOM_CHAR_SET == Lcd_Juego_USER_DEFINED)

    void Lcd_Juego_LoadCustomFonts(uint8 const customData[])
                            ;

#endif /* ((Lcd_Juego_CUSTOM_CHAR_SET == Lcd_Juego_USER_DEFINED) */

#if(Lcd_Juego_CONVERSION_ROUTINES == 1u)

    /* ASCII Conversion Routines */
    void Lcd_Juego_PrintInt8(uint8 value) ;
    void Lcd_Juego_PrintInt16(uint16 value) ;
    void Lcd_Juego_PrintInt32(uint32 value) ;
    void Lcd_Juego_PrintNumber(uint16 value) ; 
    void Lcd_Juego_PrintU32Number(uint32 value) ;
    
#endif /* Lcd_Juego_CONVERSION_ROUTINES == 1u */

/* Clear Macro */
#define Lcd_Juego_ClearDisplay() Lcd_Juego_WriteControl(Lcd_Juego_CLEAR_DISPLAY)

/* Off Macro */
#define Lcd_Juego_DisplayOff() Lcd_Juego_WriteControl(Lcd_Juego_DISPLAY_CURSOR_OFF)

/* On Macro */
#define Lcd_Juego_DisplayOn() Lcd_Juego_WriteControl(Lcd_Juego_DISPLAY_ON_CURSOR_OFF)

#define Lcd_Juego_PrintNumber(value) Lcd_Juego_PrintU32Number((uint16) (value))


/***************************************
*           Global Variables
***************************************/

extern uint8 Lcd_Juego_initVar;
extern uint8 Lcd_Juego_enableState;
extern uint8 const CYCODE Lcd_Juego_customFonts[64u];


/***************************************
*           API Constants
***************************************/

/* Full Byte Commands Sent as Two Nibbles */
#define Lcd_Juego_DISPLAY_8_BIT_INIT       (0x03u)
#define Lcd_Juego_DISPLAY_4_BIT_INIT       (0x02u)
#define Lcd_Juego_DISPLAY_CURSOR_OFF       (0x08u)
#define Lcd_Juego_CLEAR_DISPLAY            (0x01u)
#define Lcd_Juego_CURSOR_AUTO_INCR_ON      (0x06u)
#define Lcd_Juego_DISPLAY_CURSOR_ON        (0x0Eu)
#define Lcd_Juego_DISPLAY_2_LINES_5x10     (0x2Cu)
#define Lcd_Juego_DISPLAY_ON_CURSOR_OFF    (0x0Cu)

#define Lcd_Juego_RESET_CURSOR_POSITION    (0x03u)
#define Lcd_Juego_CURSOR_WINK              (0x0Du)
#define Lcd_Juego_CURSOR_BLINK             (0x0Fu)
#define Lcd_Juego_CURSOR_SH_LEFT           (0x10u)
#define Lcd_Juego_CURSOR_SH_RIGHT          (0x14u)
#define Lcd_Juego_DISPLAY_SCRL_LEFT        (0x18u)
#define Lcd_Juego_DISPLAY_SCRL_RIGHT       (0x1Eu)
#define Lcd_Juego_CURSOR_HOME              (0x02u)
#define Lcd_Juego_CURSOR_LEFT              (0x04u)
#define Lcd_Juego_CURSOR_RIGHT             (0x06u)

/* Point to Character Generator Ram 0 */
#define Lcd_Juego_CGRAM_0                  (0x40u)

/* Point to Display Data Ram 0 */
#define Lcd_Juego_DDRAM_0                  (0x80u)

/* LCD Characteristics */
#define Lcd_Juego_CHARACTER_WIDTH          (0x05u)
#define Lcd_Juego_CHARACTER_HEIGHT         (0x08u)

#if(Lcd_Juego_CONVERSION_ROUTINES == 1u)
    #define Lcd_Juego_NUMBER_OF_REMAINDERS_U32 (0x0Au)
    #define Lcd_Juego_TEN                      (0x0Au)
    #define Lcd_Juego_8_BIT_SHIFT              (8u)
    #define Lcd_Juego_32_BIT_SHIFT             (32u)
    #define Lcd_Juego_ZERO_CHAR_ASCII          (48u)
#endif /* Lcd_Juego_CONVERSION_ROUTINES == 1u */

/* Nibble Offset and Mask */
#define Lcd_Juego_NIBBLE_SHIFT             (0x04u)
#define Lcd_Juego_NIBBLE_MASK              (0x0Fu)

/* LCD Module Address Constants */
#define Lcd_Juego_ROW_0_START              (0x80u)
#define Lcd_Juego_ROW_1_START              (0xC0u)
#define Lcd_Juego_ROW_2_START              (0x94u)
#define Lcd_Juego_ROW_3_START              (0xD4u)

/* Custom Character References */
#define Lcd_Juego_CUSTOM_0                 (0x00u)
#define Lcd_Juego_CUSTOM_1                 (0x01u)
#define Lcd_Juego_CUSTOM_2                 (0x02u)
#define Lcd_Juego_CUSTOM_3                 (0x03u)
#define Lcd_Juego_CUSTOM_4                 (0x04u)
#define Lcd_Juego_CUSTOM_5                 (0x05u)
#define Lcd_Juego_CUSTOM_6                 (0x06u)
#define Lcd_Juego_CUSTOM_7                 (0x07u)

/* Other constants */
#define Lcd_Juego_BYTE_UPPER_NIBBLE_SHIFT  (0x04u)
#define Lcd_Juego_BYTE_LOWER_NIBBLE_MASK   (0x0Fu)
#define Lcd_Juego_U16_UPPER_BYTE_SHIFT     (0x08u)
#define Lcd_Juego_U16_LOWER_BYTE_MASK      (0xFFu)
#define Lcd_Juego_CUSTOM_CHAR_SET_LEN      (0x40u)

#define Lcd_Juego_LONGEST_CMD_US           (0x651u)
#define Lcd_Juego_WAIT_CYCLE               (0x10u)
#define Lcd_Juego_READY_DELAY              ((Lcd_Juego_LONGEST_CMD_US * 4u)/(Lcd_Juego_WAIT_CYCLE))


/***************************************
*             Registers
***************************************/

/* Device specific registers */
#if (CY_PSOC4)

    #define Lcd_Juego_PORT_DR_REG           (*(reg32 *) Lcd_Juego_LCDPort__DR)  /* Data Output Register */
    #define Lcd_Juego_PORT_DR_PTR           ( (reg32 *) Lcd_Juego_LCDPort__DR)
    #define Lcd_Juego_PORT_PS_REG           (*(reg32 *) Lcd_Juego_LCDPort__PS)  /* Pin State Register */
    #define Lcd_Juego_PORT_PS_PTR           ( (reg32 *) Lcd_Juego_LCDPort__PS)
    
    #define Lcd_Juego_PORT_PC_REG           (*(reg32 *) Lcd_Juego_LCDPort__PC)
    #define Lcd_Juego_PORT_PC_PTR           (*(reg32 *) Lcd_Juego_LCDPort__PC)
    
#else

    #define Lcd_Juego_PORT_DR_REG           (*(reg8 *) Lcd_Juego_LCDPort__DR)  /* Data Output Register */
    #define Lcd_Juego_PORT_DR_PTR           ( (reg8 *) Lcd_Juego_LCDPort__DR)
    #define Lcd_Juego_PORT_PS_REG           (*(reg8 *) Lcd_Juego_LCDPort__PS)  /* Pin State Register */
    #define Lcd_Juego_PORT_PS_PTR           ( (reg8 *) Lcd_Juego_LCDPort__PS)

    #define Lcd_Juego_PORT_DM0_REG          (*(reg8 *) Lcd_Juego_LCDPort__DM0) /* Port Drive Mode 0 */
    #define Lcd_Juego_PORT_DM0_PTR          ( (reg8 *) Lcd_Juego_LCDPort__DM0)
    #define Lcd_Juego_PORT_DM1_REG          (*(reg8 *) Lcd_Juego_LCDPort__DM1) /* Port Drive Mode 1 */
    #define Lcd_Juego_PORT_DM1_PTR          ( (reg8 *) Lcd_Juego_LCDPort__DM1)
    #define Lcd_Juego_PORT_DM2_REG          (*(reg8 *) Lcd_Juego_LCDPort__DM2) /* Port Drive Mode 2 */
    #define Lcd_Juego_PORT_DM2_PTR          ( (reg8 *) Lcd_Juego_LCDPort__DM2)

#endif /* CY_PSOC4 */


/***************************************
*       Register Constants
***************************************/

/* SHIFT must be 1 or 0 */
#if (0 == Lcd_Juego_LCDPort__SHIFT)
    #define Lcd_Juego_PORT_SHIFT               (0x00u)
#else
    #define Lcd_Juego_PORT_SHIFT               (0x01u)
#endif /* (0 == Lcd_Juego_LCDPort__SHIFT) */

#define Lcd_Juego_PORT_MASK                ((uint8) (Lcd_Juego_LCDPort__MASK))

#if (CY_PSOC4)

    #define Lcd_Juego_DM_PIN_STEP              (3u)
    /* Hi-Z Digital is defined by the value of "001b" and this should be set for
    * four data pins, in this way we get - 0x00000249. A similar Strong drive
    * is defined with "110b" so we get 0x00000DB6.
    */
    #define Lcd_Juego_HIGH_Z_DATA_DM           ((0x00000249ul) << (Lcd_Juego_PORT_SHIFT *\
                                                                          Lcd_Juego_DM_PIN_STEP))
    #define Lcd_Juego_STRONG_DATA_DM           ((0x00000DB6ul) << (Lcd_Juego_PORT_SHIFT *\
                                                                          Lcd_Juego_DM_PIN_STEP))
    #define Lcd_Juego_DATA_PINS_MASK           (0x00000FFFul)
    #define Lcd_Juego_DM_DATA_MASK             ((uint32) (Lcd_Juego_DATA_PINS_MASK << \
                                                      (Lcd_Juego_PORT_SHIFT * Lcd_Juego_DM_PIN_STEP)))

#else

    /* Drive Mode register values for High Z */
    #define Lcd_Juego_HIGH_Z_DM0               (0xFFu)
    #define Lcd_Juego_HIGH_Z_DM1               (0x00u)
    #define Lcd_Juego_HIGH_Z_DM2               (0x00u)

    /* Drive Mode register values for High Z Analog */
    #define Lcd_Juego_HIGH_Z_A_DM0             (0x00u)
    #define Lcd_Juego_HIGH_Z_A_DM1             (0x00u)
    #define Lcd_Juego_HIGH_Z_A_DM2             (0x00u)

    /* Drive Mode register values for Strong */
    #define Lcd_Juego_STRONG_DM0               (0x00u)
    #define Lcd_Juego_STRONG_DM1               (0xFFu)
    #define Lcd_Juego_STRONG_DM2               (0xFFu)

#endif /* CY_PSOC4 */

/* Pin Masks */
#define Lcd_Juego_RS                     ((uint8) \
                                                (((uint8) 0x20u) << Lcd_Juego_LCDPort__SHIFT))
#define Lcd_Juego_RW                     ((uint8) \
                                                (((uint8) 0x40u) << Lcd_Juego_LCDPort__SHIFT))
#define Lcd_Juego_E                      ((uint8) \
                                                (((uint8) 0x10u) << Lcd_Juego_LCDPort__SHIFT))
#define Lcd_Juego_READY_BIT              ((uint8) \
                                                (((uint8) 0x08u) << Lcd_Juego_LCDPort__SHIFT))
#define Lcd_Juego_DATA_MASK              ((uint8) \
                                                (((uint8) 0x0Fu) << Lcd_Juego_LCDPort__SHIFT))

/* These names are obsolete and will be removed in future revisions */
#define Lcd_Juego_PORT_DR                  Lcd_Juego_PORT_DR_REG
#define Lcd_Juego_PORT_PS                  Lcd_Juego_PORT_PS_REG
#define Lcd_Juego_PORT_DM0                 Lcd_Juego_PORT_DM0_REG
#define Lcd_Juego_PORT_DM1                 Lcd_Juego_PORT_DM1_REG
#define Lcd_Juego_PORT_DM2                 Lcd_Juego_PORT_DM2_REG


/***************************************
*       Obsolete function names
***************************************/
#if(Lcd_Juego_CONVERSION_ROUTINES == 1u)
    /* This function names are obsolete and will be removed in future 
    * revisions of the component.
    */
    #define Lcd_Juego_PrintDecUint16(x)   Lcd_Juego_PrintNumber(x)  
    #define Lcd_Juego_PrintHexUint8(x)    Lcd_Juego_PrintInt8(x)
    #define Lcd_Juego_PrintHexUint16(x)   Lcd_Juego_PrintInt16(x)        

#endif /* Lcd_Juego_CONVERSION_ROUTINES == 1u */

#endif /* CY_CHARLCD_Lcd_Juego_H */


/* [] END OF FILE */
