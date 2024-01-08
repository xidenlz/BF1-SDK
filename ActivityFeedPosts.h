
#ifndef FBGEN_ActivityFeedPosts_H
#define FBGEN_ActivityFeedPosts_H

#include ".h"
#include ".h"
#include "TreeBase.h"

class ActivityFeedPosts :
	public TreeBase // size = 0x18
{
public:
	 m_HonorPosts; // 0x18
	 m_AwardPosts; // 0x20
}; // size = 0x28

#endif // FBGEN_ActivityFeedPosts_H
