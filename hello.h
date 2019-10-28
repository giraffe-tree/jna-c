
#include <stdio.h>
#include <stdint.h>


struct User
{
	char* name;
	int height;
	double weight;
};


struct ArrInfo
{
	uint16_t* vals;
	int len;
};


void printUser(User user);

void printUserRef(User& user);

int max(int num1, int num2);

void testArray(uint16_t* vals, int len);

void testStruct(ArrInfo arrInfo);

void getBool(bool x);



