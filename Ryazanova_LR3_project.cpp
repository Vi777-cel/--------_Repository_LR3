#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

double Obem() {
    double bytes;
    cout << "Введите объем информации в байтах: ";
    cin >> bytes;
    return bytes;
}

double ObemMG(double bytes) {
    return bytes / (1024 * 1024); 
}

double ObemGB(double bytes) {
    return bytes / (1024 * 1024 * 1024); 
}

int main() { 
    setlocale(LC_ALL, "Russian"); 
    int funcSelect = 0;
    double bytes = 0;

    for (;;) {
        cout << "\n1. Ввести объем информации в байтах B"; 
        cout << "\n2. Выразить объем B в мегабайтах"; 
        cout << "\n3. Выразить объем B в гигабайтах";
        cout << "\nВведите номер задачи или 0, чтобы закончить: "; 
        
        cin >> funcSelect; // Считываем выбор пользователя

        switch(funcSelect) {
            case 1:
                bytes = Obem(); // Считываем объем в байтах
                break;
            case 2:
                cout << "Объем в мегабайтах: " << fixed << setprecision(2) << ObemMG(bytes) << " MB" << endl;
                break;
            case 3:
                cout << "Объем в гигабайтах: " << fixed << setprecision(2) << ObemGB(bytes) << " GB" << endl;
                break;
            case 0:
                return 0;
            default:
                cout << "Неверные данные!" << endl;
                break;
        }
    }
    
    return 0;
}
