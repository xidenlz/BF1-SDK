
#ifndef FBGEN_AILocoCoverTaskData_H
#define FBGEN_AILocoCoverTaskData_H

#include "Vec3.h"
#include "Vec3.h"
#include "AntCoverEnum.h"
#include "AntPoseEnum.h"
#include "CoverPeekType.h"
#include "CoverIdleType.h"
#include "AntPoseEnum.h"
#include "CoverEnterStrategy.h"
#include "AIExtraCoverAnimationData.h"
#include "CoverExitStyle.h"
#include "CoverFireType.h"
#include "CoverSideStepDirection.h"
#include "CoverHoverDirection.h"
struct AILocoCoverTaskData
{
	Vec3 m_WantedPos; // 0x0
	Vec3 m_ThreatPosition; // 0x10
	AntCoverEnum m_CoverType; // 0x20
	AntPoseEnum m_CoverPose; // 0x24
	float m_WaitTime; // 0x28
	float m_WorldAngle; // 0x2c
	CoverPeekType m_PeekOut; // 0x30
	CoverIdleType m_IdleBehavior; // 0x34
	AntPoseEnum m_ExitPose; // 0x38
	float m_OffsetLength; // 0x3c
	CoverEnterStrategy m_EnterStrategy; // 0x40
	float m_ExitAngle; // 0x44
	float m_DistanceToNextWaypoint; // 0x48
	AIExtraCoverAnimationData m_ExtraParams; // 0x4c
	float m_AlignOffsetAlong; // 0x54
	float m_AlignOffsetPerpendicular; // 0x58
	CoverExitStyle m_ExitStyle; // 0x5c
	CoverFireType m_PrepareFireType; // 0x60
	CoverSideStepDirection m_SideStepDirection; // 0x64
	CoverHoverDirection m_HoverDirection; // 0x68
	bool m_ForceExitCover; // 0x6c
	bool m_UseClientPosition; // 0x6d
	unsigned char _0x6e[0x2];
}; // size = 0x70

#endif // FBGEN_AILocoCoverTaskData_H
