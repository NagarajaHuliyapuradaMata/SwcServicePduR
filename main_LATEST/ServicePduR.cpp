/******************************************************************************/
/* File   : ServicePduR.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServicePduR.hpp"
#include "infServicePduR_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PDUR_AR_RELEASE_VERSION_MAJOR                                          4
#define PDUR_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PDUR_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible PDUR_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(PDUR_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible PDUR_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServicePduR, PDUR_VAR) ServicePduR;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PDUR_CODE) module_ServicePduR::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, PDUR_CONST,       PDUR_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   PDUR_CONFIG_DATA, PDUR_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServicePduR_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServicePduR_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServicePduR_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
      //TBD: Initialize routing path groups based on "Init on start" configuration parameter
#if(STD_ON == ServicePduR_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServicePduR_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PDUR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PDUR_CODE) module_ServicePduR::DeInitFunction(
   void
){
#if(STD_ON == ServicePduR_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServicePduR_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServicePduR_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PDUR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PDUR_CODE) module_ServicePduR::MainFunction(
   void
){
#if(STD_ON == ServicePduR_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServicePduR_InitCheck)
   }
   else{
#if(STD_ON == ServicePduR_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PDUR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(uint16, PDUR_CODE) module_ServicePduR::GetConfigurationId(
   void
){
   CfgServicePduR_Type* lptrCfgServicePduR = ((CfgServicePduR_Type*)lptrCfg);
   return lptrCfgServicePduR->Core.Id;
}

FUNC(void, PDUR_CODE) module_ServicePduR::DisableRouting(
   TypeIdRoutingPathGroup IdRoutingPathGroup 
){
   if(
      //TBD: RoutingPathGroup with Id exists
      STD_HIGH
   ){
      IdRoutingPathGroup++; //TBD: enable TypeIdRoutingPathGroup 
   }
   else{
#if(STD_ON == ServicePduR_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PDUR_E_ROUTING_PATH_GROUP_ID_INVALID
      );
#endif
   }
}

FUNC(void, PDUR_CODE) module_ServicePduR::EnableRouting(
   TypeIdRoutingPathGroup IdRoutingPathGroup 
){
   if(
      //TBD: RoutingPathGroup with Id exists
      STD_HIGH
   ){
      IdRoutingPathGroup++; //TBD: enable TypeIdRoutingPathGroup 
   }
   else{
#if(STD_ON == ServicePduR_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PDUR_E_ROUTING_PATH_GROUP_ID_INVALID
      );
#endif
   }
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::Transmit(
            TypeIdPdu    IdPduTx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   UNUSED(ptrInfoPdu);
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfEcuabCanIf_ServicePduR->Transmit();
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::TriggerTransmit(
            TypeIdPdu    IdPduTx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   UNUSED(ptrInfoPdu);
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::TxConfirmation(
            TypeIdPdu    IdPduTx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   UNUSED(ptrInfoPdu);
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfEcuabCanIf_ServicePduR->TxConfirmation();
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::McalCancelTransmit(
   TypeIdPdu IdPduTx
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::RxIndication(
            TypeIdPdu    IdServicePduRx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdServicePduRx);
   UNUSED(ptrInfoPdu);
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::McalCancelReceive(
   TypeIdPdu IdServicePduRx
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdServicePduRx);
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::CopyRxData(
   void
){
#if(STD_ON == _ReSIM)
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::CopyTxData(
   void
){
#if(STD_ON == _ReSIM)
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Up::StartOfReception(
   void
){
#if(STD_ON == _ReSIM)
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::Transmit(
            TypeIdPdu    IdPduTx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   UNUSED(ptrInfoPdu);
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfServiceDcm_ServicePduR->RxIndication();
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::TriggerTransmit(
            TypeIdPdu    IdPduTx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   UNUSED(ptrInfoPdu);
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::TxConfirmation(
            TypeIdPdu    IdPduTx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   UNUSED(ptrInfoPdu);
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfServiceDcm_ServicePduR->TxConfirmation();
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::McalCancelTransmit(
   TypeIdPdu IdPduTx
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdPduTx);
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::RxIndication(
            TypeIdPdu    IdServicePduRx
   ,  const TypeInfoPdu* ptrInfoPdu
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdServicePduRx);
   UNUSED(ptrInfoPdu);
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfServiceDcm_ServicePduR->RxIndication();
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::McalCancelReceive(
   TypeIdPdu IdServicePduRx
){
   //TBD: re-entrant for different Id, non-reentrant for same Id
   UNUSED(IdServicePduRx);
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::CopyRxData(
   void
){
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfServiceDcm_ServicePduR->CopyRxData();
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::CopyTxData(
   void
){
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfServiceDcm_ServicePduR->CopyTxData();
#else
#endif
   return E_OK;
}

FUNC(Std_TypeReturn, PDUR_CODE) infServicePduRClient_Lo::StartOfReception(
   void
){
#if(STD_ON == _ReSIM)
// ((CfgServicePduR_Type*)lptrCfg)->ptrinfServiceDcm_ServicePduR->StartOfReception();
#else
#endif
   return E_OK;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

