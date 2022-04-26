#include <iostream>
#include "ContactList.h"

void showMenu(){

    std::cout << "***************************" << std::endl;
    std::cout << "*****  1�������ϵ��  *****" << std::endl;
	std::cout << "*****  2����ʾ��ϵ��  *****" << std::endl;
	std::cout << "*****  3��ɾ����ϵ��  *****" << std::endl;
	std::cout << "*****  4��������ϵ��  *****" << std::endl;
	std::cout << "*****  5���޸���ϵ��  *****" << std::endl;
	std::cout << "*****  6�������ϵ��  *****" << std::endl;
	std::cout << "*****  0���˳�ͨѶ¼  *****" << std::endl;
	std::cout << "***************************" << std::endl;
}

void addPerson(Addressbooks *abs){

    if(abs->m_Size == MAX){
        std::cout << "ͨѶ¼��������Ѱ����һ��ͨѶ¼����" << std::endl;
        return;
    }
    else{
        std::string name;
        std::cout << "����������" << std::endl;
        std::cin >> name;
        std::cout << "��������ing" << std::endl;
        abs->personArray[abs->m_Size]->m_Name = name;
        std::cout << "����������" << std::endl;

        std::cout << "�������Ա�" << std::endl;
        std::cout << "1 -- ��" << std::endl;
        std::cout << "2 -- Ů" << std::endl;

        //�Ա�
        int sex = 0;
        while (true){
            std::cin >> sex;
            if (sex == 1 || sex == 2){
                abs->personArray[abs->m_Size]->m_Sex = sex;
                break;
            }
            std::cout << "�����������������" << std::endl;
        }

        //����
        int age = 0;
        std::cout << "���������䣺" << std::endl;
        std::cin >> age;
        abs->personArray[abs->m_Size]->m_Age = age;

        //�绰
        std::cout << "������绰���룺" << std::endl;
        std::string phone = "";
        std::cin >> phone;
        abs->personArray[abs->m_Size]->m_Phone = phone;

        //סַ
        std::cout << "�������ͥסַ�������������ԣ�" << std::endl;
        std::string address;
        std::cin >> address;
        abs->personArray[abs->m_Size]->m_Addr = address;

        //����ͨѶ¼����
        abs->m_Size++;

        std::cout << "��ӳɹ�" << std::endl;
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
                std::cout << "��ӭ�´�ʹ��" << std::endl;
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