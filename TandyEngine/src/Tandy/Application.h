#pragma once

#include "Core.h"

namespace Tandy {

	class TANDY_API Application {
		public:
			Application();
			virtual ~Application();
			virtual void OnEvent();

			void Run();
	};

	Application* CreateApplication();

}