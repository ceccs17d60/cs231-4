// Visakh Sebastian
// s3 d
// 55


#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int array[], int low, int high) {
	int i=low-1;
	int j=high+1;
	int pivot=array[low];
	while (1) {
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i>=j)
			return j;
		swap(&array[i], &array[j]);
	}
}
void quickSort(int array[], int low, int high) {
	int partitionIndex;
	if (low < high) {
		partitionIndex = partition(array, low, high);
		quickSort(array, low, partitionIndex);
		quickSort(array, partitionIndex+1, high);
	}
}
int printArray(int a[], int size) {
	int i=0;
	for (i=0; i<size; i++) {
		printf("%d\n", a[i]);
	}
}
int main() {
	int array[100], i, size;
	printf("Enter size of the array : ");
	scanf("%d", &size);
	printf("Enter array elements\n");
	for (i=0; i<size; i++)
		scanf("%d", &array[i]);
	printf("Sorted Array\n");
	quickSort(array, 0, size-1);
	printArray(array, size);
}
/*
Output
[?1h=$ ./07_quicksort_iterative 
[?1l>Enter size of the array : 5
Enter array elements
28163    
8
1
6
3
Sorted Array
1
2
3
6
8
*/
