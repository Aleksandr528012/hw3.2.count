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

        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет : ";
        std::cin >> val;

        if (val == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> num;
        };

        while (action != "х") {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
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
            else if (action == "х") {
                std::cout << "До свидания! " << std::endl;
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