#include<iostream>
#include "workerManager.h"

int main(){

    WorkerManager wm;
    int choice = 0;
    while(true){
        wm.Show_Menu();
        cout << "Please input your choice:";
        cin >> choice;

        switch(choice){
            case 0:
                wm.exitSystem();
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            default:
                system("cls");
                break;
        }

    }

    system("pause");

    return 0;
}