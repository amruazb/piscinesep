#include <stdio.h>
#include <stdlib.h>

int calculate(int numop1, char operator, int numop2)
{
	int result = 0;
	
	switch (operator)
	{
		case '+':
			result = numop1 + numop2;
			break;
		case '-':
			result = numop1 - numop2;
			break;
		case '*':
			result = numop1 * numop2;
			break;
		case '/':
			if (numop2 != 0)
			{
				result = numop1 / numop2;
			}
			else
			{
				printf("Error: Division by zero\n");
			}
			break;
		case '%':
			if (numop2 != 0)
			{
				result = numop1 % numop2;
			}
			else
			{
				printf("Error: Modulo by zero\n");
			}
			break;
		default:
			printf("Error: Invalid operator\n");
	}
	return result;
}

int main(int ac, char **av)
{
	if(ac == 4)
	{
		int numop1 = atoi(av[1]);
		char operator = *av[2];
		int numop2 = atoi(av[3]);

		int result = calculate(numop1,operator, numop2);

		printf("%d\n", result);
	}
	else
	{
		printf("\n");
	}
	return 0;
}


	
