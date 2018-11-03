//M9_06_pg73_3a_Amir

#include<stdio.h>

main()
{
	float num, b, h, r, a, pi;
	pi=3.142;
	
	printf("1. Calculate Area of Triangle\n2. Calculate area of Cylinder\n\t\t>>");
	scanf("%f", &num);
	if(num==1){
		printf("Input base \t>>");
		scanf("%f", &b);
		printf("Input height\t>>");
		scanf("%f", &h);
		a=b*h/2;
		printf("Area is %f",a);
		}
	else if(num==2){
		printf("Input radius\t>>");
		scanf("%f", &r);
		printf("Input height\t>>");
		scanf("%f", &h);
		a= 2*pi*r*r + h*2*pi*r;
		printf("Area is %f",a);
		}
	else
		printf("Invalid choice");

}
