void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	const unsigned char	*psrc;
	size_t	i;

	pdest = dest;
	psrc = src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i]; /* a tester, comparé à la syntaxe dans memset*/
		i++;
	}
	return (dest)
}