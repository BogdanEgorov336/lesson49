#include "logic.h"

string get_numbers_of_mostly_positive_value_included_lines(int** matrix, int n, int m) {

	string msg = "";
	int positive_value_counter = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (matrix[i][j] > 0) {
				positive_value_counter++;
			}
		}

		if (m - positive_value_counter < positive_value_counter) {
			msg += to_string(i + 1) + " ";
		}
	}

	return msg;
}