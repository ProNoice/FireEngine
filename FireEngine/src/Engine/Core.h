#pragma once

#ifdef FE_PLATFORM_WINDOWS
	#ifdef FE_BUILD_DLL
		#define FIRE_API __declspec(dllexport)
	#else
		#define FIRE_API __declspec(dllimport)
	#endif
#else
	#error Your system is NOT supported. 
#endif