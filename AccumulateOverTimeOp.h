
#ifndef FBGEN_AccumulateOverTimeOp_H
#define FBGEN_AccumulateOverTimeOp_H

#include "WeatheringOp.h"

class AccumulateOverTimeOp :
	public WeatheringOp // size = 0x10
{
public:
	float m_TargetValue; // 0x10
	float m_InitialValue; // 0x14
	float m_TimeToReachTarget; // 0x18
	bool m_KeepValueWhenMaterialChanged; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_AccumulateOverTimeOp_H
