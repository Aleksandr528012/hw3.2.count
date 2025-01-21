#include <iostream>
#include <Windows.h>

class Counter {

    int num{ 1 };

public:

    int get_num() { return num; };
    void set_num(int value) { if (value > 0) num = value; };
    int incr() { return num++; };
    int decr() { return num--; };
    std::string val;
    std::string action;

    Counter(int num) {};
    Counter() { 1; };

    void print_counter() {

        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ��� : ";
        std::cin >> val;

        if (val == "��") {
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> num;
        };

        while (action != "�") {
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
            std::cin >> action;
            if (action == "+") {
                incr();
            }
            else if (action == "-") {
                decr();
            }
            else if (action == "=") {
                std::cout << "" << num << std::endl;
            }
            else if (action == "�") {
                std::cout << "�� ��������! " << std::endl;
                return;
            }
        };
    };
};


int main(int argc, char** atgv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter count;

    count.print_counter();
};