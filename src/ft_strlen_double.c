#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

int	ft_strlen_double(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}