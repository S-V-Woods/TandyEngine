#include "Text.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Tandy {
	//std::shared_ptr<spdlog::logger> Text::logger;

	void Text:: textf(std::string& msg)
		
	{	/*
		int b1 = msg.find("<b>");
		int b2 = msg.find("</b>");
		int u1 = msg.find("<u>");
		int u2 = msg.find("</u>");
		*/
		//cout << "b1:" << b1 << " b2:" << b2 << "\nu1:" << u1 << " u2:" << u2 << "\n";

		//int bs = b2 - b1;
		std::string bSub = msg.substr(int(msg.find("<b>")), int(msg.find("</b>")) - int(msg.find("<b>")));
		//Tandy::Log::GetLogger()->warn(bSub);
		//int us = u2 - u1;
		//std::string uSub = msg.substr(u1, us);
		std::string uSub = msg.substr(int(msg.find("<u>")), int(msg.find("</u>")) - int(msg.find("<u>")));
	}

}
/*
logger = spdlog::stdout_color_mt("TANDY");
		logger->set_level(spdlog::level::trace);
		*/

//Tandy::Log::GetLogger()->warn("Incoming Copyright Infringment!!!");
//Tandy::Text::textf(std::string("It is a period of civil wars in the galaxy. A brave alliance of underground freedom fighters has challenged the tyranny and oppression of the awesome <b>GALACTIC EMPIRE</b>.\n \n"));

/*
	int b1 = msg.find("<b>");
	int b2 = msg.find("</b>");
	int u1 = msg.find("<u>");
	int u2 = msg.find("</u>");
	
	//cout << "b1:" << b1 << " b2:" << b2 << "\nu1:" << u1 << " u2:" << u2 << "\n";

	//int bs = b2 - b1;
	std::string bSub = msg.substr(int(msg.find("<b>")), int(msg.find("</b>")) - int(msg.find("<b>")));
	//Tandy::Log::GetLogger()->warn(bSub);
	//int us = u2 - u1;
	//std::string uSub = msg.substr(u1, us);
	std::string uSub = msg.substr(int(msg.find("<u>")), int(msg.find("</u>")) - int(msg.find("<u>")));
*/