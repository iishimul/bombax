#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char str[101];
    gets(str);
    int len = strlen(str);
    int count[3] = {0,0,0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '1')
        {
            count[0]++;
        }
        else if (str[i] == '2')
        {
            count[1]++;
        }
        else if (str[i] == '3')
        {
            count[2]++;
        }
    }
    char new[len];
    int index = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            if (i==0)
            {
                new[index++] = '1';
                new[index++] = '+';
            }
            else if (i==1)
            {
                new[index++] = '2';
                new[index++] = '+';
            }
            else if (i==2)
            {
                new[index++] = '3';
                new[index++] = '+';
            }
        }
    }
    new[index-1] = '\0';
    printf("%s",new);
    return 0;
}
