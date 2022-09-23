#include <windows.h>

#include <iostream>


struct Address
{
    std::string city;
    std::string street;
    unsigned short house;
    unsigned short flat;
    unsigned int index;
};

void printAddress(const Address& adr);

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Address adr1 = { "������", "��������", 13, 1, 125009 };
    printAddress(adr1);

    Address adr2;
    adr2.city = "�������";
    adr2.street = "��������";
    adr2.house = 10;
    adr2.flat = 12;
    adr2.index = 394077;
    printAddress(adr2);
    
}

void printAddress(const Address& adr)
{
    std::cout << "�����: " << adr.city << std::endl;
    std::cout << "�����: " << adr.street << std::endl;
    std::cout << "����� ����: " << adr.house << std::endl;
    std::cout << "����� ��������: " << adr.flat << std::endl;
    std::cout << "������: " << adr.index << std::endl << std::endl;
}
