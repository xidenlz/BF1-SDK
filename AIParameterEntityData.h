
#ifndef FBGEN_AIParameterEntityData_H
#define FBGEN_AIParameterEntityData_H

#include "EntityData.h"

class AIParameterEntityData :
	public EntityData // size = 0x18
{
public:
	bool m_AutoActivate; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_AIParameterEntityData_H
