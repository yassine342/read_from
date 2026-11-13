#include "file_reader.h"

int	main(void)
{
	char	str[256];
	int		byte;
	char	*content;

	write(1, "Enter filename: ", 16);
	byte = read(0, str, 255);
	if (byte <= 0)
		return (1);
	if (str[byte - 1] == '\n')
		str[byte - 1] = '\0';
	else
		str[byte] = '\0';
	content = get_file_content(str);
	if (!content)
	{
		write(2, "Error reading file\n", 19);
		return (1);
	}
	print_file(content);
	free(content);
	return (0);
}
