
#ifndef FBGEN_AIKillCounterEntityData_H
#define FBGEN_AIKillCounterEntityData_H

#include "EntityData.h"

class AIKillCounterEntityData :
	public EntityData // size = 0x18
{
public:
	int m_AliveThreshold; // 0x18
	bool m_RunOnce; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_AIKillCounterEntityData_H
