// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных(дробных) значений. Необходимо спроектировать
// и реализовать функцию, которая находит сумму всех элементов вектора,
// абсолютная величина которых меньше среднего арифметического всех элементов.
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.


#include "logic.h"


double calculate_average_elements(double array[DEFAULT_SIZE], int size) {
	double avg = 0;
	for (int i = 0; i < size; i++) {
		avg += array[i];
	}
	return avg / size;
}


double calculate_sum_of_average_elements(double array[DEFAULT_SIZE], int size) {
	if (size <= 0) {
		return -1;
	}

	double sum = 0;
	double avg = calculate_average_elements(array, size);

	for (int i = 0; i < size; i++) {
		
		if (abs(array[i]) < avg) {
			sum += array[i];
		}
		
	}
	return sum;


}

