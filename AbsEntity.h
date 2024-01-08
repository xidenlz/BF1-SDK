
#ifndef FBGEN_AbsEntity_H
#define FBGEN_AbsEntity_H

#include "Entity.h"

class AbsEntity :
	public Entity // size = 0x20
{
public:
	unsigned char _0x20[0x18];
}; // size = 0x38

#endif // FBGEN_AbsEntity_H
