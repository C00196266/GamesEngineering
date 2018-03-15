#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

int counter = 0;
std::mutex m_lock;

int buf;
int p = 0;
int c = 0;
const int n = 5;

void producer() {
	int a[n] = { 10, 20, 30, 40, 50 };
	bool running = true;

	while (running == true) {
		while (p < n) {
			//m_lock.lock();
			std::cout << "ID: " << std::this_thread::get_id() << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(2));

			// await p = c
			while (p != c) {
				std::cout << "Spinning:" << std::endl;
			}
			buf = a[p];
			std::cout << a[p] << " deposited in buffer" << std::endl;
			p++;
			//m_lock.unlock();
		}
		std::cout << "Production finished" << std::endl;
		running = false;
	}
}

void consumer() {
	int b[n];
	bool running = true;

	while (running == true) {
		while (c < n) {
			//m_lock.lock();
			std::cout << "ID: " << std::this_thread::get_id() << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));

			// await p > c
			while (p <= c) {
				std::cout << "Spinning:" << std::endl;
			}
			b[c] = buf;
			std::cout << buf << " deposited in b[]" << std::endl;
			c++;
			//m_lock.unlock();
		}

		std::cout << "Consumption finished" << std::endl;
		running = false;
	}
}

void fun() {
	while (counter <= 20) {
		m_lock.lock();
		counter++;
		std::cout << "Counter: " << counter << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		m_lock.unlock();
	}
}

int main() {
	std::thread t1(producer);
	std::thread t2(consumer);

	t1.join();
	t2.join();

	std::cin.get();
}