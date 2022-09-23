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

    Address adr1 = { "Москва", "Тверская", 13, 1, 125009 };
    printAddress(adr1);

    Address adr2;
    adr2.city = "Воронеж";
    adr2.street = "Лизюкова";
    adr2.house = 10;
    adr2.flat = 12;
    adr2.index = 394077;
    printAddress(adr2);
    
}

void printAddress(const Address& adr)
{
    std::cout << "Город: " << adr.city << std::endl;
    std::cout << "Улица: " << adr.street << std::endl;
    std::cout << "Номер дома: " << adr.house << std::endl;
    std::cout << "Номер квартиры: " << adr.flat << std::endl;
    std::cout << "Индекс: " << adr.index << std::endl << std::endl;
}
