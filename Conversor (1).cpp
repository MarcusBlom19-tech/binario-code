//Alunos: Itamar Netto e Marcus Vin�cius

#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	int op, num, resultado, i, cont, x;
	(cont = 0);
	setlocale (LC_ALL, "portuguese");
	cout << "Escolha uma op��o:" << endl; 
	cout << "Observa��o: por favor, use apenas n�meros inteiros para c�lculos." << endl << endl;
	cout << "1 - Convers�o de decimal para bin�rio" << endl;
	cout << "2 - Convers�o de bin�rio para decimal" << endl;
	cin >> op;
	switch (op)
	{
		case 1 : cout << "Digite o n�mero decimal que deseja converter para bin�rio: ";
		cin >> num;
		while (num > 0)
		{
			(num = num / 2);
			(resultado = num % 2);
			cout << resultado;
		}
		cout << endl << endl;
		cout << "Nota: o resultado apresenta leves erros. Deve-se considerar que o �ltimo d�gito pode estar errado, deve ser o primeiro d�gito, e que o resultado tamb�m deve ser invertido da direita para a esquerda.";
		break;
	    case 2 : cout << "Para realizar a convers�o bin�rio para decimal, deve-se primeiramente destacar quantos d�gitos possui o n�mero bin�rio que ser� convertido para n�mero decimal: ";
	    cin >> i;
	    cout << "Agora coloque corretamente os valores POR UNIDADE, do primeiro para o �ltimo item (exemplo: se o valor desejado � 1101, deve-se digitar 1, enter, 1, enter, 0, enter, 1, enter):"<< endl;
	    for (int i; i >= 0; i = i - 1 );
		{
			cout << "Valor: ";
			cin >> num;
			(cont = cont + num);
			(resultado = cont * (2 ^ i));
			cout << resultado;
		}
		
	    break;
	    default : cout << "Op��o inv�lida. Favor reiniciar o programa.";
	}
	return 0;
}