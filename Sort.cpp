#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE

#define ARRAY_SIZE 5

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void BubbleSort(int ArrayElements[ARRAY_SIZE])
{
	for (int j = ARRAY_SIZE - 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (ArrayElements[i] > ArrayElements[i + 1])
			{
				int temp = ArrayElements[i];
				ArrayElements[i] = ArrayElements[i + 1];
				ArrayElements[i + 1] = temp;
			}
		}
	}
	printf("Sorted array:  ");
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%-10d\t", ArrayElements[i]);
	}
	printf("\n");
}

void SelectionSort(int ArrayElements[ARRAY_SIZE])
{
	for (int k = 0; k < ARRAY_SIZE - 1; k++)
	{
		int MinLocation = k;

		for (int i = k + 1; i < ARRAY_SIZE; i++)
		{
			if (ArrayElements[i] < ArrayElements[MinLocation])
			{
				MinLocation = i;
			}
		}
		int temp = ArrayElements[k];
		ArrayElements[k] = ArrayElements[MinLocation];
		ArrayElements[MinLocation] = temp;
	}
	printf("Sorted array:  ");
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%-10d\t", ArrayElements[i]);
	}
	printf("\n");
}

void InsertionSort(int ArrayElements[ARRAY_SIZE])
{
	for (int j = 0; j < ARRAY_SIZE; j++)
	{
		int Value = ArrayElements[j];
		int i = j - 1;

		while (i >= 0 && ArrayElements[i] > Value)

		{
			ArrayElements[i + 1] = ArrayElements[i];
			i--;
		}
		ArrayElements[i + 1] = Value;
	}

	printf("Sorted array:  ");
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%-10d\t", ArrayElements[i]);
	}
	printf("\n");
}

int main()
{
	int ArrayElements1[ARRAY_SIZE] = { 5,1,3,2,4 };
	int ArrayElements2[ARRAY_SIZE] = { 8,9,6,10,7 };
	int ArrayElements3[ARRAY_SIZE] = { 14,12,11,15,13 };

	printf("Bubble sort:\n");
	printf("Unsorted array:  ");
	for (int i = 0; i < ARRAY_SIZE; i++)
		printf("%-10d\t", ArrayElements1[i]);
	printf("\n");
	BubbleSort(ArrayElements1);
	printf("\n");

	printf("Selection sort:\n");
	printf("Unsorted array:  ");
	for (int i = 0; i < ARRAY_SIZE; i++)
		printf("%-10d\t", ArrayElements2[i]);
	printf("\n");
	SelectionSort(ArrayElements2);
	printf("\n");

	printf("Insertion sort:\n");
	printf("Unsorted array:  ");
	for (int i = 0; i < ARRAY_SIZE; i++)
		printf("%-10d\t", ArrayElements3[i]);
	printf("\n");
	InsertionSort(ArrayElements3);
	printf("\n");

	return 0;
}