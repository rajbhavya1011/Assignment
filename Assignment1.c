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

//Task 2:Using switch case
#include <stdio.h>
	main()
	{
		int a,n;
		printf("Enter any number");
		scanf("%d",&a);
		n=a%10;
		switch(n)
		{
			case 1:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 2:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 3:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 4:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 5:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 6:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 7:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 8:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 9:
				printf("Remainder when divided by 10 is %d",n);
				break;
			case 10:
				printf("Remainder when divided by 10 is %d",n);
				break;
				
				
				
		}
	}

