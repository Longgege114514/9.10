#include<stdio.h>
#include<math.h>
int main()
{
	int s, v;
	scanf("%d %d",&s,&v);
	double a=s/v;
	if (s%v != 0)
		a=(int)++a;
	else
		a=(int)a;
	a=a+10;
	a=1440-a;
	int h = 8+a/60;
	int m = (int)a%60;
	if (h>=24){
		h=h-24;
		printf("%02d:%02d",h,m);
	}else{
		printf("%02d:%02d",h,m);
	}
}
