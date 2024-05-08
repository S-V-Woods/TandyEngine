#include "Text.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "Tandy/Log.h"

namespace Tandy {

	void Text:: textf(std::string& msg)
		
	{	
		int64_t b1 = msg.find("<b>");
		int64_t b2 = msg.find("</b>");
		int64_t u1 = msg.find("<u>");
		int64_t u2 = msg.find("</u>");
		std::string bSub;
		std::string uSub;

		bool bExists = true;
		bool uExists = true;
		if (bExists = msg.find("<b>") != std::string::npos) {
			bSub = msg.substr(b1, b2 - b1);
			msg.replace(b1, b2, bSub);
		}

		if (bExists = msg.find("<u>") != std::string::npos) {
			uSub = msg.substr(u1, u2 - u1);
			msg.replace(u1, u2, uSub);
		}
		TS_INFO(msg);
		
	}

}