/***************************************************************************************************
*   FILE DESCRIPTION
*   ------------------------------------------------------------------------------------------------*/
/**      \file Led.c
*      \brief
*
*     \details
*
*
****************************************************************************************************/

/****************************************************************************************************
*     INCLUDES
****************************************************************************************************/

#include "std_types.h"
#include "Led.h"
#include "Dio.h"

/***************************************************************************************************
*   LOCAL MACROS CONSTANT\FUNCTION
***************************************************************************************************/

/*************************************************************************************************
*   LOCAL DATA
***********************************************************************************************/

/**********************************************************************************************
*   GLOBAL DATA
*************************************************************************************************/

/***********************************************************************************************
*   LOCAL FUNNCTION PROTOTYPE
************************************************************************************************/

/***********************************************************************************************
*   LOCAL FUNCTIONS 
*************************************************************************************************/

/************************************************************************************************
*   GLOBAL FUNCTIONS
************************************************************************************************/


/***********************************************************************************************
* \Syntax           : Std_ReturnTypefunctionName(AnyType ParameterName)
* \Description      : Describe this service
*
* \Sync\Async       : Synchorouns
* \Reentrancy       : Non Rentrant
* \Parameters (in)  : ParameterName  ParameterDescription
* \Parameters (out) : None
* \Return Value:    :Std_ReturnType  E_OK
                                     E_NOT_OK
**************************************************************************************************/
void Leds_ON(Dio_PortType Portname)
{
	Dio_WritePort(Portname,HIGH);
}
void Leds_OFF(Dio_PortType Portname)
{
	Dio_WritePort(Portname,LOW);
}
void Leds_TOGG(Dio_PortType Portname)
{
	Dio_FlipPort(Portname);
}
/************************************************************************************************
*  END OF FILE  :    Led.C
*************************************************************************************************/