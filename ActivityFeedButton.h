
#ifndef FBGEN_ActivityFeedButton_H
#define FBGEN_ActivityFeedButton_H

#include "TranslatedString.h"
#include "DataContainer.h"

class ActivityFeedButton :
	public DataContainer // size = 0x10
{
public:
	TranslatedString m_Title; // 0x10
}; // size = 0x18

#endif // FBGEN_ActivityFeedButton_H
