#include <stdio.h>
#include <stdlib.h>

void* ft_bzero(void* s, size_t n)
{
    char* temp = NULL;
    temp = (char*)s;
    while(n)
    {
        (*temp) = 0;
        temp++;
        n--;
    }
    return s;
}
int main(int argc, char* argv[])
{
    char* str = NULL;
    str = "Alices Adventures in Wonderland";
    char* smth= NULL;
    smth = ft_bzero(str, 2*sizeof(char));
    //printf("%s\n", smth);
    return 0;
}