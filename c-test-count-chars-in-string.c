#include <stdio.h>

int count_it(const char* str, char c) {
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            count++;

    return count;
}

int main() {
    
    char str[100], c;

    printf("Gimme some words (keep it clean): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Gimme a character: ");
    scanf("%c", &c);

    printf("Count: %d\n", count_it(str, c));

    return 0;
}
