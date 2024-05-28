#include <iostream>
#include <cmath>
using namespace std;


int id [100];
string titulo[100];
string descricao [100];
string data [100];
string status[100];
int controle = 0;

void criartarefas(){
    cout << "Escreva o titulo da tarefa: " << endl;
    cin >> titulo[controle];
    cout << "Escreva a descrição: " << endl;
    cin >> descricao[controle]; 
    cout << "Coloque a data: " << endl;
    cin >> data[controle]; 
    cout << "Coloque os status: " << endl;
    cin >> status[controle];
    controle++;
}
void visualizartarefas(){

    for(int i = 0; i < controle; i++) {
        cout << "Tarefa " << i+1 << ":" << endl;
        cout << "Id: " << id[i] << endl;
        cout << "Titulo: " << titulo[i] << endl;
        cout << "Descricao: " << descricao[i] << endl;
        cout << "Data: " << data[i] << endl;
        cout << "Status: " << status[i] << endl;
        cout << "------------------------" << endl;
    }
}
void editartarefa(){
    int idtarefa;   
    cout << "Digite o id da tarefa a ser editada: " << endl;
    cin >> idtarefa;
    cin.ignore();    
    cout << "Digite o nome da tarefa: "  << endl;
    cin >> titulo[idtarefa]; 
    cout << "Digite a descrição : " << endl;
    cin >> descricao[idtarefa];
    cout << "Digite a data: " << endl;
    cin >> data[idtarefa];
}
    

int main() {
    int num;

do{
    cout << "1. Adicionar Tarefa" << endl;
    cout << "2. Visualizar Tarefas" << endl;
    cout << "3. Editar Tarefa" << endl;
    cout << "4. Remover Tarefa" << endl;
    cout << "5. Buscar Tarefa" << endl; 
    cout << "6. Filtrar Tarefas por Status" << endl;
    cout << "0. Sair" << endl;
    cin >> num;


 switch (num)
 {
case 1:
   criartarefas();
     break;
case 2:
  visualizartarefas();
    break;
case 3: 
    editartarefa();
    break;
default:
    printf("Numeros invalidos ");
    break;
 } 
}while (num != 0);
}
 