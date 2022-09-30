#include "push_swap.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_copy(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*tab;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	tab = malloc(sizeof(*tab) * (i + 1));
	if (!tab)
		return (NULL);
	j = 0;
	while (s[j] && j < i)
	{
		tab[j] = s[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	tab = malloc(sizeof(*tab) * (ft_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			tab[j++] = ft_copy(s, c);
			while (*s != c && *s)
				s++;
		}
		if (!tab)
			return (NULL);
	}
	tab[j] = NULL;
	return (tab);
}
