#include <iostream>
#include <string>

struct Address {
    std::string Country;
    std::string City;
    std::string Street;
    std::string House;
};

void Parse(const std::string& line, Address* const address);
void Unify(Address* const address);
std::string Format(const Address& address);

/*
 * ���� ���� ���ࠧ㬥���� �ଠ�:
 * ���, 㫨�, ��த, ��࠭�
*/
void Parse(const std::string& line, Address* const address) {
    if(line.empty() || address == nullptr) {
        throw "exception\n";
    }
    int start = 0;
    int stop;
    stop = line.find(',', start);
    address->House = line.substr(start, stop);

    start = start + stop + 1;
    stop = line.find(',', start) - start;
    address->Street = line.substr(start, stop);

    start = start + stop + 1;
    stop = line.find(',', start) - start;
    address->City = line.substr(start, stop);

    start = start + stop + 1;
    stop = line.find(',', start) - start;
    address->Country = line.substr(start, stop);
}

void Unify(Address* const address) {
    if(address == nullptr) {
        throw "exception\n";
        return;
    }
    int start;
    start = address->House.find("�.", 0);
    if(start != -1) {
        address->House.replace(start, 2, "���");
    }
    else {
        address->House.insert(0, "��� ");
    }
    address->House.erase(0, address->House.find_first_not_of(' '));
    address->House.erase(address->House.find_last_not_of(' ') + 1);

    start = address->Street.find("�.", 0);
    if(start != -1) {
        address->Street.replace(start, 3, "㫨�");
    }
    start = address->Street.find("��-�.", 0);
    if(start != -1) {
        address->Street.replace(start, 5, "�஥��");
    }
    start = address->Street.find("㫨�", 0);
    if(start == -1) {
        address->Street.replace(0, 0, "㫨�");
    }
    address->Street.erase(0, address->Street.find_first_not_of(' '));
    address->Street.erase(address->Street.find_last_not_of(' ') + 1);

    start = address->City.find("�.", 0);
    if(start != -1) {
        address->City.replace(start, 2, "��த");
    }
    start = address->City.find("��த", 0);
    if(start == -1) {
        address->City.replace(0, 0, "��த");
    }
    address->City.erase(0, address->City.find_first_not_of(' '));
    address->City.erase(address->City.find_last_not_of(' ') + 1);


    address->Country.erase(0, address->Country.find_first_not_of(' '));
    address->Country.erase(address->Country.find_last_not_of(' ') + 1);
}

std::string Format(const Address& address) {
    return address.House + ", " + address.Street + ", " + address.City + ", " + address.Country;
}

void task8() {

    std::string line = "�. 32, ��-�. �ମ�����, �. ����ਭ���, �����";
    Address address;

    Parse(line, &address);
    Unify(&address);

    std::cout << Format(address) << "\n";

    while (getline(std::cin, line)) {
        try {
            Parse(line, &address);
            Unify(&address);
            std::cout << Format(address) << "\n";
        }
        catch (const char* error_message){
            std::cout << error_message;
        }
    }
}
