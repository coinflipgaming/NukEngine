#pragma once

#define NUK_WINDOWS (_WIN32 || _WIN64)

#ifdef NUK_WINDOWS

#if defined NUK_EXPORTS
	#define NUK_API __declspec(dllexport)
#else
	#define NUK_API __declspec(dllimport)
#endif

#endif