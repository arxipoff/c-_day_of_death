#include <iostream>
#include <string>

using namespace std;

int main() {

  // ***WHEN YOU DYE +)
  srand(time(0));
  int days = 1 + rand() % 36000;
  string name;
  
  cout << "Введите свое имя: ";
  getline(cin, name);

  try {
    if(name == "") {
      throw 123;
    }
    cout << name << ", вы умрете через " << days << " дней!" << endl;
  } catch(int i) {
    cout << "Ошибка №" << i << ": имя не введено!";  
  }

  return 0;
}