#pragma once

#ifdef FE_PLATFORM_WINDOWS

extern FireEngine::Application* FireEngine::CreateApplication();

int main(int argc, char** argv)
{
	FireEngine::Log::Init();
	FE_INFO("Initialized Logger!");

	auto app = FireEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif