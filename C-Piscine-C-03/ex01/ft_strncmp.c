int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int diference;
    unsigned index;

    index = 0;
    while (*s1 && (*s1 == *s2) && index <= n)
    {
        s1++;
        s2++;
        index++; 
    }

    diference = *s1 - *s2;
    return (diference);
}