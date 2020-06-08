
#include "44.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(static_cast<unsigned int>(time(0)));

    structure ();

    cout << '\n';
    cout << "������� ����� ��������" << endl;
    cout << "0 �����" << endl;
    cout << "1 ������� � ������" << endl;
    cout << "2 ������� � �����" << endl;
    cout << "3 ����� �� ������" << endl;
    cout << "4 ������� �� ��������� ��������" << endl;
    cout << "5 ������� ����� ��������� ��������" << endl;
    cout << "6 ������� ������ �������" << endl;
    cout << "7 ������� ��������� �������" << endl;
    cout << "8 ������� �������� �������" << endl;
    cout << "9 ��� �������: �� ������ ������� ���� ������� �� ������ ���������� �������� �, ���� ����� ���� � �� ������� �� �" << endl;

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
            cout << "������� �������� ������������ � ������ ��������: ";
            cin >> value;
            push(value);
            print_list();
            break;
        }
        case 2:
        {
            int value;
            cout << "������� �������� ������������ � ����� ��������: ";
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
            cout << "����� ����� ��������� ���������: ";
            cin >> before;
            cout << "������� �������� ������������ ��������: ";
            cin >> value;
            addbefore(before,value);
            print_list();
            break;
        }
        case 5:
        {
            int after,value;
            cout << "����� ������ �������� ���������: ";
            cin >> after;
            cout << "������� �������� ������������ ��������: ";
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
            cout << "������� �������� ���������� ��������: ";
            cin >> value;
            del (value);
            print_list();
            break;
        }
        case 9:
        {
            int value;
            cout << "������� �������� ��������, ����� �������� ����� �������: ";
            cin >> value;
            my (value);
            print_list();
            break;
        }
        default:
        {
            cout <<"������������ ��������.\n";
            break;
        }

    }
    cin >> operation;
    }


    return 0;
}

