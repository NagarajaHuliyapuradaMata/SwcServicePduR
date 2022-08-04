#pragma once
/******************************************************************************/
/* File   : ServicePduR.hpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServicePduR.hpp"
#include "CfgServicePduR.hpp"
#include "ServicePduR_core.hpp"
#include "infServicePduR_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServicePduR:
      INTERFACES_EXPORTED_PDUR
      public abstract_module
   ,  public class_ServicePduR_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServicePduR_Type* lptrConst = (ConstServicePduR_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, PDUR_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, PDUR_CONST,       PDUR_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   PDUR_CONFIG_DATA, PDUR_APPL_CONST) lptrCfgModule
      );
      FUNC(void, PDUR_CODE) DeInitFunction (void);
      FUNC(void, PDUR_CODE) MainFunction   (void);
      PDUR_CORE_FUNCTIONALITIES
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
extern VAR(module_ServicePduR, PDUR_VAR) ServicePduR;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

