#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 80

void my_cat(const char *filename) {
    if (filename == NULL) {
        printf("Usage: cat <filename>\n");
        return;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[MAX_LINE];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}
