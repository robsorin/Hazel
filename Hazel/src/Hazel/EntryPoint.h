#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** arg[])
{
	auto app = Hazel::CreateApplication();

	if (app)
	{
		app->Run();
		delete app;
	}
}

#endif