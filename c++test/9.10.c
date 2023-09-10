#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	long long x=n,S=0;//S×ÜºÍ nÊäÈë
	int i=n;
	while(n>1)
	{
		i--;
		x=x*i;
		if(i==1)
		{
			S+=x;
			n--;
			x=n;
			i=n;
			if(i==1){
				break;
			}
		}
	}
	printf("%lld",S+1);
	return 0;
}
