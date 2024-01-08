
#ifndef FBGEN_AIParameterWithShapeEntityData_H
#define FBGEN_AIParameterWithShapeEntityData_H

#include "AIParameterEntityData.h"

class AIParameterWithShapeEntityData :
	public AIParameterEntityData // size = 0x20
{
public:
	bool m_IgnoreRotation; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_AIParameterWithShapeEntityData_H
