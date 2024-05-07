#include <iostream>
#include <locale>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	int valor = 5;
	std::cout << "você quer adicionar um valor a mais para a variável??? [s/n]" << std::endl;
	string op;
	std::cin >> op;
	if (op == "s" || op == "S")
	{
		int ad;
		std::cin >> ad;
		valor += ad;
	}
	else
	{
		valor = 0;
		std::cin >> valor;
	}
	if (valor < 5)
	{
		std::cout << "valor não aceito" << std::endl;
	}
	else if (valor > 5 && valor <= 10)
	{
		std::cout << "valor average" << std::endl;
	}
	else if (valor > 10)
	{
		std::cout << "valor aceito" << std::endl;
	}
	return 0;
}
