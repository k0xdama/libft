int ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*penser à tester la méthode s* = str return(s - str)*/
/*cas particulier si str est NULL ?*/