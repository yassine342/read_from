#ifndef FILE_READER_H
# define FILE_READER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *src, char *ss);
char	*read_file(int fd);
char	*get_file_content(char *path);
void	print_file(char *content);

#endif
