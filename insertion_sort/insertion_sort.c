#include<stdio.h>
int insertion_sort(int array[], int szie);
int main(void)
{
	int array[5] = { 234,435,19,4,32432 };
	insertion_sort(array,5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
int insertion_sort(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}