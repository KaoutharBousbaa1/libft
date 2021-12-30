#include <stdio.h>
#include <stdlib.h>

void* ft_memset(void* c, int s, size_t n)
{
    char* temp = NULL;
    temp = c;
    while(n)
    {
        *temp = (unsigned char)s;
        temp++;
        n--;
    }
    return c;
}
int main(int argc, char* argv[])
{
    char* str = NULL;
    str = "Alices Adventures in Wonderland";
    char* smth= NULL;
    smth = ft_memset(str, 2, sizeof(char));
    //printf("%s\n", smth);
    return 0;
}

