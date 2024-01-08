
#ifndef FBGEN_AIDefendAreaEntityData_H
#define FBGEN_AIDefendAreaEntityData_H

#include "AIParameterWithShapeEntityData.h"

class AIDefendAreaEntityData :
	public AIParameterWithShapeEntityData // size = 0x28
{
public:
	float m_FollowObjectAttractRadius; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_AIDefendAreaEntityData_H
