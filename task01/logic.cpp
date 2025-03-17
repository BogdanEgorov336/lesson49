#include "logic.h"

double get_average_of_non_zero_elements(int** matrix, int n, int m) {

	double non_zero_elements_sum = 0;
	int amount_of_non_zero_elements = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (matrix[i][j] != 0) {

				non_zero_elements_sum += matrix[i][j];
				amount_of_non_zero_elements++;
			}
		}
	}

	return non_zero_elements_sum / amount_of_non_zero_elements > 0
	? non_zero_elements_sum / amount_of_non_zero_elements : 0;
}