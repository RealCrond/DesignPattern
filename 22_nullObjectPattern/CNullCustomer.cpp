
#include "CNullCustomer.h"

CNullCustomer::CNullCustomer()
{

}

CNullCustomer::~CNullCustomer()
{

}

bool CNullCustomer::IsNull()
{
	return true;
}

char* CNullCustomer::GetName()
{
	return "Not Available in Customer Database";
}