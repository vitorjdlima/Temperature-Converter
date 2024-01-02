#include <iostream>
#include <locale>

using namespace std;

double temperaturaFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double temperaturaKelvin(double celsius) {
    return celsius + 273.15;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int menu;
    double celsius;

    while (true) {

        cout << "\n>> Bem-vindo ao conversor de temperatura <<" << endl;
        cout << string(42, '-') << endl; 
        cout << "\nDigite o valor da temperatura em graus Celsius: ";
        cin >> celsius;

        cout << "\nEscolha a conversão desejada:" << endl
             << "1 - Celsius para Fahrenheit" << endl
             << "2 - Celsius para Kelvin" << endl
             << "3 - Ambas as opções" << endl
             << "4 - Sair\n" << endl;

        cin >> menu;

        switch (menu) {
            case 1:
                cout << "\nTemperatura em Fahrenheit: " << temperaturaFahrenheit(celsius) << " °F" << endl;
                break;
            case 2:
                cout << "\nTemperatura em Kelvin: " << temperaturaKelvin(celsius) << " K" << endl;
                break;
            case 3:
                cout << "\nTemperatura em Fahrenheit: " << temperaturaFahrenheit(celsius) << " °F" << endl
                     << "Temperatura em Kelvin: " << temperaturaKelvin(celsius) << " K" << endl;
                break;
            case 4:
                cout << "\nPrograma Encerrado.\n";
                return 0;  
            default:
                cout << "\nEscolha inválida. Tente novamente." << endl;
        }
    }
    return 0;
}
