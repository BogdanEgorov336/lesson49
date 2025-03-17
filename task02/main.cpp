#include "util.h"
#include "logic.h"

int main() {

	int a, b;
	cout << "Enter range of value: ";
	cin >> a >> b;

	int** matrix;

	int n;
	cout << "Enter size of matrix (n): ";
	cin >> n;

	matrix = new int* [n];
	for (int i = 0; i < n; i++) {

		matrix[i] = new int[n];
	}

	init(matrix, n, a, b);

	cout << convert_to_string(matrix, n);

	//cout << get_sum_of_additional_line_of_matrix(matrix, n) << "\n\n";

	int sum_of_additional_and_main_matrix_line
		= get_sum_of_main_line_of_matrix(matrix, n)
		+ get_sum_of_additional_line_of_matrix(matrix, n);

	cout << "Sum of elements from additional and main matrix lines: "
		<< sum_of_additional_and_main_matrix_line << endl;

	for (int i = 0; i < n; i++) {

		delete[] matrix[i];
	}

	delete[] matrix;
	system("pause");
	return 0;
}