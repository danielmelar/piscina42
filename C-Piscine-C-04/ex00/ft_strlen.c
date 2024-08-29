int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	counter;
	int index;

	counter = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
		counter++;
	}
	return (counter);
}