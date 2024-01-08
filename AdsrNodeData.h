
#ifndef FBGEN_AdsrNodeData_H
#define FBGEN_AdsrNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class AdsrNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	AudioGraphNodePort m_Trigger; // 0x10
	AudioGraphNodePort m_Release; // 0x18
	AudioGraphNodePort m_A; // 0x20
	AudioGraphNodePort m_D; // 0x28
	AudioGraphNodePort m_S; // 0x30
	AudioGraphNodePort m_R; // 0x38
	AudioGraphNodePort m_Value; // 0x40
	AudioGraphNodePort m_TriggerOutput; // 0x48
	AudioGraphNodePort m_Finished; // 0x50
	float m_Scale; // 0x58
	bool m_AlwaysStartFromZero; // 0x5c
	unsigned char _0x5d[0x3];
}; // size = 0x60

#endif // FBGEN_AdsrNodeData_H
