
#ifndef FBGEN_AICombatBehaviorEntityData_H
#define FBGEN_AICombatBehaviorEntityData_H

#include "CombatEnvironment.h"
#include "AIParameterEntityData.h"

class AICombatBehaviorEntityData :
	public AIParameterEntityData // size = 0x20
{
public:
	CombatEnvironment m_CombatEnvironment; // 0x20
	bool m_AllowFire; // 0x24
	bool m_AllowFireDuringScriptedAnimations; // 0x25
	bool m_AllowDetectHuman; // 0x26
	bool m_LessAggressiveToHuman; // 0x27
	bool m_IsOnHumanSquad; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_AICombatBehaviorEntityData_H
