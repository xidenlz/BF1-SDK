
#ifndef FBGEN_AimerModifierData_H
#define FBGEN_AimerModifierData_H

#include "Asset.h"

class AimerModifierData :
	public Asset // size = 0x18
{
public:
	float m_LookSpeedMultiplier; // 0x18
	bool m_OnlyInSupportedShooting; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_AimerModifierData_H
