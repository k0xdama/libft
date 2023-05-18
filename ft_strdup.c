#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	len(const char *s1)
{
	int	i;
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	cpy(const char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
}

char	*ft_strdup(const char *s1)
{
	size_t	size;

	size = len(s1) + 1;
	char *s2 = malloc(sizeof(size));
	if (s2 == NULL)
		return (NULL);
	cpy(s1, s2);
	return (s2);
}

int	main(void)
{
	char *str = "copiemoi";
	printf("ma version renvoie %s\n", ft_strdup(str));
	printf("la vraie version renvoie %s", strdup(str));
	return (0);
}

