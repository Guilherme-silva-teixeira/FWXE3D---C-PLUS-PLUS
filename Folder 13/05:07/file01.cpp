#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n, n1, n2;
	string str;
	std::cout << "========================================" << std::endl;
	std::cout << "| Insira a primeira nota:              |" << std::endl;
	std::cin >> n1;
	std::cout << "| Insira a segunda nota:               |" << std::endl;
	std::cin >> n2;
	n = (n1 + n2);
	(n >= 60) ? str = " aprovado" : str = " reprovado";
	std::cout << "| A nota é de: " << n << str << "            |" << std::endl;
	std::cout << "========================================" << std::endl;
	return 0;
}
