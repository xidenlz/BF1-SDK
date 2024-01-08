
#ifndef FBGEN_AIFlankingCorridorEntityData_H
#define FBGEN_AIFlankingCorridorEntityData_H

#include "AIParameterWithShapeEntityData.h"

class AIFlankingCorridorEntityData :
	public AIParameterWithShapeEntityData // size = 0x28
{
public:
	int m_AdvanceCount; // 0x28
	float m_AdvanceInterval; // 0x2c
	float m_HumanTargetDistance; // 0x30
	bool m_AllowLeavingFlankingCorridor; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_AIFlankingCorridorEntityData_H
