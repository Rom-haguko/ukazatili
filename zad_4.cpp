#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");
	const int max_len = 80;
	char* arr_input = new char[max_len];
	cout << "Введите строку, состояющую из скобок: ";
	cin.getline(arr_input, max_len); 
	
	const char* open_br = "({[";
	const char* close_br = ")}]";

	char left_br, right_br; /*Переменные для хранения текущих скобок*/

	int index_right = 0;
	for (int i = 0; *(arr_input + i) != '\0'; i++) {
		index_right++; /*находим индекс последнего элемента, так же этот элемент имеет значение кол-ва всех элементов*/
	}
	if (index_right % 2 == 0) {
		index_right--; /*Уменьшаем индекс для корректного доступа к последнему элементу*/
		/**Проверяем соответствие открывающих и закрывающих скобок**/
		for (int i = 0; i < index_right / 2; i++) {
			left_br = arr_input[i];
			right_br = arr_input[index_right];

			int j = 0;
			/*Находим индекс открывающей скобки*/
			for (; j < 3; j++) {
				if (open_br[j] == left_br) {
					break;
				}
			}
			int x = 2;/*x=2 чтобы, если пользователь вводил символы помимо скобок, программа не выдавала, что строка корректна */
			/*Находим индекс закрывающей скобки*/
			for (; x > -1; x--) {
				if (close_br[x] == right_br) {
					break;
				}
			}
			/*Проверяем, соответствуют ли индексы открывающей и закрывающей скобки*/
			if (j != x) {
				cout << "Скобки расставлены некорректно" << endl;
				delete[]arr_input;
				return 1;
			}
			index_right--;
		}

	}
	else {
		cout << "Скобки расставлены некорректно" << endl;
		delete[]arr_input;
		return 1;
	}
	cout << "Скобки расставлены корректно" << endl;
	delete[] arr_input;
	return 0;
}
