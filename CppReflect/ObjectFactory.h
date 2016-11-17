#ifndef _OBJECT_FACTORY_H_
#define _OBJECT_FACTORY_H_

/*************************************************
//  Copyright (C), 2015-2016, CS&S. Co., Ltd.
//  File name: 	    ObjectFactory.h
//  Author:			��Ρ      
//  Version: 		1.0     
//  Date: 			2016/11/17
//  Description:	���乤�������ڸ����ṩ��������Ϣ���ɸ����͵Ķ���
		������Ϊ����ģʽ���洢�������ṩ���书�ܵ�������Ϣ
//  Others:
//  Function List:
//  History:
//    <author>      ��Ρ 
//    <time>        2016/11/17
//    <version>     1.0 
//    <desc>        build this moudle     
*************************************************/

#include <map>

class ClassInfo;

class ObjectFactory
{

public:
	static ObjectFactory* Instance();	/*��ȡΨһ����*/

	void* CreateObject(const std::string& className);	/*��������������Ӧ����ָ��*/
	bool Register(ClassInfo* classInfo);	/*ע��������Ϣ*/

private:
	/*����ģʽ*/
	ObjectFactory();
	ObjectFactory(const ObjectFactory&) = delete;
	ObjectFactory& operator=(const ObjectFactory&) = delete;
	~ObjectFactory();

private:
	std::map<std::string, ClassInfo*> m_classInfoMap;	/*������Ϣ����*/
};

#endif