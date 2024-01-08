
#ifndef FBGEN_AiffWriterNodeData_H
#define FBGEN_AiffWriterNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodePort.h"
#include "CString.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class AiffWriterNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Start; // 0x18
	AudioGraphNodePort m_Stop; // 0x20
	CString m_FileName; // 0x28
	SoundGraphPluginRef m_Plugin; // 0x30
	unsigned char _0x33[0x5];
}; // size = 0x38

#endif // FBGEN_AiffWriterNodeData_H
