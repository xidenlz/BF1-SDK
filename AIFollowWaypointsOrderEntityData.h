
#ifndef FBGEN_AIFollowWaypointsOrderEntityData_H
#define FBGEN_AIFollowWaypointsOrderEntityData_H

#include "RouteType.h"
#include "PathfindingChoice.h"
#include "AIOrderEntityBaseData.h"

class AIFollowWaypointsOrderEntityData :
	public AIOrderEntityBaseData // size = 0x18
{
public:
	RouteType m_TypeOfRoute; // 0x18
	PathfindingChoice m_PathFinding; // 0x1c
	bool m_StartAtGeometricallyClosestWaypoint; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_AIFollowWaypointsOrderEntityData_H
