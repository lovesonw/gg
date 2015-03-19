#include <stdio.h>
int step=0;
void move(int n,char a,char b,char c)
{
	if (n==1) 
	{	
		printf("%c-->%c\n",a,c);
		step++;
	}
	else 
	{
		move(n-1,a,c,b);
		step++;
		printf("%c-->%c\n",a,c);
		move(n-1,b,a,c);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	move(n,'a','b','c');
	printf("%d",step);
	return 0;
}
