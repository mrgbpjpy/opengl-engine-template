#include "engine.h"
#include "Application.h"
namespace eng
{
	bool Engine::Init()
		{
		// Initialization code here
		if (!m_application)
		{
			return false;
		}

		return m_application->Init();
	}
	void Engine::Run()
		{
		// Main loop code here
		if (!m_application)
		{
			return;
		}

		m_lastFrameTime = std::chrono::steady_clock::now();
		while (!m_application->NeedsToBeClose())
		{
			// For demonstration, we use a fixed delta time
			auto now = std::chrono::steady_clock::now();
			float deltaTime = std::chrono::duration<float>(now - m_lastFrameTime).count(); // in seconds
			m_lastFrameTime = now;

			m_application->Update(deltaTime);
		}
	}
	void Engine::Destroy()
		{
		// Cleanup code here
		if(m_application)
		{
			m_application->Destroy();
			m_application.reset();
		}
	}

	void Engine::SetApplication(Application* app)
		{
		m_application.reset(app);
	}
	Application* Engine::GetApplication()
		{
		return m_application.get();
	}

}