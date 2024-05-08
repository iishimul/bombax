    #include <stdio.h>
    #include <ctype.h>
     
    int main()
    {
        int n,t;
        scanf("%d %d", &n, &t);
        char s[n+1];
        scanf("%s", s);
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < n; j=j+1)
            {
                if (s[j] == 'B' && s[j+1] == 'G')
                {
                    s[j+1] = 'B';
                    s[j] = 'G';
                    j++;
                }
            }
            
        }
        printf("%s", s);
        return 0;
    }
