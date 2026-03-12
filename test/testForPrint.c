# include<stdio.h>

main(){
	
	printf("%d \n", 7/3); printf("%1.f \n", 7/3);
	printf("%.f \n", 7.0/3.0); printf("%.1f \n", 7.0/3.0); printf("%.2f \n", 7.0/3.0);
	
	printf("%d \n", 128);
	printf("%f \n", 128.00);
	
	printf("%d \n", 128.00);
	printf("%f \n", 128);
	
	char space = '\0';
	
	/*
	printf("This is a test-1 of 'printf' %s \n %c", 128, space);
	printf("This is a test-2 of 'printf' %c \n %c", 128+128, space);  // segmentation fault?
	*/
	
	char *title = "Main Menu";
	char sec = '-'*10;  // can't output properly?
	char *colume_1 = "1- WorldPerfect.";
	char *colume_2 = "2- Lotus 1_2_3.";
	char *colume_3 = "3- dBase IV.";
	char *colume_4 = "4- AutoCAD.";
	char *ex = "Press the required number: ";
	
	 printf("%s\n %c\n %s\n %s\n %s\n %s\n %s\n", title, sec, colume_1, colume_2, colume_3, colume_4, ex);
	 
	 
}