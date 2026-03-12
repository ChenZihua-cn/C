# include<stdio.h>

int main(void){
	char *a;
	a = "Hello again";
	printf("%s\n", a);
	printf("%c\n", *a); // dereferenc if you don't add the *...
	// it would be this
	printf("%c\n", a);
	printf("%d\n", a); // the address of the a in decimal system
	printf("%p\n", a); // the address of the a in hexadecimal system
	printf("%d\n", *a); // the ASCII code of the 'H'
	
	return 0;
}