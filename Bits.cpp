#include <iostream>
#include <bitset>
using namespace std;

void Binario(int number, short binary[]){
    
    for (int i = 0; i < 8; i++)
    {
        binary[i] = number % 2;
        number /= 2;
    }

}

void Draw(short binary[]){

    for (int i = 7; i >= 0; i--)
    {
        cout << binary[i];  
    }

}

int main(){

    int numero;
    short binario[8];
    cout << "Ingrese un numero: ";
    cin >> numero;
    Binario(numero, binario);
    cout << "El numero en binario es: ";
    Draw(binario);
    cout << endl;

    cout << "================================================================================" << endl;

    bitset<8> bit1(30);
    cout << "Primer bit: " << bit1 << endl;
    cout << "Bit complemento a 2: " << ~bit1 << endl;

    cout << "================================================================================" << endl;

    int numero1 = 13;
    int numero2 = 15;
    short binario1[8];
    short binario2[8];
    short binario3[8];
    Binario(numero1, binario1);
    Binario(numero2, binario2);
    for (int i = 0; i < 8; i++)
    {
        binario3[i] = binario1[i] + binario2[i];
    }
    cout << "Suma de numeros binarios: " << binario3 << endl;
    
    cout << "==================================================================================" << endl;

    bitset<8> bit2(12);
    cout << "Bit: " << bit2 << endl;
    cout << "Resta de bit complemento a 2: " << ~(~bit2) << endl;

    system("pause");
    return 0;

}