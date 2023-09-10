#include<stdio.h>
int main()
{
	int a,b,c,t,i=0;
	scanf("%d %d %d\n",&a,&b,&c);
	if(a>b){
		t=a,a=b,b=t;
	}if(a>c){
		t=a,a=c,c=t;
	}if(b>c){
		t=b,b=c,c=t;
	}while(i<3)
	{
		i++;
		char x;
		scanf("%c",&x);
		if(x=='A'){
			printf("%d ",a);
		}else if(x=='B'){
			printf("%d ",b);
		}else if(x=='C'){
			printf("%d ",c);
		}
	}
	return 0;
}
