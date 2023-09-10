#include<stdio.h>
int main()
{
	int a=0,b=0,max=0,i=0,d=0;
	while(i<7){
		i++;
		scanf("%d %d",&a,&b);
		if((a+b)>max){
			max=a+b;
			d=i;
		}
	}
	if(max<=8){
		printf("0");
	}else{
		printf("%d",d);
	}
	return 0;
}
