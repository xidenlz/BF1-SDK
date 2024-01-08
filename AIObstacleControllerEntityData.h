
#ifndef FBGEN_AIObstacleControllerEntityData_H
#define FBGEN_AIObstacleControllerEntityData_H

#include "EntityData.h"

class AIObstacleControllerEntityData :
	public EntityData // size = 0x18
{
public:
	float m_PenaltyMult; // 0x18
	int m_LayerMask; // 0x1c
	bool m_EnabledAtStart; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_AIObstacleControllerEntityData_H
