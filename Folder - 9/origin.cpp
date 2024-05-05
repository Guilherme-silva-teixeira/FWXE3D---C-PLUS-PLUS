#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

#define pi 3.14;

class classe01
{
	public:
	void testeif_else01()
	{
		int num1 = 13, num2 = 51;

		if (num1 < num2)
		{
			std::cout << "número 02 é maior que 01" << std::endl;
		}
		else
		{
			std::cout << "número 01 é maior que 02" << std::endl;
		}
	}
	private:
};

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	int n0 = 0, n1 = 3;
	classe01* classe = new classe01();
	classe->testeif_else01();
inicio:
	int v0, v1, res;
	std::cout << "Digite uma nota: " << std::endl;
	std::cin >> v0;
	std::cout << "Digite a segunda nota: " << std::endl;
	std::cin >> v1;
	res = ((v0 + v1) / 2);
	std::cout << "a média das notas é de: " << res << "." << std::endl;
	std::cout << "Digite uma opção se você quer continuar [s/n]: " << std::endl;
	string op;
	std::cin >> op;
	if (op == "s" or op == "S")
	{
		goto inicio;
	}
	return 0;
}
