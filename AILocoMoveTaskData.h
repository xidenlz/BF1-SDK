
#ifndef FBGEN_AILocoMoveTaskData_H
#define FBGEN_AILocoMoveTaskData_H

#include "Vec3.h"
#include "AntPoseEnum.h"
#include "AntPoseEnum.h"
struct AILocoMoveTaskData
{
	Vec3 m_WantedPos; // 0x0
	float m_WaitTime; // 0x10
	float m_WorldAngle; // 0x14
	AntPoseEnum m_EnterPose; // 0x18
	AntPoseEnum m_ExitPose; // 0x1c
	float m_AlmostFinishedDistance; // 0x20
	bool m_OverrideAngle; // 0x24
	bool m_UseClientPosition; // 0x25
	bool m_OnlySignalAlmostFinishedWhenMovingTowardsWaypoint; // 0x26
	unsigned char _0x27[0x9];
}; // size = 0x30

#endif // FBGEN_AILocoMoveTaskData_H
