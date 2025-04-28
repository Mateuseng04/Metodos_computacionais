
#include <iostream>
#include <cmath>

using namespace std;

float PI = 3.141592;
int raio;
float area, perimetro;

int main() {
    // Obter o valor do raio
    cout << "Informe o valor do raio: ";
    cin >> raio;
    // Calcular a area e o perimetro
    area = PI * pow(raio, 2);
    perimetro = 2 * PI * raio;
    // Exibir os resultados
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    // Finalizar o programa
    cout << "Pressione qualquer tecla para finalizar o programa." << endl;
    cin.ignore();
    cin.get();
return 0;
}