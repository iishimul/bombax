    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    int main()
    {
        char str[1001];
        fgets(str, sizeof(str), stdin);
        int count[26] = {0};
        for (int i = 0; str[i] != '\0'; ++i)
        {
            if (isalpha(str[i]))
            { 
                count[tolower(str[i]) - 'a']++;
            }
        }
        int unique = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (count[i] > 0)
            {
                unique++;
            }
        }
     
        printf("%d", unique);
        return 0;
    }
