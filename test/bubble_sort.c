# include<stdio.h>

// if I don't use the int *a and int *b, so what would happen? 
// the function only swap the formal parameter 
// so you need to input the pointer

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

/*
int len(int arr[]){

	size_t length = sizeof(arr)/ sizeof(arr[0]);
	// the array input in the function, the array degenerate into the the pointer
	return length;
}
*/

void bubbleSort(int arr[], int n){
			
	for ( int i = 0; i < n-1; i++){
		for (int j = 0; j < n -i -1; j++){
			 if ( arr[j] < arr[j+1]){
			 	swap(&arr[j] , &arr[j+1]);
			 }
		}
	}
}

int main(void){
	int a = 32;
	int b = 64;
	printf("Before the swap the a is %d and the b is %d\n", a, b);
	swap(&a, &b);
	printf("After the swap the a is %d and the b is %d\n", a, b);
	
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr, n);
   
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}

	
	
	
	