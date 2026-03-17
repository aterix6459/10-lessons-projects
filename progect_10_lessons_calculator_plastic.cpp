// по задаче от gemini "Калькулятор затрат на 3D-печать"

#include <iostream>
using namespace std;

// функции
void print_str(string a);
void print_int(int a);

int main(){
    float price_plastic, price_model, gramms_detail;
    float price_1g_plastic, time_print_all, time_print, time_print_1g;

    print_str("введите цену пластика за 1000 грамм: ");
    cin >> price_plastic;
    print_str("введите вес модели(в граммах): ");
    cin >> gramms_detail;
    print_str("введите время печати(в минутах): ");
    cin >> time_print;

    price_1g_plastic = price_plastic / 1000;
    price_model = price_1g_plastic*gramms_detail;
    time_print_1g = time_print/gramms_detail;
    time_print_all = time_print/gramms_detail*1000/60;

    cout << "\033[34mцена за модель: " << price_model << "\033[0m" << endl;    
    // cout << "цена на 1 грамм пластика: " << price_1g_plastic << endl\
    // << "время на печать одного грамма(в минутах): " << time_print_1g << endl\
    // << "время на печать всего рулона пластика(в часах): " << time_print_all << endl;

    return 0;
}

// скелеты функций
void print_str(string a) {
    cout << a;
}
void print_int(int a) {
    cout << a;
}
