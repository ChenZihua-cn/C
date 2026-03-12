# include<stdio.h>
# include<math.h>

int main(void){

	const double PI = acos(-1.0);
	
	double r, h, S1, S2, s;
	
	scanf(" %lf %lf", &r, &h);
	S1 = PI * pow(r, 2);
	S2 = 2 * PI * r * h;
	s = S1*2.0 + S2;
	
	printf(" Area = %.3lf \n", s); // in actually, the func` printf` is auto transfer the float into double
	// so you can refer the textbook, use the ` %.3f ` instead
	return 0;
}