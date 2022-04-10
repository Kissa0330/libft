int ft_isalnum(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123) || (n > 47 && n < 58))
		return (1);
	else
		return (0);
}