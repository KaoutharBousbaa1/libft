#include <string.h>

char *ft_strcpy(char *dest, const char *src)
{
    int i; 
    i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
    dest[i+1] = "\0";
	return dest;
}

char *strdup(const char *src) {
    char *c = malloc(strlen(src) + 1);
    if(c == NULL) 
        return NULL;     
    strcpy(c, src);                      
    return c;                            
}
int main(int argc, char* argv[])
{
    
    return 0;
}