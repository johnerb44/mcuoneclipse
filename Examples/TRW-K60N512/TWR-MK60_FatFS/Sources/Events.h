/** ###################################################################
**     Filename  : Events.h
**     Project   : ProcessorExpert
**     Processor : MK60DN512ZVMD10
**     Component : Events
**     Version   : Driver 01.00
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2011-11-13, 09:22, # CodeGen: 0
**     Abstract  :
**         This is user's event module.
**         Put your event handler code here.
**     Settings  :
**     Contents  :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "LED1.h"
#include "LEDpin1.h"
#include "BitIoLdd4.h"
#include "LED2.h"
#include "LEDpin2.h"
#include "BitIoLdd3.h"
#include "LED3.h"
#include "LEDpin3.h"
#include "BitIoLdd2.h"
#include "LED4.h"
#include "LEDpin4.h"
#include "BitIoLdd1.h"
#include "FRTOS1.h"
#include "Inhr2.h"
#include "Inhr1.h"
#include "UTIL1.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "WAIT1.h"
#include "FAT1.h"
#include "TMOUT1.h"
#include "FATM1.h"
#include "SDHC1.h"
#include "GPIO2.h"
#include "TmDt1.h"
#include "CLS1.h"
#include "PE_LDD.h"

void Cpu_OnNMIINT(void);
/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MK60N512MD100]
**     Description :
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the <NMI
**         interrrupt> property is set to 'Enabled'.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/


void FRTOS1_vApplicationStackOverflowHook(xTaskHandle *pxTask, signed portCHAR *pcTaskName);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationStackOverflowHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         if enabled, this hook will be called in case of a stack
**         overflow.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * pxTask          - Pointer to task handle
**       * pcTaskName      - Pointer to 
**     Returns     : Nothing
** ===================================================================
*/

void FRTOS1_vApplicationMallocFailedHook(void);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationMallocFailedHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         If enabled, the RTOS will call this hook in case memory
**         allocation failed.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void Cpu_OnSupervisorCall(void);
/*
** ===================================================================
**     Event       :  Cpu_OnSupervisorCall (module Events)
**
**     Component   :  Cpu [MK60N512MD100]
**     Description :
**         This event is called when the Supervisor Call exception had
**         occurred. This event is automatically enabled when the
**         <Supervisor Call> property is set to 'Enabled'.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void Cpu_OnPendableService(void);
/*
** ===================================================================
**     Event       :  Cpu_OnPendableService (module Events)
**
**     Component   :  Cpu [MK60N512MD100]
**     Description :
**         This event is called when the Pendable Service exception had
**         occurred. This event is automatically enabled when the
**         <Pendable Service> property is set to 'Enabled'.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FRTOS1_vApplicationTickHook(void);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationTickHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called by the RTOS for every
**         tick increment.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FRTOS1_vApplicationIdleHook(void);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationIdleHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called when the RTOS is idle.
**         This might be a good place to go into low power mode.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void Ptrc1_OnTraceWrap(void);
/*
** ===================================================================
**     Event       :  Ptrc1_OnTraceWrap (module Events)
**
**     Component   :  Ptrc1 [PercepioTrace]
**     Description :
**         Called for trace ring buffer wrap around. This gives the
**         application a chance to dump the trace buffer.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void RxBuf1_OnBufferFull(void);
/*
** ===================================================================
**     Event       :  RxBuf1_OnBufferFull (module Events)
**
**     Component   :  RxBuf1 [RingBufferUInt8]
**     Description :
**         Called in the event of buffer full.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void RxBuf1_OnBufferEmpty(void);
/*
** ===================================================================
**     Event       :  RxBuf1_OnBufferEmpty (module Events)
**
**     Component   :  RxBuf1 [RingBufferUInt8]
**     Description :
**         Called in the event of last item has been removed from
**         buffer.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END Events */
#endif /* __Events_H*/

/*
** ###################################################################
**
**     This file was created by Processor Expert 5.3 [05.00]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
