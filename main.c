#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*str;

	str = "Hello 42!";
	printf("Standard strlen: %lu\n", strlen(str));
	printf("Your ft_strlen: %lu\n", ft_strlen(str));
	return (0);
}
