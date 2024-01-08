
#ifndef FBGEN_ActivityFeedAwardsCompleted_H
#define FBGEN_ActivityFeedAwardsCompleted_H

#include ".h"
#include ".h"
#include "ActivityFeedNode.h"

class ActivityFeedAwardsCompleted :
	public ActivityFeedNode // size = 0x20
{
public:
	 m_Awards; // 0x20
	 m_Targets; // 0x28
}; // size = 0x30

#endif // FBGEN_ActivityFeedAwardsCompleted_H
