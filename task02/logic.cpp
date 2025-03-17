#include "logic.h"

int get_sum_of_main_line_of_matrix(int** matrix, int n) {

	int sum = 0;

	for (int i = 0; i < n; i++) {

		sum += matrix[i][i];
	}

	return sum;
}

int get_sum_of_additional_line_of_matrix(int** matrix, int n) {

	int sum = 0;

	for (int i = n - 1; i > 0; i--) {

		sum += matrix[i][i];
	}

	return sum;
}