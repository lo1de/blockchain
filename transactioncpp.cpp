#include"transaction.h"
#include<iostream>
#include<format>

//transaction(tx) in my blockchain consist of:
//1. text length
//2. text (in Bitcoin, the number of coins is indicated, in my case, just text of any length)
//3. nonce
Transaction Transaction::CreateTransaction(string data, int nonce)
{
	string tx = to_string(data.length()) + data + to_string(nonce);

	this->transactionID = ComputeTxHash(tx);
	this->data = data;
	this->nonce = nonce;

	return Transaction();
}

string Transaction::ComputeTxHash(string tx)
{
	SHA256 trID;
	trID.update(tx);
	uint8_t* digest = trID.digest();

	return SHA256::toString(digest);
}

void Transaction::printTx()
{
	cout << "TxID: " <<  this->transactionID << endl;
	cout << "Data: " <<  this->data << endl;
	cout << "Nonce: " << this->nonce << endl;
}

Transaction::Transaction()
{
}

