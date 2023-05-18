#include <stdio.h>

void remove_spaces(char* str) {
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];

    str[count] = '\0';
}

int main() {
    
    char str[100];

    printf("Gimme a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    remove_spaces(str);

    printf("Without spaces: %s\n", str);

    return 0;
}
