#include <iostream>
using namespace std;

/*
@brief Programma che incrementa una variabile conta e la stampa
@fn void main()
@author Andrea Cecchi 5BIA
@date 22/11/2017
@file Origine.cpp
@warning Sono sul branch FIX_BUG
*/
void main()
{
	int conta = 0;

	do 
	{
		conta++;
		cout << "Conta: " << conta << endl;
	} while (conta < 10);

	system("pause");
}