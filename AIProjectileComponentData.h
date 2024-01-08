
#ifndef FBGEN_AIProjectileComponentData_H
#define FBGEN_AIProjectileComponentData_H

#include "Vec3.h"
#include "LinearTransform.h"
#include ".h"
#include "BattleAIProjectileBinding.h"
#include "GameComponentData.h"

class AIProjectileComponentData :
	public GameComponentData // size = 0x70
{
public:
	Vec3 m_TargetPosition; // 0x70
	LinearTransform m_ProjectileSpawnTransform; // 0x80
	 m_Projectiles; // 0xc0
	BattleAIProjectileBinding m_ProjectileGamestates; // 0xc8
	bool m_MeleeProjectile; // 0xdc
	unsigned char _0xdd[0x3];
}; // size = 0xe0

#endif // FBGEN_AIProjectileComponentData_H
