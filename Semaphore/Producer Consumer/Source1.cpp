//int buf;
//int p = 0;
//int c = 0;
// const int n = 5;

//struct Semaphore {
//	int full = 0;
//	int empty = 0;
//	int readerWriter = 1;
//	int mutexReader = 1;
//};

//void producer() {
//	int a[n] = { 10, 20, 30, 40, 50 };
//	bool running = true;
//
//	while (running == true) {
//		while (p < n) {
//			std::cout << "ID: " << std::this_thread::get_id() << std::endl;
//			std::this_thread::sleep_for(std::chrono::seconds(2));
//
//			// await p = c
//			while (p != c) {
//				std::cout << "Spinning" << std::endl;
//			}
//			buf = a[p];
//			std::cout << a[p] << " deposited in buffer" << std::endl;
//
//			P(sem.empty);
//
//			forks[rear] = buf;
//
//			rear = (rear + 1) % n;
//			std::cout << "Rear: " << rear << std::endl;
//
//			V(sem.full);
//
//			p++;
//		}
//		std::cout << "Production finished" << std::endl;
//		running = false;
//	}
//}
//
//void consumer() {
//	int b[n];
//	bool running = true;
//
//	while (running == true) {
//		while (c < n) {
//			std::cout << "ID: " << std::this_thread::get_id() << std::endl;
//			std::this_thread::sleep_for(std::chrono::seconds(1));
//
//			// await p > c
//			while (p <= c) {
//				std::cout << "Spinning" << std::endl;
//			}
//			b[c] = buf;
//			std::cout << buf << " deposited in b[]" << std::endl;
//
//			P(sem.full);
//
//			b[c] = forks[front];
//
//			front = (front + 1) % n;
//			std::cout << "Front: " << front << std::endl;
//
//			V(sem.empty);
//
//			c++;
//		}
//
//		std::cout << "Consumption finished" << std::endl;
//		running = false;
//	}
//}