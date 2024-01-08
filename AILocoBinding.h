
#ifndef FBGEN_AILocoBinding_H
#define FBGEN_AILocoBinding_H

#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
struct AILocoBinding
{
	AntRef m_LocoTarget; // 0x0
	AntRef m_AttentionState; // 0x14
	AntRef m_EndPoseEnum; // 0x28
	AntRef m_CurrentPoseEnum; // 0x3c
	AntRef m_EnterExitPoseEnum; // 0x50
	AntRef m_RunStyle; // 0x64
	AntRef m_TargetWaypointPosition; // 0x78
	AntRef m_TargetWaypointRadius; // 0x8c
	AntRef m_TargetSpeedLevel; // 0xa0
	AntRef m_CruiseSpeedLevel; // 0xb4
	AntRef m_GroundNormal; // 0xc8
	AntRef m_EnableProceduralHeadAim; // 0xdc
}; // size = 0xf0

#endif // FBGEN_AILocoBinding_H
