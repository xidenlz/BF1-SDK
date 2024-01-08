
#ifndef FBGEN_AeroDynamicPhysicsData_H
#define FBGEN_AeroDynamicPhysicsData_H

#include "Vec3.h"
#include "Vec3.h"
#include "Vec3.h"
#include "Vec3.h"
#include "DataContainer.h"

class AeroDynamicPhysicsData :
	public DataContainer // size = 0x10
{
public:
	Vec3 m_BodyDrag; // 0x10
	Vec3 m_BodyDragOffsetYZ; // 0x20
	Vec3 m_BodyDragOffsetXZ; // 0x30
	Vec3 m_BodyDragOffsetXY; // 0x40
}; // size = 0x50

#endif // FBGEN_AeroDynamicPhysicsData_H
