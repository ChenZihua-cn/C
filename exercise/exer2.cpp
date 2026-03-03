// search the prime number in range(1,100)
// this program is run on the android with C4droid.

# include<stdio.h>

int main(void){

	int number;
	int i; 
	int flag; // defalt to true?
	
	int count = 0;
	// obviously, 0 and 1 is not the prime number.
	number = 2;
	
	while ( number<100){
		i = 2;
		flag = 1;
		while ( i<= number-1){
			if ( number% i ==0){
				flag =0;
				// printf(" %d is not prime\n",number);
			} i++;
		}
		if (flag){
			printf("%d is the prime number\n",number);
			count++;
		} number++;
	}
	printf("After counting, total number of the prime number is %d",count);
	
	return 0;
}