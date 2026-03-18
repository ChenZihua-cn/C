# include<stdio.h>

// if I don't use the int *a and int *b, so what would happen? 
// the function only swap the formal parameter 
// so you need to input the pointer or address of the variable

/*
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
*/

/*
int len(int arr[]){

	size_t length = sizeof(arr)/ sizeof(arr[0]);
	
	// The array input in the function, the array degenerate into the the pointer
	
	return length;
}
*/

/*

void bubbleSort(int arr[], int n){
	// why transfer the arr[] into this function?			
	for ( int i = 0; i < n-1; i++){
		// why the circle only < n-1
		for (int j = 0; j < n -i -1; j++){
			 if ( arr[j] < arr[j+1]){
			 	swap(&arr[j] , &arr[j+1]);
			 }
		}
	}
}
*/

/*

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

*/	
	
// This is my second time to write the bubble sort algorithm again

void swap(int *a, int *b ){
	int t = *a; // dereference of the variable of a
	*a = *b; // the value of a now is store in the t, so you can give the value of b to the a
	*b = t; // then give the original value of the a to the b
}

void bubble_sort(int arr[], int n){ // we should get the arr name and the arr.length
	for ( int i = 0; i < n-1; i++){
	//  For example, you have three elements should be sorted
	// if the array is {3, 2, 1}, you have swap by two steps only 
		// so there is `n-1` steps to sorted the array have `n` elements
		for ( int j =0; j < n-1-i; j ++){
			// delete the `i` number of the already sorted elements
			if ( arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main(void){
	// test the function of swap 
	int a = 114;
	int b = 514;
	
	printf(" This is a: %d .\n This is b: %d . \n", a , b);				 
	swap(&a, &b);
	printf(" This new a: %d, b: %d\n",a, b);

	int arr[] = {32, 46, 1122, 77, 2, 0, 31, 88, 321, 32, 41, 99, 23266};
	
	/*
	int n = sizeof(arr[])/sizeof(arr[0]);
	*/
	int n = sizeof(arr)/ sizeof(arr[0]);
	// why is transfer the arr instead of the arr[]
	// what is the difference between them 
	// why Cannot design a function to calculate the length of array
	
	printf("The original array is\n"); 
	for ( int i = 0; i< n; i++){
		printf( "%d , ", arr[i]);
	}
	bubble_sort(arr, n);
	// why only transfe the name of array?

	printf("\n");
	printf("The sorted array is\n");
	for ( int i = 0; i< n; i++){
		printf("%d , ", arr[i]);
	}
	 return 0;
}
		