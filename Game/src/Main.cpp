
#include "Utils/Log.h"

int main(int argc, char** argv) {
	Log::Init("Game");

	LOG_INFO("Hello, Base Game!");

	return 0;
}
