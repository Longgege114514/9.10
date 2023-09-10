#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x=0;
	int i=0;
	i=n;
	while(x>=0){
		x++;
		printf("%02d",x);
		if(n==1){
			break;
		}
		if(x==i){
			printf("\n");
			n-=1;
			i=i+n;
		}if(n==0){
			break;
		}
	}
	return 0;
}
