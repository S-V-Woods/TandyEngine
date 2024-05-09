#pragma once
#include "Log.h"
#include "Text.h"

#ifdef TS_PLATFORM_WINDOWS
extern Tandy::Application* Tandy::CreateApplication();
int main(int argc, char** argv)
{
		// initialize logger
		Tandy::Log::Init();
		// TODO: (optional) can be rewritten to use a macro instead
		//Tandy::Log::GetLogger()->info("Tandy Engine Start!");
		TS_INFO("Tandy Engine Start!"); //macro logger version
		// start app
		auto app = Tandy::CreateApplication();
		// trigger app start event
		app->OnEvent();
		app->Run();
		delete app;
}

#endif