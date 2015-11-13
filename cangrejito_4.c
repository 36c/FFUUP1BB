#include<stdio.h>//libreria e/s
int a, b, c, x;
int main()
{
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	for(x=0;a>=1;x++)
	{
		a=(a-b+c)-x;
		printf("%d\n",a);
		if(a>=500)
		{
			printf("jamas saldra");
			break;
			
		}
	
	}
	if(a<=500)
	{
		printf("dias %d",x);
	}
}
