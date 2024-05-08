#pragma once
#include "Log.h"
#include "Text.h" 

#ifdef TS_PLATFORM_WINDOWS

	extern Tandy::Application* Tandy::CreateApplication();

	int main(int argc, char** argv) {
		// initialize logger
		Tandy::Log::Init();
		// TODO: (optional) can be rewritten to use a macro instead
		//Tandy::Log::GetLogger()->info("Tandy Engine Start!");
		//inline static std::shared_ptr<spdlog::logger>& GetLogger() { return logger; }
		TS_INFO("Tandy Engine Start!");
		// start app
		auto app = Tandy::CreateApplication();
		// trigger app start event
		//Tandy::Log::GetLogger()->warn(bSub);
		//Tandy::Log::GetLogger()->warn(uSub);
		//Tandy::Log::GetLogger()->info(Tandy::Text::textf(std::string & msg));


		app->OnEvent();
		app->Run();
		delete app;
	}

#endif