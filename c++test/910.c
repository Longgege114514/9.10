#include<stdio.h>
int prime(int x)
{
	int i=2;
	while(i<=x/2){
		i++;
		if(x%i==0){
			return ;
		}
	}return x;
}
int main()
{
	printf("%d",prime(9));
}
