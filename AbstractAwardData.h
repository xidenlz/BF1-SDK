
#ifndef FBGEN_AbstractAwardData_H
#define FBGEN_AbstractAwardData_H

#include "AwardGroup.h"
#include "TreeNodeBase.h"

class AbstractAwardData :
	public TreeNodeBase // size = 0x10
{
public:
	AwardGroup m_AwardGroup; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_AbstractAwardData_H
