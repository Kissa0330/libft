#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy_str;
	int		length;
	int		i;

	length = 0;
	while (*(src + length) != '\0')
		length++;
	copy_str = malloc(sizeof(char) * length);
	if (copy_str == NULL)
	{
		return (copy_str);
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		 *(copy_str + i) = *(src + i);
		 i++;
	}
	*(copy_str + i) = '\0';
	return (copy_str);
}
