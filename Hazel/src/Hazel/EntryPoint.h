#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** arg[])
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	HZ_INFO("Hello!");

	auto app = Hazel::CreateApplication();

	if (app)
	{
		app->Run();
		delete app;
	}
}

#endif