#include <iostream>

using namespace std;

string meses(int m);
string calculo(int dia, string mes);
int verificarMes(string mes);
int verificaDia(int dia, string mes);

int main(){

    int dia;
    string mes;

    cout << "Olá, gostaria de saber qual é o seu signo?\n";
    cout << "Digite o dia em que nasceu: ";
    cin >> dia;
    cout << "Digite o nome do mes em que nasceu: ";
    cin >> mes;

    // Se estiver verificarMes e VerificarDia receber os dados corretos
    // irá mandar os dados para o calculo()
    if( (verificarMes(mes)) && (verificaDia(dia, mes)) ){
        cout << "\nVocê nasceu no dia " << dia << " do mês de " << mes << endl;
        cout << "Você é do signo de: \n";
        cout << "\n\t>>>: " << calculo(dia, mes) << " :<<<\n\n";
    }else{
        cout << "\nSaindo do programa...\n";
    }

    return 0;
  
}

string meses(int m) {
    string mes[12] = { "março", "abril", "maio",
                        "junho", "julho", "agosto",
                        "setembro", "outubro", "novembro",
                        "dezembro", "janeiro", "fevereiro" };
    return mes[m];

}

string calculo(int dia, string mes) {

    // Recebe os dados já verificados
    if( (dia>=20) && (dia<=31) && (mes==meses(0)) ){
        return "Aries";
    }else if( (dia>=1) && (dia<=18) && (mes==meses(1)) ){
        return "Aries";    
    }else if( (dia>=19) && (dia<=30) && (mes==meses(1)) ){
        return "Touro";
    }else if( (dia>=1) && (dia<=19) && (mes==meses(2)) ){
        return "Touro";
    }else if( (dia>=20) && (dia<=31) && (mes==meses(2)) ){
        return "Gemeos";
    }else if( (dia>=1) && (dia<=20) && (mes==meses(3)) ){
        return "Gemeos";
    }else if( (dia>=21) && (dia<=30) && (mes==meses(3)) ){
        return "Cancer";
    }else if( (dia>=1) && (dia<=21) && (mes==meses(4)) ){
        return "Cancer";
    }else if( (dia>=22) && (dia<=31) && (mes==meses(4)) ){
        return "Leão";
    }else if( (dia>=1) && (dia<=22) && (mes==meses(5)) ){
        return "Leão";
    }else if( (dia>=23) && (dia<=31) && (mes==meses(5)) ){
        return "Virgem";
    }else if( (dia>=1) && (dia<=21) && (mes==meses(6)) ){
        return "Virgem";
    }else if( (dia>=22) && (dia<=30) && (mes==meses(6)) ){
        return "Libra";
    }else if( (dia>=1) && (dia<=22) && (mes==meses(7)) ){
        return "Libra";
    }else if( (dia>=23) && (dia<=31) && (mes==meses(7)) ){
        return "Escorpião";
    }else if( (dia>=1) && (dia<=21) && (mes==meses(8)) ){
        return "Escorpião";
    }else if( (dia>=22) && (dia<=30) && (mes==meses(8)) ){
        return "Sargitario";
    }else if( (dia>=1) && (dia<=21) && (mes==meses(9)) ){
        return "Sargitario";
    }else if( (dia>=21) && (dia<=31) && (mes==meses(9)) ){
        return "Capricornio";
    }else if( (dia>=1) && (dia<=19) && (mes==meses(10)) ){
        return "Capricornio";
    }else if( (dia>=20) && (dia<=31) && (mes==meses(10)) ){
        return "Aquario";
    }else if( (dia>=1) && (dia<=18) && (mes==meses(11)) ){
        return "Aquario";
    }else if( (dia>=19) && (dia<=29) && (mes==meses(11)) ){
        return "Peixes";
    }else if( (dia>=1) && (dia<=19) && (mes==meses(0)) ){
        return "Peixes";
    }else{
        return "Digite um valor valido";
    }
  
}

int verificarMes(string mes){

    // Verifica se o mês digitado está correto
    for(int i=0; i<12; i++){
        if(mes==meses(i)){
            return 1;
        }
    }
    // Se o mês digitado não estiver correto
    // Será gerado uma lista dos mês válidos e o programa irá parar
    cout << "\nLista de meses validos abaixo\n\n";
    for(int i=0; i<12; i++){
       cout << meses(i) << endl;
    }
    return 0;
}

int verificaDia(int dia, string mes){

    string mesTrinta[4] = { meses(1), meses(3), meses(6), meses(8) };
    // verifica se o dia digitado está entre 1 e 31
    if( (dia>0) && (dia<=31) ){

        // verifica os mês de 30 dias
        for(int i=0; i<4; i++){
            if( (mes==meses(i)) && (dia > 30) ){
                cout << "Os meses ";
                for(int i=0; i<4; i++){
                    cout << mesTrinta[i] << " ";
                }
                cout << "são de 30 dias.\n";
                return 0;
            }
        }
        // Verifica mês de fevereiro
        if( (mes == meses(11)) && (dia > 29) ){
            cout << "Dias válidos para o mês de " << meses(11) << " é de 1 a 29";
            return 0;
        }

    }else{
        cout << "\nOs dias válidos, do 1 ao 31\n";
        return 0;
    }
    return 1;
}