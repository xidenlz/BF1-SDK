
#ifndef FBGEN_ActivityFeedHonorCompleted_H
#define FBGEN_ActivityFeedHonorCompleted_H

#include "AwardHonorData.h"
#include "ActivityFeedNode.h"

class ActivityFeedHonorCompleted :
	public ActivityFeedNode // size = 0x20
{
public:
	AwardHonorData m_Honor; // 0x20
}; // size = 0x28

#endif // FBGEN_ActivityFeedHonorCompleted_H
