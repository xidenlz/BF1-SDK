
#ifndef FBGEN_AimingPoseData_H
#define FBGEN_AimingPoseData_H

struct AimingPoseData
{
	float m_MinimumPitch; // 0x0
	float m_MaximumPitch; // 0x4
	float m_TargetingFov; // 0x8
	float m_AimSteadiness; // 0xc
	float m_SpeedMultiplier; // 0x10
	float m_RecoilMultiplier; // 0x14
}; // size = 0x18

#endif // FBGEN_AimingPoseData_H
