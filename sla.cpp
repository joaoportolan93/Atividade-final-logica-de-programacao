#include <iostream>
int main() {
 int age;
 std::string name;

 std::cout << "Digite sua idade: ";
 std::cin >> age;
 std::cin.ignore(); // Ignora o '\n' deixado no buffer
 std::cout << "Digite seu nome: ";
 std::getline(std::cin, name);

 std::cout << "Idade: " << age << ", Nome: " << name << std::endl;
 return 0;
}