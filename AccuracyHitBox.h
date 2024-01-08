
#ifndef FBGEN_AccuracyHitBox_H
#define FBGEN_AccuracyHitBox_H

#include "DataContainer.h"

class AccuracyHitBox :
	public DataContainer // size = 0x10
{
public:
	float m_AimBoxDistMin; // 0x10
	float m_AimBoxDistMax; // 0x14
	float m_AimBoxDistFarStart; // 0x18
	float m_AimBoxDistFarEnd; // 0x1c
	float m_AimBoxWidthMinDistMin; // 0x20
	float m_AimBoxWidthMaxDistMin; // 0x24
	float m_AimBoxHeightMinDistMin; // 0x28
	float m_AimBoxHeightMaxDistMin; // 0x2c
	float m_AimBoxWidthMinDistMax; // 0x30
	float m_AimBoxWidthMaxDistMax; // 0x34
	float m_AimBoxHeightMinDistMax; // 0x38
	float m_AimBoxHeightMaxDistMax; // 0x3c
	float m_AimBoxWidthMinDistFar; // 0x40
	float m_AimBoxWidthMaxDistFar; // 0x44
	float m_AimBoxHeightMinDistFar; // 0x48
	float m_AimBoxHeightMaxDistFar; // 0x4c
}; // size = 0x50

#endif // FBGEN_AccuracyHitBox_H
