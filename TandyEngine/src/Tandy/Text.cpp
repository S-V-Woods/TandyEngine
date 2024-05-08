#include "Text.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Tandy {
	//std::shared_ptr<spdlog::logger> Text::logger;

	Text::textf(std::string& msg)
	{
		//spdlog::set_pattern("%^[%T} %n: %v%$");
		//logger = spdlog::stdout_color_mt("TANDY");
		//logger->set_level(spdlog::level::trace);
	}

}

//Tandy::Log::GetLogger()->warn("Incoming Copyright Infringment!!!");
//Tandy::Text::textf(std::string("It is a period of civil wars in the galaxy. A brave alliance of underground freedom fighters has challenged the tyranny and oppression of the awesome <b>GALACTIC EMPIRE</b>.\n \n"));
