
#ifndef FBGEN_AbstractLeaderboardData_H
#define FBGEN_AbstractLeaderboardData_H

#include "CString.h"
#include "DataContainer.h"

class AbstractLeaderboardData :
	public DataContainer // size = 0x10
{
public:
	CString m_LeaderboardName; // 0x10
}; // size = 0x18

#endif // FBGEN_AbstractLeaderboardData_H
