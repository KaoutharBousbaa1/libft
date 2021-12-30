#include <stdio.h>
#include <stdlib.h>

void* ft_memcpy(void* dest, const void* src, size_t n)
{
    char* temp1;
    char* temp2;
    temp1 = (char*)dest;
    temp2 = (char*)src;
    while(n)
    {
        temp1[n] = temp2[n];
        n--;
    }
    return temp1;
}
int main(int argc, char* argv[])
{

    return 0;
}