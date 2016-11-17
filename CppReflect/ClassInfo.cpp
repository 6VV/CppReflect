#include "ClassInfo.h"
#include "ObjectFactory.h"



ClassInfo::ClassInfo(const std::string type, FunctionCreateObject createObject)
	:type(type)
	,createObject(createObject)
{
	/*����������Ϣע���ڷ��乤����*/
	ObjectFactory::Instance()->Register(this);
}
