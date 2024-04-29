#include <iostream>
#include <locale>
#include <vector>

using namespace std;

void preencherArray(vector<int>& array)
{
	try
	{
		int tamanho;
		std::cout << "Digite o tamanho da array: ";
		cin >> tamanho;
		cout << "Digite os elementos da array:\n";
		for (int i = 0; i < tamanho; i++)
		{
			int elemento;
			std::cin >> elemento;
			array.push_back(elemento);
		}
	}
	catch (exception e)
	{
		std::cout << "erro na execução do código";
	}
}

void imprimirArray(const vector<int>& array)
{
	try
	{
		std::cout << "Array: ";
		for (int elemento : array)
		{
			std::cout << elemento << " " << std::endl;
		}
		std::cout << endl;
	}
	catch (exception e)
	{
		std::cout << "Erro na execução do código" << std::endl;
	}
}

int caucularSoma(const vector<int>& array)
{
	try
	{
		int soma = 0;
		for (int elemento : array)
		{
			soma += elemento;
		}
		return soma;
	}
	catch (exception e)
	{
		std::cout << "erro na execução do código" << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	try
	{
		setlocale(LC_ALL, "portuguese");
		vector<vector<int>> arrays;
		char opcao;
		do
		{
			std::cout << "Escolha uma opção\n" << std::endl;
			std::cout << "1. Adicionar uma nova array\n" << std::endl;
			std::cout << "2. Imprimir todas as arrays\n" << std::endl;
			std::cout << "3. Caucular a soma de todos os elementos de uma array\n" << std::endl;
			std::cout << "4. Sair\n" << std::endl;
			std::cout << "Opção: " << std::endl;
			std::cin >> opcao;

			switch (opcao)
			{
			case '1':
				{
					vector<int> novaArray;
					preencherArray(novaArray);
					arrays.push_back(novaArray);
					break;
				}
			case '2':
				{
					if (arrays.empty())
					{
					std::cout << "Nenhuma array foi adicionada ainda.\n" << std::endl;
					}
					else
					{
						for (const auto& array : arrays)
						{
							imprimirArray(array);
						}
					}
					break;
				}
			case '3':
				{
				if (arrays.empty())
					{
					std::cout << "Nenhuma array foi adicionada ainda. \n" << std::endl;
					}
				else
				{
					int indice;
					std::cout << "Digite o indice da array para caucular a soma dos elementos: " << std::endl;
					std::cin >> indice;
					if (indice >= 0 && indice < arrays.size())
					{
						int soma = caucularSoma(arrays[indice]);
						std::cout << "A soma dos elementos da array " << indice << " é: " << soma << std::endl;
					}
					else
					{
						std::cout << "Índice inválido. \n" << std::endl;
					}
				}
				break;
				}
			case '4':
				std::cout << "Saindo do programa. \n" << std::endl;
				break;
			default:
				std::cout << "opção inválida. \n" << std::endl;
			}
		} while (opcao != '4');
	}
	catch (exception e)
	{
		std::cout << "Eroo na execução do código" << std::endl;
	}
}
