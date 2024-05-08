#pragma once
#include "Core.h"
#include <memory>
#include "spdlog/spdlog.h"

namespace Tandy {
	class TANDY_API Text
	{
	public:
		static void textf(std::string& msg);
	};
}

