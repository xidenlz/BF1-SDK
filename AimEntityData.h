
#ifndef FBGEN_AimEntityData_H
#define FBGEN_AimEntityData_H

#include "SoldierAimingSimulationData.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "EntityData.h"

class AimEntityData :
	public EntityData // size = 0x18
{
public:
	SoldierAimingSimulationData m_DefaultAimingController; // 0x18
	LinearTransform m_AimOverrideTransform; // 0x20
	Vec3 m_FollowOffset; // 0x60
	float m_TimeToDelayAfterCollision; // 0x70
	float m_CollisionBlendOut; // 0x74
	bool m_FollowEyeTransform; // 0x78
	bool m_AllowBlendOut; // 0x79
	bool m_OverrideAim; // 0x7a
	bool m_AimAtLastHitPosition; // 0x7b
}; // size = 0x80

#endif // FBGEN_AimEntityData_H
