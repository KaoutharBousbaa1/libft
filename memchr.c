#include <stdio.h>
#include <stdlib.h>

void *ft_memchr(const void* memoryBlock, int searchedChar, size_t n )
{
    size_t i;
    i = 0;
    char* temp;
    temp = (char*)memoryBlock;
    while(i < n)
    {
        if(temp[i] = (char)searchedChar)
            return(&temp[i]);
        i++;
    }
    return NULL;
}
int main(int argc, char* argv[])
{

    return 0;
}