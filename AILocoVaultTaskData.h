
#ifndef FBGEN_AILocoVaultTaskData_H
#define FBGEN_AILocoVaultTaskData_H

#include "Vec3.h"
#include "WaypointVaultType.h"
struct AILocoVaultTaskData
{
	Vec3 m_StartPoint; // 0x0
	float m_DistanceBeforeVault; // 0x10
	float m_HeightBeforeVault; // 0x14
	float m_LengthOfVaultableObject; // 0x18
	float m_HeightAfterVault; // 0x1c
	float m_DistanceAfterVault; // 0x20
	float m_WorldAngle; // 0x24
	WaypointVaultType m_VaultType; // 0x28
	bool m_UseClientPosition; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_AILocoVaultTaskData_H
