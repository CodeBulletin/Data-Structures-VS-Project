#pragma once
#include <chrono>
#include <iostream>

namespace Time {
	class Timer {
	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTime;
	public:
		Timer() {
			m_StartTime = std::chrono::high_resolution_clock::now();
		}
		~Timer() {
			Stop();
		}
		void Stop() {
			auto endPoint = std::chrono::high_resolution_clock::now();
			auto Start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTime).time_since_epoch();
			auto End = std::chrono::time_point_cast<std::chrono::microseconds>(endPoint).time_since_epoch();

			auto US = (End - Start).count();
			double MS = US * 0.001;

			std::cout << "Time Elapsed: " << MS << "ms | " << US << "us\n";
		}
	};
}