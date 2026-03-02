// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.

#include "logic.h"

void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	if (size <= 0) {
		return ;
	}

	int max = 0;
	int min = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] > array[max]) {
			max = i;
		}

		if (array[i] < array[min]) {
			min = i;
		}

	}

	int temp = array[min];
	array[min] = array[max];
	array[max] = temp;

}