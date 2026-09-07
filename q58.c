#include <stdio.h>
int main() {
	int n = 5;
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int max = arr[9];
	int min = arr[1];

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
