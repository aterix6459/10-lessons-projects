// по задаче от gemini "Калькулятор разметки диска для двух ОС"

#include <iostream>
using namespace std;

void print_str(string a);

int main(){
    int disk_space, disk_os;
    for(int i = 1; i > 0; i++) {    
        print_str("введите всю свободную память(гб): ");
        cin >> disk_space;

        print_str("\nвведите память, желаемую для второй ОС(гб): ");
        cin >> disk_os;


        if(disk_os > disk_space)
            print_str("память второй ОС не может быть больше основной памяти!\n");

        else if(disk_space < 64)
            print_str("размер свободной памяти не может быть меньше 64 гб для второй ОС!\n");

        else if(disk_os < 64)
            print_str("память для второй ОС не можеть быть меньше 64 гб!\n");

        else if(disk_os >= 64) {
            if(disk_os < disk_space){
                print_str("всё правильно, можно ставить вторую ОС\n");
                break;
            } else
                print_str("память второй ОС не может быть больше основной памяти!\n");
        }

    }

    return 0;
}

void print_str(string a) {
    cout << a;
}