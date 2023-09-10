#include<stdio.h>
int main()
{
	int y,m,d=28;
	scanf("%d %d",&y,&m);
	switch(m){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;
	case 2:
	if((y%4==0&&y%100!=0)||y%400==0){
		d++;
	}printf("%d",d);
	}
	
	return 0;
}
