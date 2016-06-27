/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : INT_PIT0.c
**     Project     : Lab6
**     Processor   : MK70FN1M0VMJ12
**     Component   : InterruptVector
**     Version     : Component 02.023, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-06-23, 13:55, # CodeGen: 0
**     Abstract    :
**         This component "InterruptVector" gives an access to interrupt vector.
**         The purpose of this component is to allocate the interrupt vector
**         in the vector table. Additionally it can provide settings of
**         the interrupt priority register.
**         The interrupt handling routines must be implemented by the user.
**     Settings    :
**          Component name                                 : INT_PIT0
**          Interrupt vector                               : INT_PIT0
**          Interrupt priority                             : medium priority
**          Shared interrupt                               : no
**          ISR name                                       : PIT_ISR
**          Allow duplicate ISR names                      : no
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file INT_PIT0.c
** @version 01.00
** @brief
**         This component "InterruptVector" gives an access to interrupt vector.
**         The purpose of this component is to allocate the interrupt vector
**         in the vector table. Additionally it can provide settings of
**         the interrupt priority register.
**         The interrupt handling routines must be implemented by the user.
*/         
/*!
**  @addtogroup INT_PIT0_module INT_PIT0 module documentation
**  @{
*/         

/* MODULE INT_PIT0. */

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ###################################################################
**
**  The interrupt service routine(s) must be implemented
**  by user in one of the following user modules.
**
**  If the "Generate ISR" option is enabled, Processor Expert generates
**  ISR templates in the CPU event module.
**
**  User modules:
**      main.c
**      Events.c
**
** ###################################################################
PE_ISR(PIT_ISR)
{
}
*/

/* END INT_PIT0. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
