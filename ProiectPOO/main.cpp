#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<carte.h>
using namespace std;

int main()
{
    carte *B[20];
    int i=0,r,t,choice;
    char titlubuy[20],autorbuy[20];
    while(1)
    {
        cout<<"\n Libraria online"
            <<"\n1. Carte noua"
            <<"\n2. Cumpara carte"
            <<"\n3. Cauta carte"
            <<"\n4. Editeaza carte"
            <<"\n5. Exit"
            <<"\n\nEnter: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            B[i] = new carte;
            B[i]->feeddata();
            i++;
            break;

        case 2:
            cin.ignore();
            cout<<"\nTitlu: ";
            cin.getline(titlubuy,20);
            cout<<"\nAutor: ";
            cin.getline(autorbuy,20);
            for(t=0; t<i; t++)
            {
                if(B[t]->search(titlubuy,autorbuy))
                {
                    B[t]->buycarte();
                    break;
                }
            }
            if(t==1)
                cout<<"\nNu avem in stoc :(";

            break;
        case 3:
            cin.ignore();
            cout<<"\nTitlu: ";
            cin.getline(titlubuy,20);
            cout<<"\nAutor: ";
            cin.getline(autorbuy,20);

            for(t=0; t<i; t++)
            {
                if(B[t]->search(titlubuy,autorbuy))
                {
                    cout<<"\nCarte gasita cu succes";
                    B[t]->showdata();
                    break;
                }
            }
            if(t==i)
                cout<<"\nNu avem in stoc :(";
            break;

        case 4:
            cin.ignore();
            cout<<"\nTitlu: ";
            cin.getline(titlubuy,20);
            cout<<"\nAutor: ";
            cin.getline(autorbuy,20);

            for(t=0; t<i; t++)
            {
                if(B[t]->search(titlubuy,autorbuy))
                {
                    cout<<"\nCarte gasita cu succes";
                    B[t]->editdata();
                    break;
                }
            }
            if(t==i)
                cout<<"\nNu avem in stoc :(";
            break;

        case 5:
            exit(0);
        default:
            cout<<"\nInvalid";

        }
    }
    return 0;
}
