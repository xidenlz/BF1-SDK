
#ifndef FBGEN_ActivityFeedStartButton_H
#define FBGEN_ActivityFeedStartButton_H

#include "CString.h"
#include "ActivityFeedButton.h"

class ActivityFeedStartButton :
	public ActivityFeedButton // size = 0x18
{
public:
	CString m_StartArgs; // 0x18
}; // size = 0x20

#endif // FBGEN_ActivityFeedStartButton_H
