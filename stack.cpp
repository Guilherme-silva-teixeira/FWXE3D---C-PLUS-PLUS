#include <iostream>
#include <locale>
#include <stack>

using namespace std;

int main(int null)
{
	stack <string> cartas;
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	std::cout << "Total de cartas: " << cartas.size() << std::endl;
	cartas.pop();
	std::cout << "Carta do topo: " << cartas.top() << std::endl;
	cartas.pop();
	std::cout << "Total de cartas: " << cartas.size() << std::endl;
	return null;
}
