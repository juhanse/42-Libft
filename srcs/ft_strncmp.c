#include "../include/main.h"

int	ft_strncmp(char *s1, char *s2, int size)
{
	int		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < size)
		i++;
	return (s1[i] - s2[i]);
}
