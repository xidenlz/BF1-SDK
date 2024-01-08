
#ifndef FBGEN_ActivityFeedNode_H
#define FBGEN_ActivityFeedNode_H

#include "ActivityFeedNode.h"
#include "ActivityFeedData.h"
#include "TreeNodeBase.h"

class ActivityFeedNode :
	public TreeNodeBase // size = 0x10
{
public:
	ActivityFeedNode m_Parent; // 0x10
	ActivityFeedData m_Data; // 0x18
}; // size = 0x20

#endif // FBGEN_ActivityFeedNode_H
