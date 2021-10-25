#include <cstdlib>

#include "Engine/Engine.hpp"

#undef main

int main()
{
	Engine * engine = Engine::get_instance("Tech Demo", 64, 64, 512, 512, WINDOWED_MODE, 60);
	
#ifdef CHECK_SINGLETON
	engine = Engine::get_instance("Tech Demo", 64, 64, 512, 512, WINDOWED_MODE, 60);
#endif

	while (engine->is_running)
	{
		engine->process_events();
		engine->schedule();
		engine->draw();
	}

	delete engine;

	return EXIT_SUCCESS;
}