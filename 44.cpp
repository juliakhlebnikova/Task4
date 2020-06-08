#include "44.h"


using namespace std;


list* tmp = new list;
//Создание
void structure ()
{
    int i,k,p;
    k = 7;
    tmp -> next = NULL;
    int a;
    a = (int) 100 * (double)(rand()) / RAND_MAX;
    tmp ->data = a;
    tmp -> next = NULL;
    for (i=1; i<k; i++)
    {
        p = (int) 100 * (double)(rand()) / RAND_MAX;
        pushtail(p);
    }
    print_list();
}

//Вывод на печать
void print_list()
{
    list *ptr = new list;
    ptr = tmp;
    while(ptr)
    {
        cout << ptr->data << " - > " ;
        ptr = ptr->next;
    }
}

//Добавление в начало списка
void push(int x)
{
    list *ptr = new list;
    ptr->data = x;
    ptr->next = tmp;
    tmp = ptr;
}

//Удалить первый элемент
int pop()
{
    list *ptr = tmp;
    int x = tmp->data;
    tmp = tmp->next;
    delete ptr;
    return x;
}

//Добавить после заданного
void addafter(int after, int x)
{
    list *ptr = tmp;
    while(ptr && ptr->data != after) ptr = ptr->next;
    if (ptr)
    {
        list *p = new list;
        p->data = x;
        p->next = ptr->next;
        ptr->next = p;
    }
}

//Удаление заданного элемента
int del (int a)
{
    int x;
    list *p = tmp;
    list *t = p->next;
    if (p->data == a)   //заданный эдемент первый в списке
    {
        delete p;
        tmp = t;
    }
    else
    {
        while(t && t->data != a)
        {
            p=t; //двигаем сразу два указателя по списку
            t=t->next;
        }
        x = t->data;
        p->next = t->next;
        delete t;
    }
    return x;
}

//Добавить перед заданным
void addbefore(int before, int x)
{
    list *ptr = tmp, *p;
    p = new list;
    p-> data = x;
    if(ptr-> data == before)
    {
        p->next = ptr;
        tmp = p;
    }
    else
    {
        while(ptr->next && ptr->next->data != before)
        ptr = ptr->next;
        p->next = ptr->next;
        ptr->next = p;
    }
}

//Добавление в хвост
void pushtail (int value)
{
    list* t = new list;
    list* p = tmp;
    t -> data = value;
    t -> next = NULL;
    while (!p->next == NULL) {p = p -> next;}
    p -> next = t;
}

//Удалить последний!
void poptail()
{
    list *ptr = tmp;
    if (ptr->next == NULL)
    {
        pop();
        return;
    }
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
}

//мое задание (3. Из списка удалить один элемент за каждым вхождением элемента a, если такой есть и он отличен от a)
int my (int a)
{
    list * curr = tmp;
    if (curr->next!=NULL && curr!=NULL) {
    while (curr->next != NULL && curr->next->next != NULL)
    {
        if (curr->data == a && curr->next->data != a)
        {
            list * ptr = curr->next;
            curr->next = ptr->next;
            delete ptr;
        }
        curr = curr->next;
    }
    if (curr->data == a && curr->next->data != a)
    {
        curr->next = NULL;
    }
    }

}
