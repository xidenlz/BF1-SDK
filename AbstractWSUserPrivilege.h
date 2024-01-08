
#ifndef FBGEN_AbstractWSUserPrivilege_H
#define FBGEN_AbstractWSUserPrivilege_H

#include "CString.h"
#include "OptionInclusionSetting.h"
#include "DataContainerPolicyAsset.h"

class AbstractWSUserPrivilege :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	CString m_PrivilegeName; // 0x18
	int m_EnabledPropertyId; // 0x20
	int m_LostEventId; // 0x24
	OptionInclusionSetting m_EnabledPlatforms; // 0x28
	unsigned char _0x2b[0x5];
}; // size = 0x30

#endif // FBGEN_AbstractWSUserPrivilege_H
