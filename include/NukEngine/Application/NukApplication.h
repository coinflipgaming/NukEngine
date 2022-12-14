#pragma once
#include "NukEngine/Core/NukCommon.h"

namespace Nuk {
	class NUK_API NukApplication {
	public:
		NukApplication();
		virtual ~NukApplication();

		virtual void onInit() {

		}
		virtual void onQuit() {

		}

		void run();
		void quit();
	public:
		static NukApplication* get();
	private:
		static NukApplication* m_instance;
	};
}