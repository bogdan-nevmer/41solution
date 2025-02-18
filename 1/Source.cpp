
#include "util.h"
#define SIZE 10
#define MAX_MARKS 10
#define MIN_MARKS 0

int main() {
	


	init(marksA, SIZE, MIN_MARKS, MAX_MARKS);
	init(marksB, SIZE, MIN_MARKS, MAX_MARKS);
	init(marksC, SIZE, MIN_MARKS, MAX_MARKS);



	for (int i = 0; i < SIZE; i++)
	{
		marksA[i] = rand() % (MAX_MARK + 1);
		marksB[i] = rand() % (MAX_MARK + 1);
		marksC[i] = rand() % (MAX_MARK + 1);
	}
	cout << "students mark";
	for (int i = 0; i < SIZE; i++)
	{
		cout << marksA[i] << " ";
		cout << marksB[i] << " ";
		cout << marksC[i] << " ";
	}

	double avg1 = 0;
	double avg2 = 0;
	double avg3 = 0;
	
	cout << "resualt" << avg1 << endl;
	cout << "resualt" << avg2 << endl;
	cout << "resualt" << avg3 << endl;

	cout << "best class" << find_best_class(avg1, avg2, avg3);
}