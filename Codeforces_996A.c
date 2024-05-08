    #include <stdio.h>
     
    int main()
    {
        long long n;
        scanf("%lld", &n);
        int notes[5] = {1, 5, 10, 20, 100};
        int count = 0;
        for (int i = 4; i >= 0; i--)
        {
            if (n >= notes[i])
            {
                count += n / notes[i];
                n = n % notes[i];
            }
        }
        printf("%d\n", count);
     
        return 0;
    }
