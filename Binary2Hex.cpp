#include <stdio.h>
#include <stdlib.h>

int main(int argv, char* argc[])
{
    FILE* fpr = fopen(argc[1], "rb");
    FILE* fpw = fopen(argc[2], "w");
    printf("dummy\n");
    unsigned char c;
    while ((fread(&c, 1, 1, fpr)) > 0) {
        fprintf(fpw, "%02x ", c);
    }
    fclose(fpr);
    fclose(fpw);

    return 0;
}