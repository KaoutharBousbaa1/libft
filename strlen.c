#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t i = 0;
	if(!s)
		return 0;
	while(s[i] != '\0')
		i++;
	return i;
}
int main(int argc, char* argv[])
{
    
    return 0;
}