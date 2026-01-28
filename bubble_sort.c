#include <stdio.h>

void bubbleSort(int arr[], int n) {
    
    for(int i = 0; i<n; i++){
		int swaps = 0;
		for(int j = 0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swaps = 1;
			}
		}
		if(!swaps)
			break;
	}
    
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
