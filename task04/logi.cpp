#include "logic.h"

int get_max_element(int** matrix, int n, int m) {

	int max = matrix[0][0];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int get_min_element(int** matrix, int n, int m) {

	int min = matrix[0][0];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}
	}

	return min;
}

void get_index_of_column(int** matrix, int n, int m) {

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			int* counter = new int + i;
		}
	}
}

int get_sum_of_columns(int** matrix, int n, int m) {


}