


int ft_isprint(int  c)
{
    if ((c > 31 && c < 127) 
        || (c == 9) 
        || (c == 10) 
        || (c == 13))
        return (1);
    else
        return (0);
}