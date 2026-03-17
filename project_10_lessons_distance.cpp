// по задаче от gemini "Контроллер датчика движения"

#include <iostream>
using std::endl, std::string;
// основные функции:
int checkTrigger(int distance);


// помогающие функции:
void endline();
void print_str(string a);
void print_int(int a);

// основной код:
int main() {
    int sm;
    print_str("введите расстояние до объекта в сантиметрах: ");
    std::cin >> sm;

    int st =  checkTrigger(sm);
    if (st == 1)
      print_str("обьект рядом");
    else
        print_str("обьект далеко");

    std::cout << endl;
    return 0;
}


// скелеты основных функций:
int checkTrigger(int distance) {
  if (distance >= 50){
    return 0;
  }
  else if(distance < 50) {
    return 1;
  }
  return 0;
}

// скелеты помогающих функций:
void endline(){
    std::cout << endl;
}

void print_str(string a) {
    std::cout << a;
}
void print_int(int a) {
    std::cout << a;
}