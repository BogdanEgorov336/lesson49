#include "util.h"
#include "logic.h"

int main() {

	int** matrix;

	int a, b;
	cout << "Enter the range of generating values [a; b]: ";
	cin >> a >> b;

	int n, m;
	cout << "Enter size of matrix [n, m]: ";
	cin >> n >> m;

	matrix = new int* [n];
	for (int i = 0; i < n; i++) {

		matrix[i] = new int[m];
	}

	init(matrix, n, m, a ,b);

	cout << convert_to_string(matrix, n, m);

	cout << "Number of matrix lines: "
		<< get_numbers_of_mostly_positive_value_included_lines(matrix, n, m) << endl;

	for (int i = 0; i < n; i++) {

		delete[] matrix[i];
	}

	delete[] matrix;
	system("pause");
	return 0;
}