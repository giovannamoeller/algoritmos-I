#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char line[6001];
    char *curr, *prev, letter;
    int length, alliterations;

    while (fgets(line, 6001, stdin)) {
        alliterations = 0;
        length = 0;
        letter = '\0';
        curr = line;
        prev = NULL;

        while (*curr != '\n') {
            if (!prev || *prev == ' ' && *curr != ' ') {
                if (letter == tolower(*curr))
                    ++length;
                else {
                    if (length > 1)
                        ++alliterations;

                    length = 1;
                    letter = tolower(*curr);
                }
            }
            prev = curr;
            ++curr;
        }
        if (length > 1)
            ++alliterations;

        printf("%d\n", alliterations);
    }
}