#include "Number.h"

template <class T>
Number<T>::Number(int a)
{
	this->data = a;
}
//Number::~Number(void)
//{
//}
template <class T>
Number<T> Number<T>::operator =(T a)
{
	this->data = a;
	return * this;
}
template <class T>
Number<T> Number<T>::operator + (Number<T> abc)
{
	this->data = this->data + abc.data;
	return *this;
}
template <class T>
Number<T> Number<T>::operator - (Number<T> abc)
{
	this->data = this->data - abc.data;
	return *this;
}
template <class T>
Number<T> Number<T>::operator * (Number<T> abc)
{
	this->data = this->data * abc.data;
	return *this;
}
template <class T>
Number<T> Number<T>::operator / (Number<T> abc)
{
	this->data = this->data / abc.data;
	return *this;
}
template <class T>
Number<T> Number<T>::operator += (Number<T> abc)
{
	this->data = this->data + abc.data;
	return *this;
}
template <class T>
bool Number<T>::operator ==(T abc)
{
	if(this->data == abc.data)
		return true;
	return false;
}
template <class T>
ostream& operator<<(ostream& os, const Number<T>& abc)
{
	os<<abc.data<<endl;
	return os;
}
template <class T>
istream& operator>>(istream& is, const Number<T>& abc)
{
	is>>abc.data;
	return is;
}

