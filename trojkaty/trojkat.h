#pragma once
#include <string>
#include <fstream>
using namespace std;

class trojkat
{
public:
	int a, b, c;
	string nazwa;

private:
	friend istream& operator >> (istream& strumienwe, trojkat& trojkt);

};

