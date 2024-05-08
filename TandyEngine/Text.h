#pragma once

#include "Core.h"
#include <memory>
#include "spdlog/spdlog.h"

namespace Tandy {
	class TANDY_API Text
	{
		struct bSub;
		struct uSub;
		public:
		static void textf(std::string& msg);
	};
}

