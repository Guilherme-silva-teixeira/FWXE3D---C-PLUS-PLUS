#include <iostream>
#include <locale>

using namespace std;

#define pi 3.14;

class origin
{
	public:

		int totalRepos;
		int content;
		int numberForConverter;
		string Array[];

		string arrayListener(int x , string content[])
		{
			string pointer;
			content[x];
			std::cout << "liste as arrays aqui:" << std::endl;
			for (int y = 1; y < x; y++)
			{
				std::cin >> pointer;
				content[x] = pointer;
				return content[x];
			}
		}

	private:
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n = 0;
	string Arr[1][1];
	int x = 1, y = 1;
	Arr[x][y];
	string content;
	origin *org = new origin();
	std::cout << "Digite a opção necessária" << std::endl;
	std::cin >> n;
	switch (n)
	{
		case 1:
			{
				std::cout << "Insira os valores de x:" << std::endl;
				std::cin >> x;
				std::cout << "Insira os valores de y:" << std::endl;
				std::cin >> y;
				std::cout << "Os valores totais bidiensionais do array é de " << (x * y) << std::endl;
				Arr[x][y];
				for (int f = 0; f < x; f++)
				{
					for (int g = 0; g < y; g++)
					{
						std::cin >> content;
						Arr[x][y] = content;
						std::cout << "Os valores de x: '" << x << "' e os valores de y: '" << y << "' foram amarzenados com sucesso!" << std::endl;
					}
				}
			}
	}

	return 0;
}
