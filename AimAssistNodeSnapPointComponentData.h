
#ifndef FBGEN_AimAssistNodeSnapPointComponentData_H
#define FBGEN_AimAssistNodeSnapPointComponentData_H

#include "Uint32.h"
#include "Uint32.h"
#include "GameComponentData.h"

class AimAssistNodeSnapPointComponentData :
	public GameComponentData // size = 0x70
{
public:
	Uint32 m_Priority; // 0x70
	float m_UnderReticleSphereRadius; // 0x74
	float m_UnderReticleCapsuleLength; // 0x78
	Uint32 m_Priority_UnderReticle; // 0x7c
	bool m_Enabled; // 0x80
	unsigned char _0x81[0xf];
}; // size = 0x90

#endif // FBGEN_AimAssistNodeSnapPointComponentData_H
