#include <stdio.h>
#include "ObjectFactory.h"
#include <assert.h>


int main()
{
	ObjectFactory::Instance()->CreateObject("MyObject1");
	ObjectFactory::Instance()->CreateObject("MyObject2");

	assert(ObjectFactory::Instance()->CreateObject("MyObject3") == nullptr);

	getchar();
	return 0;
}