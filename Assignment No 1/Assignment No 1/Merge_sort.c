#include <stdio.h>
#include <stdlib.h>
#define MAX 200

void MergeSort(int*, int, int);
void Copy(int*, int*, int, int);
void Merge(int*, int*, int, int, int, int);

static long long compareCount = 0;

int main(void)
{
	int i;
	int size;
	int arr[MAX] = {0};
	
	printf("\n\tEnter Data Size : ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++)
	{
		arr[i] = rand() % 500;
		printf("\n\tElement %d : %d", i+1, arr[i]);
	}
	
	MergeSort(arr, 0, size-1);
	
	printf("\n\tSorted Data : ");
	for(i = 0; i < size; i++)
		printf("\t%d", arr[i]);

	printf("\n\tTotal Comparison : %ld", compareCount);
	
	return 0;
}

void MergeSort(int *pPtr, int lowerIndex, int upperIndex)
{
	int mid;
	int temp[MAX] = {0};
	
	if(lowerIndex >= upperIndex)
		return;
	
	mid = (lowerIndex + upperIndex)/2;
	MergeSort(pPtr, lowerIndex, mid);
	MergeSort(pPtr, mid+1, upperIndex);
	Merge(pPtr, temp, lowerIndex, mid, mid+1, upperIndex);
	Copy(pPtr, temp,lowerIndex, upperIndex);
}

void Merge(int *pPtr, int *pTemp, int low1, int up1, int low2, int up2)
{	
	int index = low1;
	
	while(low1 <= up1 && low2 <= up2)
	{
		compareCount++;
		if(pPtr[low1] <= pPtr[low2])
			pTemp[index++] = pPtr[low1++];
		else
			pTemp[index++] = pPtr[low2++];
	}
	
	while(low1 <= up1)
		pTemp[index++] = pPtr[low1++];

	while(low2 <= up2)
		pTemp[index++] = pPtr[low2++];
}

void Copy(int *pPtr, int *pTemp, int lowerIndex, int upperIndex)
{
	int index = lowerIndex;
	
	while(lowerIndex <= upperIndex)
	{
		pPtr[index] = pTemp[index];
		index = ++lowerIndex;
	}
}