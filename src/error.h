
/*
 * Copyright (C) Zhu Jiashun
 * Copyright (C) Zaver
 */

#ifndef ERROR_H  
#define ERROR_H//���ֵȼ��ڶ���  ERROR_HΪ���ַ���

//��;�� ���ļ������з�ֹͷ�ļ����ظ������� 
/*
����: 

<stdio.h>������ 
#ifndef   __STDIO_H 

#define   __STDIO_H

XXXXXXXXXXXXXXXXXXXxx 

#endif 
��2��.h�ļ����涼һ����stdio.h���ͷ�ļ�
��ô��һ��import ʱ��Ͱ� ������Ĵ��� 2��#��Ӧ�����������Ĵ�����
import �ڶ�����ʱ��.�Ͳ���#if��. ���������XXXXXXXXXX���벻�ᱻ��2��. 
���� 
#ifndef   __STDIO_H 

#define   __STDIO_H
���Է�ֹͬһ��.h�ļ���import2��. ���ں���� __STDIO_H�����д��,ǰ��д__��ʾ��һ����������,
ֻ��һ��flag����,��������д��,��������������������,��Ҳ���滻��Ϊ���ַ���,����Գ�������ƻ�. 
*/ 

#define ZV_OK       0
#define ZV_ERROR    -1

#endif
