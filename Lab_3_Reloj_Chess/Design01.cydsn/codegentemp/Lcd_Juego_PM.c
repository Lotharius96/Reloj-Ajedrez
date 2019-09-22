/*******************************************************************************
* File Name: Lcd_Juego_PM.c
* Version 2.20
*
* Description:
*  This file provides the API source code for the Static Segment LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Lcd_Juego.h"


static Lcd_Juego_BACKUP_STRUCT Lcd_Juego_backup;


/*******************************************************************************
* Function Name: Lcd_Juego_SaveConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void Lcd_Juego_SaveConfig(void) 
{
}


/*******************************************************************************
* Function Name: Lcd_Juego_RestoreConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void Lcd_Juego_RestoreConfig(void) 
{
}


/*******************************************************************************
* Function Name: Lcd_Juego_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the sleep mode.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Lcd_Juego_Sleep(void) 
{
    Lcd_Juego_backup.enableState = Lcd_Juego_enableState;
    Lcd_Juego_SaveConfig();
    Lcd_Juego_Stop();
}


/*******************************************************************************
* Function Name: Lcd_Juego_Wakeup
********************************************************************************
*
* Summary:
*  Wakes the component from sleep mode. Configures DMA and enables the component
*  for normal operation.
*
* Parameters:
*  Lcd_Juego_enableState - Global variable.
*
* Return:
*  Status one of standard status for PSoC3 Component
*       CYRET_SUCCESS - Function completed successfully.
*       CYRET_LOCKED - The object was locked, already in use. Some of TDs or
*                      a channel already in use.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Lcd_Juego_Wakeup(void) 
{
    Lcd_Juego_RestoreConfig();

    if(Lcd_Juego_backup.enableState == 1u)
    {
        Lcd_Juego_Enable();
    }
}


/* [] END OF FILE */
