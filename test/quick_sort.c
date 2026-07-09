#include <stdio.h>
#include <stdlib.h>

// Define the stack struct
// Then we will use the pseudo-stack
// which use the array to simulate it

typedef struct{
	int low;
	int high;
}StackItem;

// How can I print the `typedef` struction into the screen?
/* Answer */
// The struct you can't print into screen
// But you can print the member in the struct

StackItem stack[100];
// What do this code block means?
/* Answer */
// The StackItem include two int,
// but you define a array?
/* Answer */
// To craete a 100 variable of type StackItem  
   
int top = -1;
// Is this a sentinel?
/* Answer */
// No, it is not a sentinel.
// But it can help you gauge whether the stack is empty.

void push(int low, int high){
	stack[++top].low = low;
	
	// What is this operation meaning?
	/* Answer */
	// The signature `[ ]` in C language actually is a syntax suger
	// It totally can be convey as (*(stack + (++top))).low = low
	// So the `stack` is a pointer that of StackIem type, isn't?
	// No, the `stack` is the name of array, you can translate the `stack` into the pointer silently.
	// But you can't give a value to `stack` unlike the normal pointer.
	
	stack[top].high = high;
	
	// Push the elements into the stack?
	/* Answer */
	// Yes, you can also write like this:
	/* 
	top = top +1;
	stack[top].low = low;
	stack[high].high = high;
	*/
}

StackItem pop(){
	return stack[top--];
}
// Also like the code of Ln21 `stack[++top].low=low` , what is this operation meaning?
/* Answer */
// Now you can understand the behavior of `pop`.

int isEmpty(){
	return top == -1;
}
 
void swap(int *a, int *b){
	printf("This step I will swap the %d and %d\n", *a, *b);
	printf("Before the step, `a` is the first number %d\n",*a);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("Now a is the number %d\n", *a);
}
 
int partition( int arr[], int low, int high){
	int pivot = arr[high];
	// Why the annotation said that
	// this code choose the last elements
	// As the pivot?
	/* Answer */
	// Because in the end, you would call the quicksort by (name, 0, lenth -1) 
	printf("Now the `arr[high]` is %d\n",arr[high]);
	
	int i = low - 1;
	printf("Now the `i` of partition is %d\n", i); 
	
	for (int j = low; j < high; j++){
		if (arr[j] <= pivot){
			i++;
			printf("Now the `j` is %d and 'pivot' is %d \n", j, pivot);
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	// Why swap the high in the end of partition?
	
	printf("After the swap, the partition would give the value of the function ---pi, is %d \n", i+1); 
	return i+1;
}

void quickSortIterative(int arr[], int low, int high){
	push(low,high);
	int step = 1;
	
	while( !isEmpty()){
		StackItem current = pop();
		low = current.low;
		high = current.high;
		
		if (low < high){
			printf("\n===The %d.th step ===\n",step++);
			// What is this fucking operation?
			// Why the self-add can use in the printf?
			printf("Process the child-array[%d,%d]:\n",low ,high);
			for (int i = low; i<=high; i++){
				printf("| %d | ", arr[i]);
			}
			printf("\n");
			
			int pi = partition(arr, low, high);
			
			printf("After the partitioned, Array belike...\n");
			for (int i =low; i<=high; i++){
				printf("| %d | ", arr[i]);
			}
			
			printf("\n Pivot Position: %d",pi);
			printf("\n Pivot Value: %d", arr[pi]);
			
			// The annotation said that
			// This operation below would
			// push the left child and right child into stack
			
			push(pi+1, high); // Right child array
			push(low, pi-1); // Left child array
		}
	}
}

int main(void){
	int array[] = {38, 27, 43, 3, 9, 82, 10};
	int n = sizeof(array)/ sizeof(array[0]);
	quickSortIterative(array, 0, n-1);

	printf("\nThe result of Sort:\n");
	for (int i =0; i < n; i++){
		printf("| %d | ", array[i]);
	}

	return 0;
}

      
/**
void swap(int *a, int *b){
// get the address of a and b;
// give the number which the address point at  to the t which means temp;
// then give b to a and give t to b;	
	int t = *a;
	*a = *b;
	*b = t;
}

int main(){
	int arr[] ={21, 100, 3, 50, 1};
	for (int i = 0; i < 5; i++){
		printf("%d ,",arr[i]);
		if (i == 4) printf("END...\nThis is original array \n");
	}
	
	int *pivot = &arr[0];
	int *low = &arr[0];
	int *high = &arr[sizeof(arr)/sizeof(arr[0]) - 1];
	// why `sizeof(arr)` can calculate the length of array?
	// how does the funtion `sizeof` work?
	printf("%p \n",high);
	printf("%p \n",(void*)high);
	printf("%d \n",*high);
	
	
}
*/