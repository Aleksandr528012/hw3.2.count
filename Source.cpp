#include <iostream>
#include <Windows.h>

class Counter {

    int num{ 1 };

public:

    int incr{ num++ };
    int decr{ num-- };
    bool val;
    bool action;

    Counter(int num) {};
    Counter() {
        int get_num() { return num }
        void set_num(int value) { if (value > 0) num = value; }
    }

    void print_counter() {

        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ��� : ";
        std::cin >> val;

        if (val = "��") {
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> num;
            return num;
        };

        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> action;
        if (action == "+") {
            incr;
            return true;
        };
        else (action == -) {
            decr;
            return true;
        };
        else (action == = ) {
            std::cout << "" << num << std::endl;
            return true;
        };
            else (action == �) {
                std::cout << "�� ��������! " << std::endl;
                return true;
            };

    };
};


int main(int argc, char** atgv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter count;
    int a = 1;


    while (a == 1) {

        count.print_counter();

    }
};