/*Это первое задание*/
#include <iostream>
using namespace  std;
#include <random>


int main()
{
    setlocale(LC_ALL, "ru");
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(-50, 50);
    int size;
    cout << "Введите кол - во элементов в массиве : ";
    cin >> size;
    int* arr = new int[size];
    int minarr = 51;
    for (int i = 0; i < size; i++) {
        *(arr + i) = dis(gen);
        cout << *(arr + i) << " ";
        if (minarr > *(arr + i)) {
            minarr = *(arr + i);
        }
    }

    cout << "минимальный элемент: " << minarr << endl;
    delete[] arr;
    return 0;
}
