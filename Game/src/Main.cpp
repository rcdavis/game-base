
#include "Utils/Log.h"

int main(int argc, char** argv) {
	Log::Init("Game");

	LOG_INFO("Hello, Base Game!");

#ifdef PLATFORM_LINUX
	LOG_INFO("Running on Linux platform...");
#endif

	return 0;
}
