#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        int c;
        while ((c = getchar()) != EOF)
            putchar(c);
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {
            switch (argv[i][1]) {
                case 'h':
                    printf("Usage:\n\t%s [FILE] # Prints the contents of the file.\n\t%s -h # Prints this menu.\n", argv[0], argv[0]);
                    return 0;
                default:
                    printf("Unknown flag, use -h for help menu.\n");
                    return 1;
            }
        }

        FILE *file = fopen(argv[i], "r");
        if (file == NULL) {
            printf("Invalid file name.\n");
            return 1;
        }

        int c;
        while ((c = fgetc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    return 0;
}