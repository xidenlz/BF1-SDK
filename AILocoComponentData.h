
#ifndef FBGEN_AILocoComponentData_H
#define FBGEN_AILocoComponentData_H

#include "Vec3.h"
#include "AILocoBinding.h"
#include "AILocoVaultBinding.h"
#include "AILocoCoverBinding.h"
#include "GameComponentData.h"

class AILocoComponentData :
	public GameComponentData // size = 0x70
{
public:
	Vec3 m_FacingTargetPosition; // 0x70
	AILocoBinding m_Binding; // 0x80
	AILocoVaultBinding m_VaultBinding; // 0x170
	AILocoCoverBinding m_CoverBinding; // 0x1fc
	int m_AnimationEntitySpacePriority; // 0x4e0
	float m_WantedYaw; // 0x4e4
	float m_WantedPitch; // 0x4e8
	bool m_AimWithFifaLoco; // 0x4ec
	unsigned char _0x4ed[0x3];
}; // size = 0x4f0

#endif // FBGEN_AILocoComponentData_H
