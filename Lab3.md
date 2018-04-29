#南昌大学实验报告
---


姓名：刘谕霖
	
学号：6103115085

邮箱地址：854558883@qq.com

专业班级：计科153班

实验日期：2018.4.16
    
课程名称： C Programming in Linux
 
##实验项目名称
C Programming in Linux

##实验目的
the C programming language
the development toolchain (pre-processor, compiler, assembler, linker)
the automating the compilation process using Makefiles

##实验基础
c/c++
gcc/g++
a poem

##实验步骤
### 1.Use C and Makefile for Coding
1.Compile and run a C problem, on slide 3
2.Separate the C code on slide 3 into two files: source.c and main.c
3.Try write a makefile to repeat the compilation process (based on the template in the course website), with different flags (-g, -ggdb, Wall, -O, etc.)


### 2.Tasks
1.You are asked to write a C code to check whether an input string is a file, or directory, or else.
2.Print the mode of the file, if it is a file. If you are the owner of the file, chmod it into 777, using C code.
3.If this is not a file or a folder/directory,provide a mechanism to handle the
error.
4.Write a makefile for the above three codes and make a successful compilation.

### 3.GDB
1.A little bit tryout of using GDB.
2.Make sure you compiled to previous code using debug mode and allow GDB to provide user-friendly information.
3.Set a break to check the value of time variable change in the first and your input argument in the second program.
4.Check where is your code at and print the current stack information of the target code.

##实验数据或结果
### M1
1.Compile and run the Linux poem
![poem.png](https://upload-images.jianshu.io/upload_images/11189792-1c701736053b9e09.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![g++.png](https://upload-images.jianshu.io/upload_images/11189792-999601407e0f9c46.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

Separate the poem into two files: source.c and main.c
![threePart.png](https://upload-images.jianshu.io/upload_images/11189792-b340d488ff623a68.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

Write a makefile to repeat the compilation process

![makefile.png](https://upload-images.jianshu.io/upload_images/11189792-cfa6c308e8c5dca2.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

![make.png](https://upload-images.jianshu.io/upload_images/11189792-393a582e9aded3a3.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
### M2

### M3
Compile the previous code with debug mode

>**在编译的时候要加上选项“-g”。这样编译出的可执行代码才包含调试信息，否则之后gdb无法载入该可执行文件。**

> gcc poem.c -o poem -g
> gdb poem

![gdbPoem.png](https://upload-images.jianshu.io/upload_images/11189792-e5f847ebe5a5e6b5.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

Set a break

(1) set a break to check the value of time variable change.
![break1.png](https://upload-images.jianshu.io/upload_images/11189792-0589439a84e1f99d.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

(2)Set a break to check the input argument.

Print the stack information
![stack.png](https://upload-images.jianshu.io/upload_images/11189792-bead2b8236e12a62.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
##实验思考



##参考资料



