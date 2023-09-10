#include<stdio.h>
int main()
{
	int x;
	int A=0,B=0;
	scanf("%d",&x);
	if(x%2 == 0){
		A = 1;
	}
	if(4<x&&x<=12){
		B = 1;
	}
	printf("%d %d %d %d",A&&B,A||B,(A&&!B)||(!A&&B),!A&&!B);
}









