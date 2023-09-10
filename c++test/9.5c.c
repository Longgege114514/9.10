#include<stdio.h>
int main()
{
	int x,n,m=0,i=0;
	scanf("%d %d",&x,&n);
	while(i<n){
		if(x!=6&&x!=7){
			m+=250;
		}i++,x=x+1;
		if(x==8){
			x=1;
		}
	}
	printf("%d",m);
	return 0;
}
