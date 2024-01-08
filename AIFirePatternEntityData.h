
#ifndef FBGEN_AIFirePatternEntityData_H
#define FBGEN_AIFirePatternEntityData_H

#include "Realm.h"
#include ".h"
#include "EntityData.h"

class AIFirePatternEntityData :
	public EntityData // size = 0x18
{
public:
	Realm m_Realm; // 0x18
	 m_SimplePatterns; // 0x20
	int m_PatternToUse; // 0x28
	bool m_WantsToFire; // 0x2c
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_AIFirePatternEntityData_H
