#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	digits;
	long	num;

	digits = 1;
	num = n;
	if (num < 0)
	{
		digits++;
		num = -num;
	}
	while (num > 9)
	{
		digits++;
		num /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digits;
	long	num;

	digits = get_digits(n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--digits] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
