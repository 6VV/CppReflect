#ifndef _CLASS_INFO_H_
#define _CLASS_INFO_H_

/*************************************************
//  Copyright (C), 2015-2016, CS&S. Co., Ltd.
//  File name: 	    ClassInfo.h
//  Author:			��Ρ      
//  Version: 		1.0     
//  Date: 			2016/11/17
//  Description:	��¼��������Ϣ�������������������������ĺ���ָ��
		����ClassInfo����ʱ�����Զ����˶���ע���ڷ������ͼ����У�ʹ��֮���ܹ������ṩ��������Ϣ������Ӧ����
		������Ҫ���书�ܵ���ClassNeedReflect�������һ��ClassInfo��̬�������ڽ�ClassNeedReflectע�ᵽ�������ͼ����У�
		���ɵĶ���ָ��Ϊvoid*���ͣ��ɸ�����Ҫ�Զ������ͣ���ʹ������Ҫ���书�ܵ���ClassNeedReflect�̳��Ը��Զ�������
//  Others:
//  Function List:
//  History:
//    <author>      ��Ρ 
//    <time>        2016/11/17
//    <version>     1.0 
//    <desc>        build this moudle     
*************************************************/

#include <string>

using FunctionCreateObject = void*(*)();

class ClassInfo
{
public:
	ClassInfo(const std::string type, FunctionCreateObject createObject);
	
	std::string type;	/*������*/
	FunctionCreateObject createObject;	/*����ָ�룬����������Ӧ���͵Ķ���*/
};

#endif