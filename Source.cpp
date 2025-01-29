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
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> q;
        if (q == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> count;
            c = Counter(count);
            c.set_num(count);
        }
        
        do {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
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
        while (action != "х"); {
            std::cout << "До свидания! " << std::endl;
        };
        
    };



int main(int argc, char** atgv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    print_counter();
};