
#ifndef FBGEN_AIEntryComponentData_H
#define FBGEN_AIEntryComponentData_H

#include "Vec3.h"
#include "GameComponentData.h"

class AIEntryComponentData :
	public GameComponentData // size = 0x70
{
public:
	Vec3 m_TargetPositionOverride; // 0x70
	float m_Suppression; // 0x80
	bool m_HoldFire; // 0x84
	bool m_AllowGrenades; // 0x85
	bool m_SendFireEvents; // 0x86
	unsigned char _0x87[0x9];
}; // size = 0x90

#endif // FBGEN_AIEntryComponentData_H
