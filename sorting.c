#include<stdio.h>
void bubbleSort(int arr[], int N) {
    for (int i=0;i<N-1;i++) {
        int flag = 0;
        for (int j=0;j<N-j-1; j++) {
            if (arr[j] > arr[j+1]) {
                int k = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = k;
                flag = 1;
            }
        }
        if (flag==0) {
            break;
        }
    }
}

void SelectionSort( int a[], int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if( a[min]>a[j]){
                min=j;
            }
           
        }
        int k=a[i];
        a[i]=a[min];
        a[min]=k;



    }

void InsertionSort


}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1,2,14,2,3,56,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);

    SelectionSort(arr, size);

    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}


