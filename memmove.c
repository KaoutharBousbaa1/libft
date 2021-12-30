#include <stdio.h>
#include <stdlib.h>

void* ft_memmove(void* s1, const void* s2, size_t n)
{
    char* temp1;
    char* temp2;
    temp1 = (char*)s1;
    temp2 = (char*)s2;
    if(temp1 < temp2)
    {
        int i = 0;
        while(i < n)
        {
            temp1[i] = temp2[i];
            i++;
        }
    }
    else
    {
        int i = n;
        while(i > 0)
        {
            temp1[i-1] = temp2[i-1];
            i--;
        }
    }
    return temp1;
}
int main(int argc, char* argv[])
{

    return 0;
}