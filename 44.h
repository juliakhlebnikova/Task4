#include <iostream>
#include <clocale>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

struct list
{
    int data;
    list *next;
};


void structure ();
void print_list();
void push(int x);
int pop();
void addafter(int after, int x);
int del (int a);
void addbefore(int before, int x);
void pushtail (int value);
void poptail();
int my (int a);

