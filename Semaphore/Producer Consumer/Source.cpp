#include <iostream>
#include <thread>
#include <chrono>

int rear = 0;
int front = 0;
int forks[5];

int numOfReaders = 0;

// all the things needed for the semaphore
struct Semaphore {
	int full = 0;
	int readerWriter = 1;
	int mutexReader = 1;
};

Semaphore sem;

void V(int &s) {
	s++;
}

void P(int &s) {
	while (s <= 0) {
		std::cout << "Spinning" << std::endl;
	}
	s--;
}

void reader() {
	bool running = true;

	while (running == true) {
		std::cout << "ID: " << std::this_thread::get_id() << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));

		P(sem.mutexReader);

		numOfReaders++;

		if (numOfReaders == 1) {
			P(sem.readerWriter);
		}

		// if first, get lock
		V(sem.mutexReader);

		std::cout << "Read from database" << std::endl;

		P(sem.mutexReader);

		numOfReaders--;

		if (numOfReaders == 0) {
			V(sem.readerWriter);
		}

		// if last, release lock
		V(sem.mutexReader);
	}
}

void writer() {
	bool running = true;

	while (running == true) {
		std::cout << "ID: " << std::this_thread::get_id() << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));

		P(sem.readerWriter);

		std::cout << "Write from database" << std::endl;

		V(sem.readerWriter);
	}
}

int main() {
	std::thread reader(reader);
	std::thread writer(writer);

	reader.join();
	writer.join();

	std::cin.get();
}