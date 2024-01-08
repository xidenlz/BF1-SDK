
#ifndef FBGEN_AccuracyPenaltySettings_H
#define FBGEN_AccuracyPenaltySettings_H

struct AccuracyPenaltySettings
{
	float m_SprintMultiplier; // 0x0
	float m_CrouchMultiplier; // 0x4
	float m_ProneMultiplier; // 0x8
	float m_MovingVehicleMultiplier; // 0xc
	float m_VehicleStillMultiplier; // 0x10
	float m_SprintSpeed; // 0x14
	float m_MovingVehicleSpeed; // 0x18
}; // size = 0x1c

#endif // FBGEN_AccuracyPenaltySettings_H
