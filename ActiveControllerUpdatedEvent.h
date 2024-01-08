
#ifndef FBGEN_ActiveControllerUpdatedEvent_H
#define FBGEN_ActiveControllerUpdatedEvent_H

#include "PresenceEvent.h"

class ActiveControllerUpdatedEvent :
	public PresenceEvent // size = 0x8
{
public:
	unsigned char _0x8[0x8];
}; // size = 0x10

#endif // FBGEN_ActiveControllerUpdatedEvent_H
