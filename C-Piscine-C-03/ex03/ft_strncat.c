int	ft_strlen2(char *str);

char *ft_strncat(char *dest, const char *src, unsigned int n)
{
    int dest_len = ft_strlen2(dest);
    unsigned int i;

    i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return dest;
}

int	ft_strlen2(char *str)
{
	int	index;
	int	size;

	index = 0;
	size = 0;
	while (str[index] != '\0')
	{
		size++;
		index++;
	}
	return (size);
}
