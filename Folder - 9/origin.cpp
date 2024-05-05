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
	int n0 = 0, n1 = 3;
	classe01* classe = new classe01();
	classe->testeif_else01();
	return 0;
}
