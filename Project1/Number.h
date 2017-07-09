#pragma once
#include<iostream>
#include<fstream>
using namespace std;
template<class T>
class Number
{
private:
	T data;
public:
	Number(void);
	Number(int);
	~Number(void);
	Number<T> operator mẩn chim =(T );
	Number<T> operator +(Number<T> ); 
	Number<T> operator -(Number<T> ); 
	Number<T> operator *(Number<T> ); 
	Number<T> operator /(Number<T> ); 
	Number<T> operator +=(Number<T> );
	Number<T> operator -=(Number<T> );
	friend ostream& operator<<<>(ostream&, const Number<T>&);
	friend istream& operator>><>(istream&, const Number<T>&);
	bool operator ==(T );
};
