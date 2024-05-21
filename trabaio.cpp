#include <iostream>
#include <cmath>
using namespace std;

int id [100];
string titulo[100];
string descricao [100];
string data [100];
string status[100];


// Sistema de Gerenciamento de Tarefas
// 1. Adicionar Tarefa
// 2. Visualizar Tarefas
// 3. Editar Tarefa
// 4. Remover Tarefa
// 5. Buscar Tarefa
// 6. Filtrar Tarefas por Status
// 0. Sair
// Escolha uma opção: 

void adicionarTarefa(){
    cout << "Escreva a o titulo da tarefa: " << endl;
    cin.ignore(); 
    getline(cin, titulo[0]);
}
int main(){
 cout << "Lista de Tarefas ae, que tem disponivel, éh" << endl;
 cout << "--------------------------------" << endl;
 cout << "Titulo: " << endl;
 cout << "Descrição: " << endl;
 cout << "Data de Vencimento: " << endl;
 cout << "Status: " << endl; 
}