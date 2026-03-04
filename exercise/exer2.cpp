// search the prime number in range(1,100)
// this program is run on the android with C4droid.

# include<stdio.h>

int main(void){

	int number;
	int limit;
	int i; 
	int flag; // defalt to true?
	printf("please key in the ranging number from 1 you want to search prime numer.\n");
	scanf(" %d",&limit);
	int count = 0;
	// obviously, 0 and 1 is not the prime number.
	if (limit < 2){
		printf("\nThe range is invalid!!!\n");
		}else{
			number = 2;
		while ( number<limit){
		
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
	}
	
	return 0;
}