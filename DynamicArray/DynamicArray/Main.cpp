#include <iostream>
int main()
{
	int i = 5;
	//int data[i]; NO ENS DEIXA FER-HO
	int* data = new int[i]; //AIX� SI
	
	//SI VOLEM EL DOBLE DE TAMANY
	int* data2 = new int[i+i]; //Reservant mem�ria on PODRIES escriure
	memcpy(data2, data, sizeof(data)); //copia de bytes

	//data2++ saltar� 4 bytes
	//data2[3] --> torna la 5a posici�
	// data2[10000] // et donaria una direcc�� 40.000 bytes endevant
	//Es pot anar d'esquerra a dreta en un array MOLT r�pid
	//
	delete[] data;


	/*
	TENIM HOLA
	TENIM MUNDO
	VOLEM HOMUNDOLA

	char data[5] = "hola";
	char* data2 = new char[2];
	data +=2;
	mencpy(data2, data, sizeof(data);

	Metodologia:
	-Creem un espai suficient per que capigui tot
	-Pasem ho
	-Pasem mundo
	-Pasem hola
	-Delete del qe sobra!
	
	HOMEWORK FOR MONDAY:
	at, capacity, size, clear, ctr(?) i empty
	*/

	//ARRAY: estructura de dades TEMPLATITZADA
	system("pause");
}