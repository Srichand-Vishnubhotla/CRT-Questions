#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);

    int freq[256] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i]] = freq[s[i]] + 1;
    }

    int maxFreq = 0;
    for (int i = 0;i<256; i++)
    {
        if(freq[i]>maxFreq)
        {
            maxFreq=freq[i];
        }
    }
    return 0;
}
