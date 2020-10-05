//Alunos: Itamar Netto e Marcus Vinícius

#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	int op, num, resultado, i, cont, x;
	(cont = 0);
	setlocale (LC_ALL, "portuguese");
	cout << "Escolha uma opção:" << endl; 
	cout << "Observação: por favor, use apenas números inteiros para cálculos." << endl << endl;
	cout << "1 - Conversão de decimal para binário" << endl;
	cout << "2 - Conversão de binário para decimal" << endl;
	cin >> op;
	switch (op)
	{
		case 1 : cout << "Digite o número decimal que deseja converter para binário: ";
		cin >> num;
		while (num > 0)
		{
			(num = num / 2);
			(resultado = num % 2);
			cout << resultado;
		}
		cout << endl << endl;
		cout << "Nota: o resultado apresenta leves erros. Deve-se considerar que o último dígito pode estar errado, deve ser o primeiro dígito, e que o resultado também deve ser invertido da direita para a esquerda.";
		break;
	    case 2 : cout << "Para realizar a conversão binário para decimal, deve-se primeiramente destacar quantos dígitos possui o número binário que será convertido para número decimal: ";
	    cin >> i;
	    cout << "Agora coloque corretamente os valores POR UNIDADE, do primeiro para o último item (exemplo: se o valor desejado é 1101, deve-se digitar 1, enter, 1, enter, 0, enter, 1, enter):"<< endl;
	    for (int i; i >= 0; i = i - 1 );
		{
			cout << "Valor: ";
			cin >> num;
			(cont = cont + num);
			(resultado = cont * (2 ^ i));
			cout << resultado;
		}
		
	    break;
	    default : cout << "Opção inválida. Favor reiniciar o programa.";
	}
	return 0;
}