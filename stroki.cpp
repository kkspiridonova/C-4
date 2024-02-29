#include <Windows.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");
    string slovo;
    int opt;
    cout << "1) Вывести слово задом наперед";
    cout << "\n2) Вывести слово без гласных:";
    cout << "\n3) Вывести слово без согласных";
    cout << "\n4) Рандомно раскидать буквы данного слова";
    cout << "\nВыберите опцию: ";
    cin >> opt;
    switch (opt)
    {
        case 1:
            cout << "Введите слово: ";
            cin >> slovo;
            reverse(slovo.begin(), slovo.end());
            cout << slovo << endl;
            break;
        case 2:
        {
            cout << "Введите слово: ";
            cin >> slovo;
            string vowels = "уеыаоэяиюУЕЫАОЭЯИЮ";
            for (int i = 0; i < slovo.length(); i++) {
                for (int j = 0; j < vowels.length(); j++) {
                    if (slovo[i] == vowels[j]) {
                        slovo.erase(slovo.begin() + i);
                    }
                }
            }
            cout << slovo << endl;
            break;
        }
        case 3:
        {
            cout << "Введите слово: ";
            cin >> slovo;
            string consonats = "цкнгшщзхфвпрлджчсмтрбЦКНГШЩЗХФВПРЛДЖЧСМТБ";
            for (int i = 0; i < slovo.length(); i++) {
                for (int j = 0; j < consonats.length(); j++) {
                    if (slovo[i] == consonats[j]) {
                        slovo.erase(slovo.begin() + i);
                    }
                }
            }
            cout << slovo << endl;
            break;
        }
        case 4:
        {
            cout << "Введите слово: ";
            cin >> slovo;
            sort(slovo.begin(), slovo.end());
            cout << slovo << endl;
            break;
        }

    }
}

