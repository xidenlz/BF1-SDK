
#ifndef FBGEN_ActiveCooldownState_H
#define FBGEN_ActiveCooldownState_H

#include "ActiveCooldownInterval.h"
#include "DataContainer.h"

class ActiveCooldownState :
	public DataContainer // size = 0x10
{
public:
	float m_Progress; // 0x10
	ActiveCooldownInterval m_DifficultyInterval; // 0x14
	bool m_Triggered; // 0x1c
	bool m_Success; // 0x1d
	bool m_Running; // 0x1e
	bool m_InputEnabled; // 0x1f
}; // size = 0x20

#endif // FBGEN_ActiveCooldownState_H
