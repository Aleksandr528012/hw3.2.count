#include <iostream>
#include <Windows.h>

class Counter {

    int num{};

public:

    int get_num() { return num; };
    void set_num(int value) { if (value > 0) num = value; };
    int incr() { return num++; };
    int decr() { return num--; };
    

    Counter(int num) {};
    Counter() { num = 1; };
};

    void print_counter() {
        std::string q;
        std::string action;
        int count;
        
        Counter c;
        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::cin >> q;
        if (q == "��") {
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> count;
            c = Counter(count);
            c.set_num(count);
        }
        
        do {
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
            std::cin >> action;

            if (action == "+") {
                c.incr();
            }
            else if (action == "-") {
                c.decr();
            }
            else if (action == "=") {
                std::cout << "" << c.get_num() << std::endl;
            }
        } 
        while (action != "�"); {
            std::cout << "�� ��������! " << std::endl;
        };
        
    };



int main(int argc, char** atgv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    print_counter();
};