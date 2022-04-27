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
        //abs = (struct Addressbooks *)malloc(sizeof(struct Addressbooks));
        //abs->personArray[abs->m_Size] = (struct Person *)malloc(sizeof(struct Person));
        abs->personArray[abs->m_Size]->m_Name = name;

        std::cout << "Please input sexual:" << std::endl;
        std::cout << "1 -- Male" << std::endl;
        std::cout << "2 -- Female" << std::endl;

        //sex
        int sex = 0;
        while (true){
            std::cin >> sex;
            if (sex == 1 || sex == 2){
                abs->personArray[abs->m_Size]->m_Sex = sex;
                break;
            }
            std::cout << "Wrong. Please input it again" << std::endl;
        }

        //age
        int age = 0;
        std::cout << "Please input age:" << std::endl;
        std::cin >> age;
        abs->personArray[abs->m_Size]->m_Age = age;

        //phone
        std::cout << "Please input phone:" << std::endl;
        std::string phone = "";
        std::cin >> phone;
        abs->personArray[abs->m_Size]->m_Phone = phone;

        //address
        std::cout << "Please input address:" << std::endl;
        std::string address;
        std::cin >> address;
        abs->personArray[abs->m_Size]->m_Addr = address;
        
        //add size count
        abs->m_Size++;

        std::cout << "Successfully added!" << std::endl;
        system("pause");
        system("cls");
    }
}

//2. list all the contact information
void showPerson(Addressbooks *abs){
    if (abs->m_Size == 0){
        std::cout << "There is no record" << std::endl;
    }
    else{
        for(int i = 0; i < abs->m_Size; i++){
            std::cout << "Name:" << abs->personArray[i]->m_Name << "\t";
            std::cout << "Sex:"  << (abs->personArray[i]->m_Sex == 1 ? "Male" : "Female") << "\t";
            std::cout << "Phone:" << abs->personArray[i]->m_Phone << std::endl;
        }
    } //else

    system("pause");
    system("cls");
}

int main(){

    int select = 0;

    Addressbooks *abs;
    
    abs = new struct Addressbooks;

    abs->m_Size = 0;

    while (true){
        showMenu();

        std::cout << "Please input your choice:" << std::endl;
        std::cin >> select;

        switch (select){

            case 1:
                abs->personArray[abs->m_Size] = new struct Person;
                addPerson(abs);
                break;
            case 2:
                showPerson(abs);
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

    for(int i = 0; i < abs->m_Size; i++){
        delete abs->personArray[i];
    }
    
    delete abs;

    system("pause");

    return 0;
}