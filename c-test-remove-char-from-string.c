#include <stdio.h>
#include <string.h>

void remove_char(char* str, char c) {
    int i = 0, j = 0;

    while (str[i]) {
        if (str[i] != c)
            str[j++] = str[i];
        i++;
    }

    str[j] = '\0';
}

int main() {
    char str[100], c;

    printf("Gimme some words: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("What char to remove? ");
    scanf("%c", &c);

    remove_char(str, c);

    printf("Done: %s\n", str);

    return 0;
}
