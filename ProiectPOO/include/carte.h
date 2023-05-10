#ifndef CARTE_H
#define CARTE_H
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class carte
{
private:
    char *autor,*titlu,*publicatie;
    float *price;
    int *stock;
public:
    carte()
    {
        autor= new char[20];
        titlu=new char[20];
        publicatie=new char[20];
        price= new float;
        stock=new int;
    }
    void feeddata();
    void editdata();
    void showdata();
    int search(char[],char[]);
    void buycarte();
};

#endif // CARTE_H
