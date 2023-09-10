#include<stdio.h>
#include<math.h>
int main()
{
	int m, t, s;
	scanf("%d %d %d",&m,&t,&s);
	if(t == 0){
		printf("0");
	}else{
	int eat_apple = ceil ((float)s/t);
		if(eat_apple>=m){
		printf("0");
		}else{
			printf("%d",m-eat_apple);
		}
	}

}
