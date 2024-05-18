#include <stdio.h)

using namespace std;

int main() {
    int sexo;
    double altura, peso_atual, peso_ideal, margem_erro, peso_ideal_min, peso_ideal_max;

    cout << "Digite o sexo da pessoa (1 para masculino, 2 para feminino): ";
    cin >> sexo;
    cout << "Digite a altura da pessoa em metros: ";
    cin >> altura;
    cout << "Digite o peso atual da pessoa em kg: ";
    cin >> peso_atual;

    if (sexo == 1) {
        peso_ideal = (72.7 * altura) - 62;
    } else {
        peso_ideal = (62.1 * altura) - 48.7;
    }

    margem_erro = peso_ideal * 0.05;
    peso_ideal_min = peso_ideal - margem_erro;
    peso_ideal_max = peso_ideal + margem_erro;

    cout << "O peso ideal para a pessoa é de " << peso_ideal << " kg" << endl;

    if (peso_atual >= peso_ideal_min && peso_atual <= peso_ideal_max) {
        cout << "A pessoa está dentro da margem de peso ideal" << endl;
    } else if (peso_atual < peso_ideal_min) {
        cout << "A pessoa está abaixo do peso ideal" << endl;
    } else {
        cout << "A pessoa está acima do peso ideal" << endl;
    }

    return 0;
}
