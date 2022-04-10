unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	int				i;
	int				n;

	count = 0;
	i = 0;
	n = (int)size;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

