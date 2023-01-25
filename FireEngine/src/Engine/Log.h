#pragma once
#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace FireEngine {
	
	class FIRE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define FE_INFO(...)		::FireEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FE_WARN(...)		::FireEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FE_ERROR(...)		::FireEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FE_CRITICAL(...)	::FireEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define PrintInfo(...)		::FireEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define PrintWarn(...)		::FireEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PrintError(...)		::FireEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define PrintCritical(...)	::FireEngine::Log::GetClientLogger()->critical(__VA_ARGS__)