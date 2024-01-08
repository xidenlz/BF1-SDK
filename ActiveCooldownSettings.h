
#ifndef FBGEN_ActiveCooldownSettings_H
#define FBGEN_ActiveCooldownSettings_H

#include ".h"
#include "ActiveCooldownDifficultyIncrementation.h"
struct ActiveCooldownSettings
{
	float m_SuccessPenaltyTime; // 0x0
	float m_FailurePenaltyTime; // 0x4
	float m_MinimumTriggerHeat; // 0x8
	float m_MinimumTriggerHeatTime; // 0xc
	 m_DifficultyInterval; // 0x10
	ActiveCooldownDifficultyIncrementation m_DifficultyIncrementation; // 0x18
	float m_OnSuccessExitOverheatDelay; // 0x24
	float m_OnFailureExitOverheatDelay; // 0x28
	bool m_EnableActiveCooldown; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_ActiveCooldownSettings_H
