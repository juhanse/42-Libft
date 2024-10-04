#include "main.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = (char *)malloc(ft_strlen(src));
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
