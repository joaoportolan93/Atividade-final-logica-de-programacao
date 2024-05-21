#include <iostream>
using namespace std;
int main() {
int age;
string name;
cout << "Digite sua idade: ";
cin >> age;
cin.ignore(); // Ignora o '\n' deixado no buffer
cout << "Digite seu nome: ";
getline(cin, name);

cout << "Idade: " << age << ", Nome: " << name << endl;
 return 0;
}