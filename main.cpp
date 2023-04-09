#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int money;
    std::cout << "в банкомат внесено: ";
    std::cin >> money;
    std::string info = "";
    if (money<=150000 && money%100==0) {


        if (money / 5000 > 0) {

            info = info + std::to_string(money / 5000) + " по 5000 руб. ";
            money = money - 5000 * (money / 5000);
        }
        if (money / 2000 > 0) {

            info = info + std::to_string(money / 2000) + " по 2000 руб. ";
            money = money - 2000 * (money / 2000);
        }
        if (money / 1000 > 0) {

            info = info + std::to_string(money / 1000) + " по 1000 руб. ";
            money = money - 1000 * (money / 1000);
        }
        if (money / 500 > 0) {

            info = info + std::to_string(money / 500) + " по 500 руб. ";
            money = money - 500 * (money / 500);
        }
        if (money / 200 > 0) {

            info = info + std::to_string(money / 200) + " по 200 руб. ";
            money = money - 200 * (money / 200);
        }
        if (money / 100 > 0) {

            info = info + std::to_string(money / 100) + " по 100 руб. ";
            money = money - 100 * (money / 100);
        }
    } else {
        info="Неверная сумма";
    }

    std::cout<<info;
}



