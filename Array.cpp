#include <iostream>
#include <locale>
//this software is for listening/write string arrays;
using namespace std;

string arrayfunction(string array[])
{
	return "null";
}

void main()
{
	try
	{
		setlocale(LC_ALL, "portuguese");
		int group1[] = { 0,1,2,3 }, t, s = 0;
		std::cout << "Digite o total de arrays: " << std::endl;
		std::cin >> t;
		string array[13] = {};
		array[t];
		string option;
		std::cout << "deseja executar o programa? s/n" << std::endl;
		std::cin >> option;
		if (option == "s")
		{
			do
			{
				for (int i = 0; i < t; i++)
				{
					std::cout << "array " << (i + 1) << std::endl;
					std::cin >> array[i];
					s++;
				}
				std::cout << "Deseja continuar a leitura?";
			} while (option == "s");
		}
		else if (option == "n")
		{
			std::cout << "O total de arrays não listadas é de: " << t << std::endl;
		}
		std::cout << "O total de arrays é de: " << s << " arrays escritas." << std::endl;
	}
	catch (exception e)
	{
		std::cout << "error";
	}
}
