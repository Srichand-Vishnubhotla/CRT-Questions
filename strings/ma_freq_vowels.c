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

    char vowels[] = "aeiouAEIOU";
    int maxFreq = 0;
    char maxVowel = '\0';

    for (int i = 0; vowels[i] != '\0'; i++)
    {
        if (freq[vowels[i]] > maxFreq)
        {
            maxFreq = freq[vowels[i]];
            maxVowel = vowels[i];
        }
    }

    if (maxFreq > 0)
        printf("Vowel with max frequency: '%c' (frequency: %d)\n", maxVowel, maxFreq);
    else
        printf("No vowels found in the string.\n");

    return 0;
}
