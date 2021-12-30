#include <stdio.h>
#include <stdlib.h>

void* ft_memccpy(void* dest, const void* src, int c, size_t n)
{
    char* temp1;
    char* temp2;
    temp1 = (char*)dest;
    temp2 = (char*)src;
    while(n)
    {
        temp1[n] = temp2[n];
        if(temp2[n] == (unsigned char)c)
            break;
        n--;
    }
    return temp1;
}
int main(int argc, char* argv[])
{

    return 0;
}