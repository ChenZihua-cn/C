# include<stdio.h>

int main(void){
	int total_feet, total_head;
	int rabbit, cock;
	
	scanf("%d %d", &total_head, &total_feet);
	
	rabbit = (4 * total_head - total_feet) /2;
	cock = total_head - rabbit;
	
	if ( total_feet % 2 == 1 || rabbit <0 || cock <0 ){
		printf(" No answer \n");
	}else{
		printf("%d %d \n", rabbit, cock);
	}
	return 0;
}
	
	