
#ifndef FBGEN_ActivityFeedData_H
#define FBGEN_ActivityFeedData_H

#include "TranslatedString.h"
#include "TranslatedString.h"
#include "CString.h"
#include "LargeMediaUrlType.h"
#include "CString.h"
#include "CString.h"
#include "ActivityFeedStartButton.h"
#include "DataContainer.h"

class ActivityFeedData :
	public DataContainer // size = 0x10
{
public:
	TranslatedString m_Caption; // 0x10
	TranslatedString m_CondensedCaption; // 0x18
	int m_TypeId; // 0x20
	CString m_LargeMediaUrl; // 0x28
	LargeMediaUrlType m_LargeMediaUrlType; // 0x30
	CString m_SmallImageUrl; // 0x38
	CString m_SmallImageRatio; // 0x40
	ActivityFeedStartButton m_StartButton; // 0x48
}; // size = 0x50

#endif // FBGEN_ActivityFeedData_H
