
#ifndef FBGEN_AbstractLocoWaypointData_H
#define FBGEN_AbstractLocoWaypointData_H

#include "AILocoBaseTaskData.h"
#include "WaypointData.h"

class AbstractLocoWaypointData :
	public WaypointData // size = 0x20
{
public:
	AILocoBaseTaskData m_BaseTask; // 0x20
}; // size = 0x40

#endif // FBGEN_AbstractLocoWaypointData_H
