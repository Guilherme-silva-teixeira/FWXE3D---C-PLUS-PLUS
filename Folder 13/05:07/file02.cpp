#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int val;
	std::cout << "Selecione um transporte:\n";
	std::cout << "[1] carro/moto, [2] avião , [3] helicoptero\n";
	std::cin >> val;
	switch (val)
	{
	case 1:
		std::cout << "Transporte terrestre\n";
		switch (val)
		{
		case 1:
			std::cout << "Carro/moto selecionado" << std::endl;
			break;
		}
	case 2:
		std::cout << "transporte aéreo" << std::endl;
		switch (val)
		{
		case 2:
			std::cout << "avião selecionado" << std::endl;
			break;
		}
	case 3:
		std::cout << "transporte aéreo";
		switch (val)
		{
		case 3:
			std::cout << "Helicóptero selecionado";
			break;
		}
	default:
		std::cout << "opção inválida";
		break;
	}
	std::cout << "Fim do programa!";
	return 0;
}
