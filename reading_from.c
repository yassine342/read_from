#include "file_reader.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *src, char *ss)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	j = ft_strlen(ss);
	str = malloc(i + j + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	j = 0;
	while (ss[j])
	{
		str[i + j] = ss[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*read_file(int fd)
{
	char	ss[51];
	char	*src;
	char	*temp;
	int		by;

	src = malloc(1);
	if (!src)
		return (NULL);
	src[0] = '\0';
	by = 1;
	while (by > 0)
	{
		by = read(fd, ss, 50);
		if (by < 0)
		{
			free(src);
			return (NULL);
		}
		if (by == 0)
			break ;
		ss[by] = '\0';
		temp = ft_strjoin(src, ss);
		free(src);
		if (!temp)
			return (NULL);
		src = temp;
	}
	return (src);
}

char	*get_file_content(char *path)
{
	int		fd;
	char	*content;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	content = read_file(fd);
	close(fd);
	return (content);
}

void	print_file(char *content)
{
	if (!content)
		return ;
	write(1, content, ft_strlen(content));
}
