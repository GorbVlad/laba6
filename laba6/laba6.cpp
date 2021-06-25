#include <iostream>

using namespace std;

void zad1()
{
    int a, b, c;
    int max = 0;
    cout << "Введите числа: " << endl;
    cout << " a - ";
    cin >> a;
    cout << endl;
    cout << " b - ";
    cin >> b;
    cout << endl;
    cout << " c - ";
    cin >> c;
    cout << endl;
    if ((a > b) && (a > c))
    {
        cout << "Максимальное число а - " << a << endl;
    }
    else if ((b > a) && (b > c))
    {
        cout << "Максимальное число b - " << b << endl;
    }
    else 
    {
        cout << "Максимальное число c - " << c << endl;
        
    }
}

void zad2menu(int& a, int& b, int& n)
{
    int s = 0; //для выбора варианта второго меню
    while (s != 4) { // цикл для запуска выбора
        cout << "1 - Ввести нижний предел - " << a << endl; 
        cout << "2 - Ввести верхний предел - " << b << endl;
        cout << "3 - Изменить число - " << n << endl;
        cout << "4 - Выйти  " << endl;
        cout << "Выберите действие ";
        cin >> s;
        switch (s) {
        case(1):
            cout << "Изменить "; // изменение верхнего предела
            cin >> a;
            cout << endl;
            break;
        case(2):
            cout << "Изменить "; // изменение нижнего предела
            cin >> b;
            cout << endl;
            break;
        case(3):
            cout << "Изменить входящее число на - "; // изменение числа
            cin >> n;
            cout << endl;
            break;
        }
        if (s == 4) break;
    }
}

void vvodpred(int& a, int& b) { //функция ввода числа
    int c;
    cout << "Введи входящее число" << endl;
    cin >> c;
    while (true) { // истина
        if (a < c && c < b) {
            cout << "Число входит в интервал" << endl;
            break;
        }
        else (false); // ложь
        {
            zad2menu(a, b, c);
        }
    }
}


void zad3()
{
    int mas[10] = { 17,2,6,2,17,21,30,14,19,121 };
    cout << "Введенные элементы:\n ";
    for (int i = 0; i < 10; i++)
    {
        cout << mas[i] << "\t";
    }
    for (int k = 1; k < 10; k++) // сортировка масивов
    {
        int tmp = mas[k];
        int j = k - 1;
        while (j >= 0 && tmp <= mas[j])
        {
            mas[j + 1] = mas[j];
            j = j - 1;
        }
        mas[j + 1] = tmp;
    }
    cout << "Cортированные элементы:\n ";
    for (int i = 0; i < 10; i++) // вывод отсортированных масивово
    {
        cout << mas[i] << "\t";
    }
}



int main()
{
    setlocale(LC_ALL, "RU");
    cout << "********************" << endl;
    cout << "Задача 1" << endl;
    cout << "********************" << endl;
    cout << endl;
    zad1();
    cout << endl;
    cout << "********************" << endl;
    cout << "Задача 2" << endl;
    cout << "********************" << endl;
    cout << endl;
    int a, b;
    vvodpred(a, b);
    cout << "********************" << endl;
    cout << "Задача 3" << endl;
    cout << "********************" << endl;
    cout << endl;
    zad3();
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
    system("pause");
}
