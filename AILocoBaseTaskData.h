
#ifndef FBGEN_AILocoBaseTaskData_H
#define FBGEN_AILocoBaseTaskData_H

#include "AntPoseEnum.h"
#include "AntAttentionStateEnum.h"
#include "AntSpeedLevel.h"
#include "AntPoseEnum.h"
#include "AntAttentionStateEnum.h"
#include "AntSpeedLevel.h"
struct AILocoBaseTaskData
{
	AntPoseEnum m_PoseChangeMovingTowards; // 0x0
	AntAttentionStateEnum m_AttentionChangeMovingTowards; // 0x4
	AntSpeedLevel m_SpeedChangeMovingTowards; // 0x8
	AntPoseEnum m_PoseChange; // 0xc
	AntAttentionStateEnum m_AttentionStateChange; // 0x10
	AntSpeedLevel m_SpeedLevelChange; // 0x14
	float m_Radius; // 0x18
	bool m_IsScripted; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_AILocoBaseTaskData_H
