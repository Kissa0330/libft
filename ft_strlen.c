int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str++ != '\0')
	{
		n++;
	}
	return (n);
}
