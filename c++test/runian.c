#include<stdio.h>
int main()
{
	float m,h;
	scanf("%f %f",&m,&h);
	float BMI=m/(h*h);
	if(BMI<18.5){
		printf("Underweight");
	}else if(BMI>=18.5&&BMI<24){
		printf("Normal");
	}else{
		printf("%.6g\nOverweight",BMI);
	}
	return 0;
}
