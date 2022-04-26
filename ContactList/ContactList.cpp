#include <iostream>
#include "ContactList.h"

void showMenu(){

    std::cout << "***************************" << std::endl;
    std::cout << "*****  1、添加联系人  *****" << std::endl;
	std::cout << "*****  2、显示联系人  *****" << std::endl;
	std::cout << "*****  3、删除联系人  *****" << std::endl;
	std::cout << "*****  4、查找联系人  *****" << std::endl;
	std::cout << "*****  5、修改联系人  *****" << std::endl;
	std::cout << "*****  6、清空联系人  *****" << std::endl;
	std::cout << "*****  0、退出通讯录  *****" << std::endl;
	std::cout << "***************************" << std::endl;
}

void addPerson(Addressbooks *abs){

    if(abs->m_Size == MAX){
        std::cout << "通讯录已满，请寻找下一个通讯录加入" << std::endl;
        return;
    }
    else{
        std::string name;
        std::cout << "请输入姓名" << std::endl;
        std::cin >> name;
        std::cout << "输入姓名ing" << std::endl;
        abs->personArray[abs->m_Size]->m_Name = name;
        std::cout << "输入姓名后" << std::endl;

        std::cout << "请输入性别：" << std::endl;
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
            std::cout << "输入错误，请重新输入" << std::endl;
        }

        //年龄
        int age = 0;
        std::cout << "请输入年龄：" << std::endl;
        std::cin >> age;
        abs->personArray[abs->m_Size]->m_Age = age;

        //电话
        std::cout << "请输入电话号码：" << std::endl;
        std::string phone = "";
        std::cin >> phone;
        abs->personArray[abs->m_Size]->m_Phone = phone;

        //住址
        std::cout << "请输入家庭住址，方便我们行窃：" << std::endl;
        std::string address;
        std::cin >> address;
        abs->personArray[abs->m_Size]->m_Addr = address;

        //更新通讯录人数
        abs->m_Size++;

        std::cout << "添加成功" << std::endl;
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
                std::cout << "欢迎下次使用" << std::endl;
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