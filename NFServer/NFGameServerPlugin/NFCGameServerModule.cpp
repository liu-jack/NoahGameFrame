// -------------------------------------------------------------------------
//    @FileName      :    NFCGameServerModule.cpp
//    @Author           :    LvSheng.Huang
//    @Date             :    2013-01-02
//    @Module           :    NFCGameServerModule
//    @Desc             :
// -------------------------------------------------------------------------

////#include "stdafx.h"
#include "NFGameServerPlugin.h"
#include "NFCGameServerModule.h"
#include "NFComm/Config/NFConfig.h"


bool NFCGameServerModule::Init()
{
    m_pEventProcessModule = dynamic_cast<NFIEventProcessModule*>( pPluginManager->FindModule( "NFCEventProcessModule" ) );
    m_pKernelModule = dynamic_cast<NFIKernelModule*>( pPluginManager->FindModule( "NFCKernelModule" ) );
    m_pLogicClassModule = dynamic_cast<NFILogicClassModule*>( pPluginManager->FindModule( "NFCLogicClassModule" ) );
    m_pUUIDModule = dynamic_cast<NFIUUIDModule*>( pPluginManager->FindModule( "NFCUUIDModule" ) );

    assert( NULL != m_pEventProcessModule );
    assert( NULL != m_pKernelModule );
    assert( NULL != m_pLogicClassModule );
    assert( NULL != m_pUUIDModule );

    m_pUUIDModule->SetIdentID(1);

    return true;
}

bool NFCGameServerModule::Shut()
{

    return true;
}

bool NFCGameServerModule::Execute( const float fLasFrametime, const float fStartedTime )
{
#ifdef _DEBUG
    /*
    char szContent[MAX_PATH] = { 0 };
    if (kbhit() && gets(szContent))
    {
        NFCDataList val(szContent, ",");
        if (val.GetCount() > 0)
        {
            //const char* pstrCmd = val.String( 0 );
            m_pKernelModule->Command(val);

        }
    }
    */
#endif


    return true;
}

bool NFCGameServerModule::AfterInit()
{


    return true;
}

bool NFCGameServerModule::BeforeShut()
{

    return true;
}
