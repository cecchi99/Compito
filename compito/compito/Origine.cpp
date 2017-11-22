#include <iostream>
using namespace std;

/*
@brief Programma che incrementa una variabile somma e la stampa
@fn void main()
@warning Sono sul branch master
*/
void main()
{
	int conta = 0;//variabile conta

	//ciclo di incremento della variabile conta
	do {
		conta++;
		cout << "Conta: " << conta << endl;
	} while (conta < 10);

	system("pause");
}