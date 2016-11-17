#ifndef _OBJECT_REFLECT_H_
#define _OBJECT_REFLECT_H_

/*************************************************
//  Copyright (C), 2015-2016, CS&S. Co., Ltd.
//  File name: 	    ObjectReflect.h
//  Author:			��Ρ      
//  Version: 		1.0     
//  Date: 			2016/11/17
//  Description:	������Ϊģ���࣬����ע��������Ϣ
		�������ṩ���书�ܵ������ͨ������һ��ObjectReflect���͵ľ�̬������ע��
		��ĳ�������ṩ���书�ܣ����ڸ��ඨ��������һ����̬��ObjectReflect���󣬲�����������ʼ���þ�̬���󣬴Ӷ���ɷ�������ע��
		ʾ����
		class ClassOne
		{
			static ObjectReflect<ClassOne> objectReflect;
		};
		ObjectReflect<ClassOne> ClassOne::objectReflect("ClassOne");
		�����ͨ��ObjectFactory::Instance()->CreateObject("ClassOne")���ɸ�ClassOne����
//  Others:	
//  Function List:
//  History:
//    <author>      ��Ρ 
//    <time>        2016/11/17
//    <version>     1.0 
//    <desc>        build this moudle     
*************************************************/

#include <string>
#include "ClassInfo.h"

template<typename T>
class ObjectReflect
{
public:
	ObjectReflect(const std::string& name);
	
	static void* CreateInstance();
};

template<typename T>
void* ObjectReflect<T>::CreateInstance()
{
	return new T;
}

template<typename T>
ObjectReflect<T>::ObjectReflect(const std::string& name)
{
	static ClassInfo classInfo(name, CreateInstance);
}

#endif