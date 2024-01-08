
#ifndef FBGEN_ActorEntityData_H
#define FBGEN_ActorEntityData_H

#include "MeshAsset.h"
#include "GamePhysicsEntityData.h"

class ActorEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	MeshAsset m_Mesh; // 0x90
}; // size = 0xa0

#endif // FBGEN_ActorEntityData_H
