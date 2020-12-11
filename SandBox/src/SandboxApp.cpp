#include <Hazel.h>
#include <iostream>
using namespace std;

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	virtual ~Sandbox()
	{

	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
