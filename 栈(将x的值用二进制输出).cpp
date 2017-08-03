#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
int ExchangeBin(int *s,int x)
{
	int top=-1;
	while(x)
	{
		s[++top]=x%2;
		x/=2;
	}
	return top;
}
void PrintBin(int *s,int top)
{
	while(top+1)
		printf("%d",s[top--]);
	printf("\n");
}
int main(void)
{
	int *s;
	int x,top;
	s=(int *)malloc(MaxSize*sizeof(int));
	printf("«Î ‰»Îxµƒ÷µ\n");
	scanf("%d",&x);
	top=ExchangeBin(s,x);
	PrintBin(s,top);
	free(s);
}