//#include<iostream>
//#define LOG(x) std::cout << x << std::endl
//#define LOG2(x, y) std::cout << x << "---" << y << std::endl;
//
//
//void swap(int* a, int* b) {
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int partition(int arr[], int low, int high);
//void quickSort(int arr[], int low, int high);
//void printArray(int arr[], int size);
//
//
//
//int main() {
//
//	int arr[] = { 10, 7, 8, 9, 1, 5 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	quickSort(arr, 0, n - 1);
//	//printf("Sorted array: n");
//	printArray(arr, n);
//
//	
//
//	std::cin.get();
//}
//
//int partition(int arr[], int low, int high) {
//	int pivot = arr[high];
//	int i = (low - 1); //index of smaller element
//	LOG(i);
//	for (int j = low; j <= high - 1; j++) {
//		if (arr[j] <= pivot) {
//			i++;
//			swap(&arr[i], &arr[j]);
//		}
//	}
//	swap(&arr[i + 1], &arr[high]);
//	return (i + 1);
//}
//
//void quickSort(int arr[], int low, int high)
//{
//	if (low < high)
//	{
//		/* pi is partitioning index, arr[p] is now
//		   at right place */
//		int pi = partition(arr, low, high);
//
//		// Separately sort elements before 
//		// partition and after partition 
//
//		quickSort(arr, low, pi - 1);
//		quickSort(arr, pi + 1, high);
//	}
//}
//
//void printArray(int arr[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	//printf("n");
//}