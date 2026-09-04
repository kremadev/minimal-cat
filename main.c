#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {
            switch (argv[i][1]) {
                case 'h':
                    printf("Usage:\n\t%s [FILE] # Prints the contents of the file.\n\t%s -h # Prints this menu.\n", argv[0], argv[0]);
                    break;
                default:
                    printf("Unkown flag, use -h for help menu.\n");
                    break;
            }
        } else {
            FILE *file = fopen(argv[1], "r");
            if (file == NULL) {
                printf("Invalid file name.\n");
                return 1;
            }
            fseek(file, 0, SEEK_END);
            long size = ftell(file);
            rewind(file);
            for (long j = 0; j < size; j++) {
                printf("%c", fgetc(file));
            }
        }
    }
    return 0;
}
