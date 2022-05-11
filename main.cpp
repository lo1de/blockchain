#include<iostream>
#include"transaction.h"

using namespace std;

int main()
{
	Transaction tx;

	tx.CreateTransaction("text written by doctor", 0);

	tx.printTx();

	return 0;
}