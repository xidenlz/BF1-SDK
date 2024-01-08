
#ifndef FBGEN_AimAssistNodeComponentData_H
#define FBGEN_AimAssistNodeComponentData_H

#include "Vec3.h"
#include "TeamId.h"
#include "GameComponentData.h"

class AimAssistNodeComponentData :
	public GameComponentData // size = 0x70
{
public:
	Vec3 m_StickyCenterOffset; // 0x70
	TeamId m_Team; // 0x80
	bool m_Enabled; // 0x84
	bool m_GetTeamFromOwner; // 0x85
	bool m_ColorPlayerReticle; // 0x86
	unsigned char _0x87[0x9];
}; // size = 0x90

#endif // FBGEN_AimAssistNodeComponentData_H
