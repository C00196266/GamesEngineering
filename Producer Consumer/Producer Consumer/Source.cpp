#include <iostream>
#include <thread>

int buf;
int p = 0;
int c = 0;
const int n = 20;

class PC {
	int count;
	PC() : count(0) {}
	void push(void *);
	void *pop();
};

//{ PC : c <= p <= c+1 && a[0:n-1] && (p == c + 1) }

void Producer() {
	int a[n];

	if (c <= p <= c + 1 && a[0] && (p == c + 1)) {

	}

}

int main() {
	
}