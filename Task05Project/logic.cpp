// Task 05 [The reverse algorithm]
// Алгоритм обратной перестановки
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая реверсирует элементы вектора 
// начиная с позиции a и заканчивая позицией b, включая данные позиции.
#include "logic.h"


void reverse(int array[DEFAULT_SIZE], int size, int a, int b) {
	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}


	while (a < b) {
		int c = array[a];
		array[a] = array[b];
		array[b] = c;
		a++;
		b--;
	}

}