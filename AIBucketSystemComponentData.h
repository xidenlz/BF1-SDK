
#ifndef FBGEN_AIBucketSystemComponentData_H
#define FBGEN_AIBucketSystemComponentData_H

#include "GameComponentData.h"

class AIBucketSystemComponentData :
	public GameComponentData // size = 0x70
{
public:
	bool m_UseEvasiveBucketSettings; // 0x70
	unsigned char _0x71[0xf];
}; // size = 0x80

#endif // FBGEN_AIBucketSystemComponentData_H
