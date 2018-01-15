#include <iostream>
#include <vector>

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
		row = worker(a[i], b);
		
		for (int j = 0; j < 3; j++) {
			c[i][j] = row[j];

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