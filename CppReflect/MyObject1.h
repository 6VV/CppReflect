#ifndef _MY_OBJECT_1_H_
#define _MY_OBJECT_1_H_

/*************************************************
//  Copyright (C), 2015-2016, CS&S. Co., Ltd.
//  File name: 	    MyObject2.h
//  Author:			��Ρ
//  Version: 		1.0
//  Date: 			2016/11/17
//  Description:	ʾ���������ڲ����ܹ���ȷ���ɶ���
//  Others:
//  Function List:
//  History:
//    <author>      ��Ρ
//    <time>        2016/11/17
//    <version>     1.0
//    <desc>        build this moudle
*************************************************/

#include "ObjectReflect.h"

class MyObject1
{
public:
	MyObject1();

private:
	static ObjectReflect<MyObject1> m_objectReflect;
};

#endif