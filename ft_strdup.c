#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s2;

	size = ft_strlen(s1) + 1;
	s2 = malloc(size * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, size);
	return (s2);
}

// int	main(void)
// {
// 	char *str = "copiemoi";
// 	printf("ma version renvoie %s\n", ft_strdup(str));
// 	printf("la vraie version renvoie %s", strdup(str));
// 	return (0);
// }
// int	main(void)
// {
// 	char *s = ft_strdup((char*)"coucou");
// 	printf("%s\n", s);
// 	s = strdup((char *)"coucou");
// 	printf("%s\n", s);
// }