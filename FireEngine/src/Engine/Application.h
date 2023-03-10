#pragma once

#include "Core.h"
#include "Window.h"

namespace FireEngine {
	class FIRE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	Application* CreateApplication();
}