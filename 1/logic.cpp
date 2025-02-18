#include "util.h"
#define SIZE 10

double calc_avg_mark(int* marks, int size) {
	int avg = 0;
	for (int i = 0; i < SIZE; i++)
	{
		avg += marksA[i];
		
	}


	avg = avg / SIZE;
	return avg;
}


string find_best_class(double a, double b, double c) {
	return a > b && a > c ? "a" : b > c ? "b" : "c";
}

