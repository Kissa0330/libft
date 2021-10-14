int ft_toupper(int c)
{
	if (c >= 97 && 122 >= c)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}