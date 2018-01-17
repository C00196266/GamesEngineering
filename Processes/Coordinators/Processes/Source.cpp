#include <iostream>
#include <vector>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <string>

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

	for (int i = 0; i < 3; i++) {
		//row = worker(a[i], b);
		CreateProcess("C:/Users/nover/Desktop/GamesEngineering/Processes/Worker/Release/Processes.exe", std::to_string(row), NULL, NULL, false, 0, NULL, NULL, &si, &pi);
		
		for (int j = 0; j < 3; j++) {
			c[i][j] = row.at(j);

			std::cout << c[i][j] << " ";
		}

		std::cout << std::endl;

		row.clear();
	}
}

int main() {
	coordinator();

	system("PAUSE");

	return 0;
}