
#ifndef FBGEN_AIActionEntityData_H
#define FBGEN_AIActionEntityData_H

#include "Action.h"
#include "SpatialEntityData.h"

class AIActionEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	Action m_Action; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_AIActionEntityData_H
