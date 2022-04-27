#include <iostream>
#include "ContactList.h"

void showMenu(){

    std::cout << "*******************************" << std::endl;
    std::cout << "*****  1. Add new person  *****" << std::endl;
	std::cout << "*****  2. Show persons    *****" << std::endl;
	std::cout << "*****  3. Delete persons  *****" << std::endl;
	std::cout << "*****  4. Find persons    *****" << std::endl;
	std::cout << "*****  5. Modify persons  *****" << std::endl;
	std::cout << "*****  6. Clear persons   *****" << std::endl;
	std::cout << "*****  0. Exit            *****" << std::endl;
	std::cout << "*******************************" << std::endl;
}

void addPerson(Addressbooks *abs){

    if(abs->m_Size == MAX){
        std::cout << "The addressbook is full!" << std::endl;
        return;
    }
    else{
        std::string name;
        std::cout << "Please input the name:" << std::endl;
        std::cin >> name;
        std::cout << "Inputing name" << std::endl;
        abs->personArray[abs->m_Size]->m_Name = name;
        std::cout << "Afetr input name" << std::endl;

        std::cout << "Please input sexual:" << std::endl;
        std::cout << "1 -- 男" << std::endl;
        std::cout << "2 -- 女" << std::endl;

        //性别
        int sex = 0;
        while (true){
            std::cin >> sex;
            if (sex == 1 || sex == 2){
                abs->personArray[abs->m_Size]->m_Sex = sex;
                break;
            }
            std::cout << "Wrong. Please input it again" << std::endl;
        }

        //年龄
        int age = 0;
        std::cout << "Please input age:" << std::endl;
        std::cin >> age;
        abs->personArray[abs->m_Size]->m_Age = age;

        //电话
        std::cout << "Please input phone:" << std::endl;
        std::string phone = "";
        std::cin >> phone;
        abs->personArray[abs->m_Size]->m_Phone = phone;

        //住址
        std::cout << "Please input address:" << std::endl;
        std::string address;
        std::cin >> address;
        abs->personArray[abs->m_Size]->m_Addr = address;

        //更新通讯录人数
        abs->m_Size++;

        std::cout << "Successfully added!" << std::endl;
        system("pause");
        system("cls");
    }
}

int main(){

    int select = 0;

    Addressbooks abs;
    abs.m_Size = 0;

    while (true){
        showMenu();

        std::cin >> select;

        switch (select){

            case 1:
                addPerson(&abs);
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
            case 0:
                std::cout << "Hope to see you again!" << std::endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        } // switch


    } // main


    system("pause");

    return 0;
}