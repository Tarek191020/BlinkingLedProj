/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl_Types.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTCTRL_TYPES_H
#define INTCTRL_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define OFFSET_VECT 0x0000
#define INIT_SP *((volatile uint32*)(0x0000+OFFSET_VECT))
#define RESET *((volatile uint32*)(0x0004+OFFSET_VECT))
#define NMI *((volatile uint32*)(0x0008+OFFSET_VECT))
#define HARD_FAULT *((volatile uint32*)(0x000C+OFFSET_VECT))
#define MEM_MNG_FAULT *((volatile uint32*)(0x0010+OFFSET_VECT))
#define BUS_FAULT *((volatile uint32*)(0x0014+OFFSET_VECT))
#define USAGE_FAULT *((volatile uint32*)(0x0018+OFFSET_VECT))
#define SVCALL *((volatile uint32*)(0x002C+OFFSET_VECT))
#define PENDSV *((volatile uint32*)(0x0038+OFFSET_VECT))
#define SYSTICK *((volatile uint32*)(0x003C+OFFSET_VECT))


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


 
#endif  /* INTCTRL_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Types.h
 *********************************************************************************************************************/