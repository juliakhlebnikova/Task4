
#include "44.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(static_cast<unsigned int>(time(0)));

    structure ();

    cout << '\n';
    cout << "Введите номер операции" << endl;
    cout << "0 выйти" << endl;
    cout << "1 вставка в начало" << endl;
    cout << "2 вставка в конец" << endl;
    cout << "3 вывод на печать" << endl;
    cout << "4 вставка до заданного элемента" << endl;
    cout << "5 вставка после заданного элемента" << endl;
    cout << "6 удалить первый элемент" << endl;
    cout << "7 удалить последний элемент" << endl;
    cout << "8 удалить заданный элемент" << endl;
    cout << "9 мое задание: из списка удалить один элемент за каждым вхождением элемента а, если такой есть и он отличен от а" << endl;

    int operation;
    cin >> operation;
    while (operation != 0)
    {
    switch (operation)
    {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            int value;
            cout << "Введите значение добавляемого в начало элемента: ";
            cin >> value;
            push(value);
            print_list();
            break;
        }
        case 2:
        {
            int value;
            cout << "Введите значение добавляемого в конец элемента: ";
            cin >> value;
            pushtail(value);
            print_list();
            break;
        }
        case 3:
        {
            print_list();
            break;
        }
        case 4:
        {
            int before,value;
            cout << "Перед каким элементом вставлять: ";
            cin >> before;
            cout << "Введите значение добавляемого элемента: ";
            cin >> value;
            addbefore(before,value);
            print_list();
            break;
        }
        case 5:
        {
            int after,value;
            cout << "После какого элемента вставлять: ";
            cin >> after;
            cout << "Введите значение добавляемого элемента: ";
            cin >> value;
            addafter(after,value);
            print_list();
            break;
        }
        case 6:
        {
            pop();
            print_list();
            break;
        }
        case 7:
        {
            poptail();
            print_list();
            break;
        }
        case 8:
        {
            int value;
            cout << "Введите значение удаляемого элемента: ";
            cin >> value;
            del (value);
            print_list();
            break;
        }
        case 9:
        {
            int value;
            cout << "Введите значение элемента, после которого нужно удалить: ";
            cin >> value;
            my (value);
            print_list();
            break;
        }
        default:
        {
            cout <<"Некорректная операция.\n";
            break;
        }

    }
    cin >> operation;
    }


    return 0;
}

