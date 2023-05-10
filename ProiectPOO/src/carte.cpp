#include "carte.h"
void carte::feeddata()
{
    cin.ignore();
    cout<<"\nIntroduceti numele autorului: ";
    cin.getline(autor,20);
    cout<<"Introduceti titlul cartii: ";
    cin.getline(titlu,20);
    cout<<"Introduceti numele publicatiei: ";
    cin.getline(publicatie,20);
    cout<<"Pret: ";
    cin>>*price;
    cout<<"Stoc: ";
    cin>>*stock;

}

void carte::editdata()
{

    cout<<"\nIntroduceti numele autorului: ";
    cin.getline(autor,20);
    cout<<"Introduceti numele cartii: ";
    cin.getline(titlu,20);
    cout<<"Introduceti numele publicatiei: ";
    cin.getline(publicatie,20);
    cout<<"Pret: ";
    cin>>*price;
    cout<<"Stoc: ";
    cin>>*stock;

}

void carte::showdata()
{
    cout<<"\nNume autor: "<<autor;
    cout<<"\nTitlu: "<<titlu;
    cout<<"\nNumele publicatiei: "<<publicatie;
    cout<<"\nPret: "<<*price;
    cout<<"\nStoc: "<<*stock;

}

int carte::search(char tbuy[20],char abuy[20] )
{
    if(strcmp(tbuy,titlu)==0 && strcmp(abuy,autor)==0)
        return 1;
    else return 0;

}

void carte::buycarte()
{
    int count;
    cout<<"\nCate carti am dori sa cumparam: ";
    cin>>count;
    if(count<=*stock)
    {
        *stock=*stock-count;
        cout<<"\nCarti cumparate";
        cout<<"\nTotal: $"<<(*price)*count;
    }
    else
        cout<<"\nNu avem in stoc :(";

};
