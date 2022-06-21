#pragma once
/******************************************************************************/
/* File   : PduR_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_PduR.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PDUR_CORE_FUNCTIONALITIES                                              \
              FUNC(uint16, PDUR_CODE) GetConfigurationId (void);               \
              FUNC(void,   PDUR_CODE) DisableRouting     (TypeIdRoutingPathGroup IdRoutingPathGroup); \
              FUNC(void,   PDUR_CODE) EnableRouting      (TypeIdRoutingPathGroup IdRoutingPathGroup); \

#define PDUR_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(uint16, PDUR_CODE) GetConfigurationId (void) = 0;           \
      virtual FUNC(void,   PDUR_CODE) DisableRouting     (TypeIdRoutingPathGroup IdRoutingPathGroup) = 0; \
      virtual FUNC(void,   PDUR_CODE) EnableRouting      (TypeIdRoutingPathGroup IdRoutingPathGroup) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_PduR_Functionality{
   public:
      PDUR_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

