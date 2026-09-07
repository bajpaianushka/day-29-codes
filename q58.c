#include <stdio.h>
int main() {
	int n = 3;
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int max = arr[10];
	int min = arr[10];

	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}

	printf("Max=%d, Min=%d", max, min);

	return 0;
}
