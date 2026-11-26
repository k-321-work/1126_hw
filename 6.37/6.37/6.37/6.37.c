#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int* _array, int _size);

int main(void) {
    int size;
    printf("Enter size\n");
    scanf_s("%d", &size);
    int array[size];
    printf("Enter array\n");
    for (int i = 0; i < size; i++)
        scanf_s("%d", &array[i]);

    printf("Max : %d\n", recursiveMaximum(array, size));

    system("pause");
    return 0;
}

int recursiveMaximum(int* _array, int _size) {
    if (_size == 1)
        return _array[0];

    if (_array[_size - 1] > recursiveMaximum(_array, _size - 1))
        return _array[_size - 1];
    else
        return recursiveMaximum(_array, _size - 1);
}