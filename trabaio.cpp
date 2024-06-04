#include <iostream>
#include <cmath>
using namespace std;
/// 
int id [100];
string titulo[100];
string descricao [100];
string data [100];
string status[100];
int controle = 0;/// representa o número total de tarefas ou o tamanho dos arrays
/// 
void criartarefas(){
    cout << "Escreva o titulo da tarefa: " << endl;
    cin >> titulo[controle];
    cout << "Escreva a descrição: " << endl;
    cin >> descricao[controle]; 
    cout << "Coloque a data: " << endl;
    cin >> data[controle]; 
    cout << "Coloque os status: " << endl;
    cin >> status[controle];
    cout << "------------------------" << endl;
    controle++;/// isso faz com que aumente a quantidade em 1
}
void visualizartarefas(){
    if (controle == 0){ ///se for 0, isso significa que não há tarefas, então essa mensagem será exibida para o usuário.
        cout << "Nenhuma tarefa foi encontrada! " << endl;
        cout << "------------------------" << endl;
    }else{
        for(int i = 0; i < controle; i++) { /// se não for igual a "0" significa qua há tarefas para serem visualizadas
        cout << "Tarefa " << i+1 << ":" << endl;
        cout << "Id: " << id[i] << endl;
        cout << "Titulo: " << titulo[i] << endl;
        cout << "Descricao: " << descricao[i] << endl;
        cout << "Data: " << data[i] << endl;
        cout << "Status: " << status[i] << endl;
        cout << "------------------------" << endl;
    }
}
}
void editartarefa(){
    int idtarefa; // serve para armazenar o id da tarefa que o usuario queira editar
    cout << "Digite o id da tarefa a ser editada: " << endl;
    cin >> idtarefa;
    cin.ignore(); // é usado pra ignorar um ou mais caracteres do buffer de entrada  
    cout << "Digite o nome da tarefa: "  << endl;
    cin >> titulo[idtarefa]; 
    cout << "Digite a descrição : " << endl;
    cin >> descricao[idtarefa];
    cout << "Digite a data: " << endl;
    cin >> data[idtarefa];
    cout << "------------------------" << endl;
}
void removertarefa(){
    int idtarefa;
    bool a = false; ///verifica se a tarefa foi excluida com sucesso
    cout << "Digite o id da tarefa a ser excluida: " << endl;
    cin >> idtarefa;
    if (idtarefa < controle){
        for(int i = idtarefa; i < controle - 1; i++){/// verifica se o idtarefa é menor queo controle, se for, o código dentro das chaves roda
              titulo[i] = titulo[i - 1];
            descricao[i] = descricao[i - 1];
            data[i] = data[i - 1];
            status[i] = status[i - 1];
            a == true;
        }controle--; /// merma coisa que o "++" porém ele diminui o a quantidade em 1
     }else{
        cout << "ID de tarefa invalida! " << endl;
        cout << "------------------------" << endl;
    }
    if (a = true){
        cout << "Sua tarefa foi removida com sucesso!" << endl;
        cout << "------------------------" << endl;
    }
}
void buscartarefas(){
    string buscar;
    bool encontrou = false;/// será usada para verificar se a tarefa foi encontrada
    cout << "Digite a tarefa que você queira buscar: " << endl;
    cin >> buscar;
    system ("clear");/// limpa a tarefa do console, fica mior de ver 
    for (int i = 0; i < controle; i++){
        if(titulo[i] == buscar){
            encontrou = true;
            cout << "Tarefa " << i+1 << ":" << endl;
            cout << "id: " << id[i] << endl;
            cout << "titulo: " << titulo[i] << endl;
            cout << "Descrição: " << descricao[i]<< endl;
            cout << "Data: " << data[i] << endl;
            cout << "Status: " << status[i] << endl;
            cout << "------------------------" << endl;
        }
    }
    if(!encontrou){///Se for "false" o código dentro das chaves será executado. oq significa que o titulo inserido pelo usuario não foi encontrado
        cout << "Não tem nenhuma tarefa com esse título." << endl;
        cout << "------------------------" << endl;        
    }
}

void filtro(){
    string statusfiltro;
    cout << "Digite os status que você queira filtrar" << endl;
    cin >> statusfiltro;
        for(int i = 0; i < controle; i++){ ///Este é um loop for que itera sobre cada elemento em uma coleção (presumivelmente um array ou lista)
            if(status[i] == statusfiltro){ /// verifica se o "status" é igual ao "statusfiltro" 
        cout << "Tarefa" << i+1 << ":" << endl;
        cout << "id: " << id[i] << endl;
        cout << "titulo: " << titulo[i] << endl;
        cout << "Descrição: " << descricao[i]<< endl;
        cout << "Data: " << data[i] << endl;
        cout << "Status: " << status[i] << endl;
        cout << "------------------------" << endl;
            }
        }
}
void sairdoprograma(){
    cout << "Saindo do programa" << endl;
    exit(0);
}
int main() {
    int num;
do{ ///este é um loop "do-while" que continua a executar enquanto "num" for diferente de 0. E dentro dele, programa exibe um menu de opções para o usuário e lê a escolha do usuário na variável "num".
    cout << "1. Adicionar Tarefa" << endl;
    cout << "2. Visualizar Tarefas" << endl;
    cout << "3. Editar Tarefa" << endl;
    cout << "4. Remover Tarefa" << endl;
    cout << "5. Buscar Tarefa" << endl; 
    cout << "6. Filtrar Tarefas por Status" << endl;
    cout << "0. Sair" << endl;
    cout << "------------------------" << endl;
    cin >> num;
 switch (num)/// corresponde a cada  uma opção de menu
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
case 4: 
   removertarefa();
    break;
case 5:
    buscartarefas();
    break;
case 6:
    filtro();
    break;
case 7: 
    sairdoprograma();
    break;
default:
    printf("Numeros invalidos ");
    break;
 } 
}while (num != 0); ///fim do código "do-while"
}