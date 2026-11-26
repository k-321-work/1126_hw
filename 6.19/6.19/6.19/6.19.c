#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int face;
    int f[13] = { 0, 0 };

    srand(time(NULL));

    for (int i = 0; i < 3600; i++) {
        ++f[(1 + rand() % 6) + (1 + rand() % 6)];
    }

    printf("%s%17s\n", "Face", "Freqiency");

    for (int j = 2; j <= 12; j++) {
        printf("%4d%17d\n", j, f[j]);
    }

    system("pause");
    return 0;
}