#include "trojkat.h"

istream & operator >> (istream & strumienwe, trojkat & trojkt)
{

	strumienwe >> trojkt.nazwa;
	strumienwe >> trojkt.a;
	strumienwe >> trojkt.b;
	strumienwe >> trojkt.c;
	return strumienwe;
}