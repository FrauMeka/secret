#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    // Запрос у пользователя на ввод минимальной и максимальной длины пароля
    int minLength, maxLength;
    cout << "Enter the minimum password length: ";
    cin >> minLength;
    cout << "Enter the maximum password length: ";
    cin >> maxLength;

    string pass;
    string lower="abcdefghijklmnopqrstuvwyz";
    string upper="ABCDEFIJKLNMOPKRSTQUVWXYZ";
    string num="0123456789";
    string symbol="!@#$%^&*-_";
    string data=lower+upper+num+symbol;

    // Генерация случайной длины пароля в диапазоне от minLength до maxLength
    int length = rand() % (maxLength - minLength + 1) + minLength;

    
    // Генерация пароля
    for(int i = 1; i <= length; i++) {
        pass += data[rand() % 88];
    }

    cout << "Generated password: " << pass << endl;
    return 0;
}
