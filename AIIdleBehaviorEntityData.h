
#ifndef FBGEN_AIIdleBehaviorEntityData_H
#define FBGEN_AIIdleBehaviorEntityData_H

#include "IdleReadiness.h"
#include "AIParameterEntityData.h"

class AIIdleBehaviorEntityData :
	public AIParameterEntityData // size = 0x20
{
public:
	IdleReadiness m_IdleReadiness; // 0x20
	float m_AimingTargetDistance; // 0x24
	bool m_AllowAimingWhileScripted; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_AIIdleBehaviorEntityData_H
