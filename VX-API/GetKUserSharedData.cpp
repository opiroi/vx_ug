#include "Win32Helper.h"

PKUSER_SHARED_DATA GetKUserSharedData(VOID)
{
	return (KUSER_SHARED_DATA*)0x7FFE0000;
}