
#ifndef FBGEN_AbsEntityData_H
#define FBGEN_AbsEntityData_H

#include "Realm.h"
#include "EntityData.h"

class AbsEntityData :
	public EntityData // size = 0x18
{
public:
	Realm m_Realm; // 0x18
	float m_In; // 0x1c
}; // size = 0x20

#endif // FBGEN_AbsEntityData_H
