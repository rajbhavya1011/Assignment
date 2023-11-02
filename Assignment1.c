//Task 1: To check the divisibility of a number from 3,5,6,7,8
#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
		{
			if(a%6==0)
			{
				if(a%7==0)
				{
					if(a%8==0)
					{
						printf("It is divisible by 3,5,6,7,8");
					}
					else
					{
						printf("It is divisible by 3,5,6,7");
					}
					
				}
				else
				{
					printf("It is divisible by 3,5,6");
				}
			}
			else
			{
				printf("It is divisible by 3,5");
			}
		}
		else 
		{
			printf("It is divisible by 3");
		}
	}
	else 
	{
		printf("It is neither divisible by 3,5,6,7,8");
	}
}
