#include <Engine.h>

class Sandbox : public FireEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

FireEngine::Application* FireEngine::CreateApplication()
{
	return new Sandbox();
}