#include "logic.h"

int main() {
	double array[DEFAULT_SIZE];
	int size;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	cout << "Enter numbs: ";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	double result = calculate_sum_of_average_elements(array, size);

	cout << "The sum of average elements is : " << result << ".";



	return 0;
}