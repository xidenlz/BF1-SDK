
#ifndef FBGEN_AILocoVaultBinding_H
#define FBGEN_AILocoVaultBinding_H

#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
#include "AntRef.h"
struct AILocoVaultBinding
{
	AntRef m_Vault; // 0x0
	AntRef m_DistanceBeforeVault; // 0x14
	AntRef m_HeightBeforeVault; // 0x28
	AntRef m_LengthOfVaultableObject; // 0x3c
	AntRef m_HeightAfterVault; // 0x50
	AntRef m_DistanceAfterVault; // 0x64
	AntRef m_VaultType; // 0x78
}; // size = 0x8c

#endif // FBGEN_AILocoVaultBinding_H
