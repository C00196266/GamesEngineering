#include <iostream>
#include <vector>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <string>

std::vector<double> worker(double a[3], double b[3][3]) {
	std::vector<double> c;

	for (int i = 0; i < 3; i++) {
		c.push_back(0.0);

		for (int j = 0; j < 3; j++) {
			c.at(i) += a[j] * b[j][i];
		}
	}

	return c;
}

void coordinator() {
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	
	// matrices
	double a[3][3] = { 3, 1, 2, 
					   6, 5, 1, 
					   4, 0, 1 };
	
	double b[3][3] = { 5, 3, 2, 
					   0, 8, 3,
					   4, 1, 2 };
	
	double c[3][3];
	
	std::vector<double> row;

	char *argv[1];

	argv[0] == "1 2 3";

	for (int i = 0; i < 3; i++) {
		// calls worker, haven't passed arguments to process
		CreateProcess("../Worker/Release/Processes.exe", TEXT(argv[0]), NULL, NULL, false, 0, NULL, NULL, &si, &pi);

		//row = worker(a[i], b);
		//
		//for (int j = 0; j < 3; j++) {
		//	c[i][j] = row.at(j);
		//
		//	std::cout << c[i][j] << " ";
		//}
		//
		//std::cout << std::endl;
		//
		//row.clear();
	}
}

int main() {
	coordinator();

	system("PAUSE");

	return 0;
}