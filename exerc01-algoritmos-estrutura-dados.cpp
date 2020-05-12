#include <math.h>
#include <iostream>
#include <string.h>
using namespace std; // necessário para uso do cin e cout

int main(){

    float salario, aumento, novosalario, diferencas;
    char cargo[15];

    cout << "SALARIO atual do funcionario: R$ ";
    cin >> salario;
    cout << "CARGO atual do funcionario: R$ ";
    cin >> cargo;

    if (strcmp(cargo,"GERENTE") == 0){
        aumento = 0.1 * salario;
        novosalario = salario + aumento;
        diferencas = novosalario - salario;
        cout << "ANTIGO SALARIO = R$ " << salario;
        cout << "\nNOVO SALARIO = R$ " << novosalario;
        cout << "\nDIFERENCA ENTRE SALARIOS = R$ " << diferencas;
    }
    else if (strcmp(cargo,"ENGENHEIRO") == 0){
        aumento = 0.2 * salario;
        novosalario = salario + aumento;
        diferencas = novosalario - salario;
        cout << "ANTIGO SALARIO = R$ " << salario;
        cout << "\nNOVO SALARIO = R$ " << novosalario;
        cout << "\nDIFERENCA ENTRE SALARIOS = R$ " << diferencas;
    }
    else if (strcmp(cargo,"TECNICO") == 0){
        aumento = 0.3 * salario;
        novosalario = salario + aumento;
        diferencas = novosalario - salario;
        cout << "ANTIGO SALARIO = R$ " << salario;
        cout << "\nNOVO SALARIO = R$ " << novosalario;
        cout << "\nDIFERENCA ENTRE SALARIOS = R$ " << diferencas;
    }
    else{
        aumento = 0.4 * salario;
        novosalario = salario + aumento;
        diferencas = novosalario - salario;
        cout << "ANTIGO SALARIO = R$ " << salario;
        cout << "\nNOVO SALARIO = R$ " << novosalario;
        cout << "\nDIFERENCA ENTRE SALARIOS = R$" << diferencas;
    }
    return 0;
}