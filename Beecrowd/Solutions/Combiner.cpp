#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int N, len_1, len_2, size;
    char str_1[50], str_2[50];
    scanf("%d", &N);
    while(N--)
    {
        scanf("%s %s", str_1, str_2);
        len_1 = strlen(str_1);
        len_2 = strlen(str_2);
        if(len_1 >= len_2)
            size = len_1;
        else
            size = len_2;
        for(int j = 0; j < size; j++)
        {
            if(j < len_1)
                printf("%c", str_1[j]);
            if(j < len_2)
                printf("%c", str_2[j]);
        }
        printf("\n");
    }
    return 0;
}