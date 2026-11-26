#include <stdio.h>
#include <stdlib.h>

int binary_search(int* _array, int _low, int _high, int _key);

int main() {
    int size;
    printf("Enter array size\n");
    scanf_s("%d", &size);
    int array[size];
    int key;

    printf("Enter array\n");
    for (int i = 0; i < size; i++)
        scanf_s("%d", &array[i]);

    printf("Enter key\n");
    scanf_s("%d", &key);

    printf("result : %d\n", binary_search(array, 0, size - 1, key));

    system("pause");
    return 0;
}

int binary_search(int* _array, int _low, int _high, int _key) {
    int mid = _low + (_high - _low) / 2;

    if (_low > _high)
        return -1;

    if (_array[mid] == _key)
        return mid;

    else if (_array[mid] < _key)
        return binary_search(_array, mid + 1, _high, _key);

    else
        return binary_search(_array, _low, mid - 1, _key);

}