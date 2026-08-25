#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    // Test ft_strlen vs standard strlen
    char *str = "Hello 42!";
    printf("Standard strlen: %lu\n", strlen(str));
    printf("Your ft_strlen: %lu\n", ft_strlen(str));
    
    return (0);
}
