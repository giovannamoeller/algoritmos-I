#include <stdio.h>
#include <string.h>

int main()
{
    int N, n, i, j;
    char str1[51], str2[51], result[101];
    int len1, len2;
    scanf("%d", &N);
    for (n = 0; n < N; ++n) {
        scanf("%s %s", str1, str2);
        len1 = strlen(str1); // comprimento da string
        len2 = strlen(str2);
        for (i = 0, j = 0; i < len1 && i < len2; ++i, j += 2) {
            result[j] = str1[i];
            result[j + 1] = str2[i];
        }
        for (; i < len1; ++i, ++j)
            result[j] = str1[i];
        for (; i < len2; ++i, ++j)
            result[j] = str2[i];
        result[j] = '\0';
        puts(result);
    }
    return 0;
}
