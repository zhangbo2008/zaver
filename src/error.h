
/*
 * Copyright (C) Zhu Jiashun
 * Copyright (C) Zaver
 */

#ifndef ERROR_H  
#define ERROR_H//这种等价于定义  ERROR_H为空字符串

//用途是 多文件编译中防止头文件被重复包含。 
/*
比如: 

<stdio.h>里面有 
#ifndef   __STDIO_H 

#define   __STDIO_H

XXXXXXXXXXXXXXXXXXXxx 

#endif 
有2个.h文件里面都一如了stdio.h这个头文件
那么第一个import 时候就把 这里面的代码 2个#对应的贴到了最后的代码中
import 第二个的时候.就不会#if了. 所以里面的XXXXXXXXXX代码不会被贴2遍. 
所以 
#ifndef   __STDIO_H 

#define   __STDIO_H
可以防止同一个.h文件被import2次. 至于后面的 __STDIO_H是随便写的,前面写__表示是一个垃圾变量,
只是一个flag作用,并且这种写法,如果引用了这个垃圾变量,他也会替换成为空字符串,不会对程序进行破坏. 
*/ 

#define ZV_OK       0
#define ZV_ERROR    -1

#endif
