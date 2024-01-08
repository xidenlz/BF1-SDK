
#ifndef FBGEN_AimAssistCollisionBoneSnapAimData_H
#define FBGEN_AimAssistCollisionBoneSnapAimData_H

#include "AimAssistCollisionBonePrioritiesData.h"
#include "AimAssistCollisionBonePrioritiesData.h"
struct AimAssistCollisionBoneSnapAimData
{
	float m_Bounding_LengthScale; // 0x0
	float m_Bounding_RadiusScale; // 0x4
	float m_Point_LengthScale; // 0x8
	AimAssistCollisionBonePrioritiesData m_Point_Priorities; // 0xc
	AimAssistCollisionBonePrioritiesData m_Point_Priorities_BoneUnderReticle; // 0x18
}; // size = 0x24

#endif // FBGEN_AimAssistCollisionBoneSnapAimData_H
