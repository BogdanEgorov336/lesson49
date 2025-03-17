#include "util.h"
#include "logic.h"

int main() {

	int** matrix;

	int n, m;
	cout << "Enter size of matrix [n, m]: ";
	cin >> n >> m;

	matrix = new int* [n];
	for (int i = 0; i < n; i++) {

		matrix[i] = new int[m];
	}

	init(matrix, n, m);

	cout << convert_to_string(matrix, n, m);

	cout << "Avg off non-zero elements: "
		<< get_average_of_non_zero_elements(matrix, n, m) << endl;

	for (int i = 0; i < n; i++) {

		delete[] matrix[i];
	}

	delete[] matrix;
	system("pause");
	return 0;
}