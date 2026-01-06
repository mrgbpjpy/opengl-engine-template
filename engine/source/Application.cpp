#include "Application.h"

namespace eng
{
	void Application::SetNeedsToBeClose(bool value)
	{
		m_needsToBeClose = value;
	}
	bool Application::NeedsToBeClose() const
	{
		return m_needsToBeClose;
	}

}