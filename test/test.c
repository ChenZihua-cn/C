# include<stdio.h>

typedef char* string;

int main(void){
	
	string s = "Hello world! \n ";
	printf("%s", s);
	
	char *str = s; // why i can't use the int*
	int chunk = sizeof(char);
	do{
		int num;
		printf("%p \n", str);
		str += chunk;
		printf("%d \n", num);
		num = num + 1;
	}while(*str != 33); // the ASCII of `!` is 33 in 10
	
	for ( int i =0; i <16; i++){
		printf("%c \n", s[i]);
	}
	printf("%p\n",s);
	printf("%p\n",&s);  // in actually, it is refer to the char** of s? why?
	printf("%p\n",str);  // &s isn't the &s?
	printf("%p\n",s[0]);
	
	int c = 65;
	
	printf("This is the ASCII code of %c : %d ", c, c);
	
	return 0;
}