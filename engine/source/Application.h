#pragma once

namespace eng
{
	class Application
	{
	public:
		virtual bool Init() = 0;
		//deltaTime in seconds
		virtual void Update(float deltaTime) = 0;

		virtual void Destroy()= 0;

		void SetNeedsToBeClose(bool value);
		bool NeedsToBeClose() const;

	private:
		bool m_needsToBeClose = false;

	};
};