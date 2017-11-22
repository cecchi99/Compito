#include <iostream>
using namespace std;

/*
<<<<<<< HEAD
@brief Programma che incrementa una variabile somma e la stampa
@fn void main()
@warning Sono sul branch master
=======
@brief Programma che incrementa una variabile conta e la stampa
@fn void main()
@author Andrea Cecchi 5BIA
@date 22/11/2017
@file Origine.cpp
@warning Sono sul branch FIX_BUG
>>>>>>> FIX_BUG
*/
void main()
{
	int conta = 0;//variabile conta

<<<<<<< HEAD
	//ciclo di incremento della variabile conta
	do {
=======
	do 
	{
>>>>>>> FIX_BUG
		conta++;
		cout << "Conta: " << conta << endl;
	} while (conta < 10);

	system("pause");
}