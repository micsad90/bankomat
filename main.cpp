#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

int kasa, PIN,  wyplata, koniec, powrot, pPIN, x, End;
int numer;



int main()
{
    cout << "Ile chcesz miec pieniedzy? :";
    cin >> kasa;
    system ("cls");

    cout << "Prosze czekac..."<<endl;
    Sleep(3000);
    system ("cls");

    cout << "Podaj PIN:";
    cin >> PIN;

    if (PIN==1729)
    {
        system ("cls");
     cout << "Jestes zalogowany!"<< endl;
        Sleep (3000);
        system ("cls");


    for(;;)


        {

     cout << "wybierz co chcesz zrobic:"<<endl;
     cout << "1.stan konta" <<endl;
     cout << "2.wyplac pieniadze" <<endl;
     cout << "3.wyloguj" << endl << endl;
     cout << "wybierz numer zadania:" <<endl;


        cout << endl;
        numer=getch();

        system ("cls");
        switch (numer)
        {


        case '1':
        {
            cout << "Prosze czekac..."<<endl;
            Sleep (2000);
            system ("cls");
            cout <<"Twoj stan konta:"<< kasa << endl;
            cout << "----------------" << endl;

        }
        break;
        case '2':
          {
            cout << "ile chcesz wyplacic:";
            cin >> wyplata;
            {


            system ("cls");


                x= kasa-wyplata;
                cout <<"Prosze czekac..."<< endl;
                Sleep (2000);
                system ("cls");
                cout << "wyplacono:"<< wyplata << endl;
                cout << "Na koncie pozostalo:"<< x << endl;
                kasa=x;
                cout << "------------------" << endl;
            }

          }
          break;
        case '3':
            {
            cout << "jestes wylogowany!"<<endl;
          Sleep (3000);
          system ("cls");

            cin >> koniec;

        }
    break;
    }
        }
    }
    else
    {
        cout << "PIN NIEPOPRAWNY!!!"<< endl;
            Sleep (2000);
            system ("cls");


    }


        cout << "powrot do menu glownego:1" <<endl;
        cin >> powrot;
        if (powrot==1)
            system ("cls");


getch();getch();




    return 0;
}
