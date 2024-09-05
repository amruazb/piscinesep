

int ft_atoi(const char *str)
{
	int nb = 0;
	int negative = 1;
	while(*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
		negative = -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (nb * negative);
}
