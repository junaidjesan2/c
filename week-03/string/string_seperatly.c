#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    char T[101];
    fgets(s, sizeof(s), stdin);
    fgets(T, sizeof(T), stdin);
    s[strcspn(s, "\n")] = '\0';
    T[strcspn(T, "\n")] = '\0';
    printf("%d %d\n", strlen(s), strlen(T));
    printf("%s %s", s, T);
    return 0;
}