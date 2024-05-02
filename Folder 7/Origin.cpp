#include <iostream>
#include <locale>

using namespace std;

//classe
class plane
{
	public:
		//elementos publicos 
		//acessiveis dentro daquela classe e aos objetos
		int speed = 0;
		string model = "Cessna 172";
	private:
		//elementos privados são acessiveis a apenas aquela classe
};

int main()
{
	//vai definir a linguagem do arquivo
	setlocale(LC_ALL, "portuguese");
	//os objetos são instâncias das classes como por exemplo o ponteiro abaixo
	plane *airplane = new plane(); //objeto
	//os objetos devem ser declarados como ponteiro
	std::cout << airplane->speed << std::endl;
	std::cout << airplane->model << std::endl;
	//ele vai printar a variáel que está dentro daquela classe porém inicialmente como zero
	std::cout << "atualize a velocidade do avião" << std::endl;
	std::cin >> airplane->speed;
	std::cout << "Á velocidade atual é de: " << airplane->speed << " nós." << std::endl;
	return 0;
}
