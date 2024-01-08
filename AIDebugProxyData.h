
#ifndef FBGEN_AIDebugProxyData_H
#define FBGEN_AIDebugProxyData_H

#include "CString.h"
#include "CoverQueryData.h"
#include "SpatialEntityData.h"

class AIDebugProxyData :
	public SpatialEntityData // size = 0x60
{
public:
	CString m_ProxyName; // 0x60
	CoverQueryData m_TestCoverQuery; // 0x68
}; // size = 0x70

#endif // FBGEN_AIDebugProxyData_H
