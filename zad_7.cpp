#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int len;
    cout << "Введите длину последовательности: ";
    cin >> len;
    if (len <= 0) {
        cout << "Длина последовательности должна быть положительным числом." << endl;
        return 1;
    }

    char* arr1 = new char[len];
    for (int i = 0; i < len; i++) {
        cout << "Введите " << i + 1 << " элемент массива: ";
        cin >> arr1[i];
    }

    char* arr2 = new char[len];
    int index_arr2 = 0;
    char compare;
    bool isDuplicate;
    for (int i = 0; i < len; i++) {
        compare = arr1[i];
        isDuplicate = false;

        for (int j = 0; j < index_arr2; j++) {
            if (compare == arr2[j]) {
                isDuplicate = true; 
                break;
            }
        }

        if (!isDuplicate) {
            arr2[index_arr2] = compare;
            index_arr2++;
        }
    }
    cout << "Уникальные элементы: ";
    for (int i = 0; i < index_arr2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}