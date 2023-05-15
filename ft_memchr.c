void	*ft_memchr(const void *mb, int schar, size_t n)
{
	const unsigned char *pmb;
	unsigned char pschar;
	size_t	i;

	i = 0;
	pmb = (const unsigned char *)mb;
	pschar = (unsigned char )schar;
	while (i < n)
	{
		if (pmb[i] == pschar)
			return((void *)&pmb[i]);
		i++;
	}
	return(NULL);
}
/*a tester avec schar a +255 ou avec un negatif*/