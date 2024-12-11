#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int size = 1000;
    int arr[size] = { 10, 12, 15, 16, 100, 111, 111};
    for (int i = 7; i < size; i++) {
        arr[i] = 0;
    }

    int index_left = 0, index_right = size - 1;
    int index_mid;
    while (index_left <= index_right) {
        index_mid = (index_left + index_right) / 2;
        if (arr[index_mid] != 0) {
            index_left = index_mid + 1;
        }
        else {
            index_right = index_mid - 1;
        }
    }
    cout << "Кол-во ненулевых элементов: " << index_left << endl;
    return 0;
}

