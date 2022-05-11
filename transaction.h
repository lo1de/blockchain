#pragma once

#include<string>
#include"sha256.h"

using namespace std;

class Transaction
{
public:
	Transaction();

	Transaction CreateTransaction(string data, int nonce);
	string ComputeTxHash(string tx);

	void printTx();

private:
	int nonce;
	string transactionID;
	string data;
};
