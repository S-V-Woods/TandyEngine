#pragma once

#include "Core.h"
#include <memory>
#include "spdlog/spdlog.h"

namespace Tandy{
	class TANDY_API Log
	{

	public:
		static void Init();		//singleton
		inline static std::shared_ptr<spdlog::logger>& GetLogger() { return logger; }		//optimization
	private:
		static std::shared_ptr<spdlog::logger> logger;

	};
}
//log macros
#define TS_TRACE(...)	::Tandy::Log::GetLogger()->trace(__VA_ARGS__)//can get rid of them anytime you want. no if statements
#define TS_INFO(...)	::Tandy::Log::GetLogger()->info(__VA_ARGS__)
#define TS_WARN(...)	::Tandy::Log::GetLogger()->warn(__VA_ARGS__)
#define TS_ERROR(...)	::Tandy::Log::GetLogger()->error(__VA_ARGS__)
#define TS_FATAL(...)	::Tandy::Log::GetLogger()->fatal(__VA_ARGS__)
