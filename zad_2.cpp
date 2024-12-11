#include <iostream>
using namespace  std;



int main()
{
    setlocale(LC_ALL, "ru");
    const int mx_l = 80;
    char* arr = new char[mx_l];
    char* copy_arr = new char[mx_l];
    cout << "Введите строку: ";
    cin.getline(arr, mx_l);
    char* px = arr;
    char* px2 = copy_arr;
    while (*px == ' ') {
        px++;
    }
    bool flag = false;
    int j_for_copy = -1;
    for (int i = 0; *(px + i) != '\0'; i++) {
        if (*(px + i) != ' ') {
            flag = true;
            px2[++j_for_copy] = *(px + i);

        }
        else {
            if (flag == true) {
                px2[++j_for_copy] = ' ';
                flag = false;
            }
        }
    }
    if (px2[j_for_copy - 1] == ' ') {
        j_for_copy--;
    }
    px2[j_for_copy] = '\0';
    cout << "'" << px2 << "'" << endl;
    delete[]arr;
    delete[]copy_arr;
    return 0;  
}