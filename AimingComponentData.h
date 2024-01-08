
#ifndef FBGEN_AimingComponentData_H
#define FBGEN_AimingComponentData_H

#include "Vec3.h"
#include "QueryEntityResult.h"
#include "Realm.h"
#include "GameComponentData.h"

class AimingComponentData :
	public GameComponentData // size = 0x70
{
public:
	Vec3 m_TargetPosition; // 0x70
	QueryEntityResult m_TargetEntity; // 0x80
	Realm m_Realm; // 0x88
	float m_TrackHeatSignatureThreshold; // 0x8c
	float m_Range; // 0x90
	float m_Pitch; // 0x94
	float m_Yaw; // 0x98
	float m_AngularTolerance; // 0x9c
	float m_PitchVelocity; // 0xa0
	float m_YawVelocity; // 0xa4
	float m_OcclusionTimeout; // 0xa8
	float m_UnoccupiedTimeout; // 0xac
	bool m_OverrideTargetPosition; // 0xb0
	bool m_OverrideTargetEntity; // 0xb1
	bool m_OverridePassiveRotation; // 0xb2
	bool m_TrackVehicles; // 0xb3
	bool m_TrackSoldiers; // 0xb4
	unsigned char _0xb5[0xb];
}; // size = 0xc0

#endif // FBGEN_AimingComponentData_H
