#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 16

int main(int argc, char *argv[]) {
    FILE *file;
    unsigned char buffer[LINE_LENGTH];
    size_t bytesRead;
    int i;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    file = fopen(argv[1], "rb");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while ((bytesRead = fread(buffer, 1, LINE_LENGTH, file)) > 0) {

        for (i = 0; i < bytesRead; i++) {
            char ch = buffer[i];
            printf("%c\t", (ch >= 32 && ch <= 126) ? ch : '.');
        }
        printf("\n");

        for (i = 0; i < bytesRead; i++) {
            printf("%02x\t", buffer[i]);
        }
        printf("\n");
    }

    fclose(file);
    return EXIT_SUCCESS;
}
