
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/* 
/* int main()
{
	int var = 123;
	printf("var = %d\n",var);
	int *avar = &var;
	int **bvar = &avar;
	int ***cvar = &bvar;
	int ****dvar = &cvar;
	int *****evar = &dvar;
	int ******fvar = &evar;
	int *******gvar = &fvar;
	int ********hvar = &gvar;
	int *********ivar = &hvar;
	printf("*avar = %d \n",*avar);
	ft_ultimate_ft(ivar);
	printf("we run ft_ultimate_ft(ivar) and now the whole int pointers\n will get changed so the \nvalue of avar will be : %d\n",*avar);
}  