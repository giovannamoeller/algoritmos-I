#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int N, i, j, maxFrequency, frequencies[26];
    char charCode, line[202], result[26], *ptr;

    scanf("%d", &N);
    getchar();

    for (; N > 0; --N) {
        fgets(line, 202, stdin);

        memset(frequencies, 0, sizeof(frequencies));
        maxFrequency = -1;

        ptr = line;
        while (*ptr != '\n') {
            if (isalpha(*ptr)) {
                charCode = tolower(*ptr) - 'a';
                ++frequencies[charCode];

                if (frequencies[charCode] > maxFrequency)
                    maxFrequency = frequencies[charCode];
            }
            ++ptr;
        }

        for (i = 0, j = 0; i < 26; ++i) {
            if (frequencies[i] == maxFrequency)
                result[j++] = i + 'a';
        }
        result[j] = '\0';

        puts(result);
    }
}