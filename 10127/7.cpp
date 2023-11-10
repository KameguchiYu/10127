#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int size = 6;
	int array[] = { 1, 2, 3, 4, 5, 6 };
	for (int i = size - 1; i > 0; --i)
	{
		int j = rand() % i;
		int empty = 0;
		empty = array[i];
		array[i] = array[j];
		array[j] = empty;
	}
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
}