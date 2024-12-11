#include <iostream>
using namespace  std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int mx_l = 80;
    char* arr = new char[mx_l];
    char* px1 = arr;
    int num[10] = {0};
    int* px2 = num;
    cout << "Введите строку: ";
    cin.getline(arr, mx_l);
    int digit_index;
    for (int i = 0; px1[i] != '\0'; i++) {
        if ('0' <= px1[i] && px1[i] <= '9') {
            digit_index = px1[i] - '0';
            px2[digit_index]++;
        }
    }
    bool flag = false;
    for (int i = 0; i < 10; i++){
        if (*(px2+i) > 0) {
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << "Цифры в строке совсем отсутствуют" << endl;
    }
    else {
            int max_el = -1;
            for (int i = 0; i < 10; i++) {
                if (*(px2 + i) > max_el) {
                    max_el = i;
                }
            }

            cout << "Самая часто встречающаяся цифра: " << max_el << endl;
    }
    delete[]arr;
    return 0;
}