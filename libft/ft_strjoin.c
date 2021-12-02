#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (res != NULL)
	{
		ft_strlcpy(res, s1, s1_len + 1);
		ft_strlcpy(res + s1_len, s2, s2_len + 1);
	}
	return (res);
}
