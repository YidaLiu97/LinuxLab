#南昌大学实验报告
---


姓名：刘谕霖
	
学号：6103115085

邮箱地址：854558883@qq.com

专业班级：计科153班

实验日期：2018.4.23
    
课程名称：Linux程序设计
 
##实验项目名称
 Multi-processing in Linux

##实验目的
Understanding the mechanism of multi-processing
Understanding the idea of process scheduling
Understanding multi-thread programming

##实验基础
Find a zip file in our course page, called sources.tar
Download and unzip it for this lab

##实验步骤
###The Fork Question
• Compile the c codes by your own makefile and answer the questions.
###Fork and fork more
• Complete the code for function fork1 and the code for function fork2
• Compile both and run them. 
• Explain why they perform, differently.
###Processes
• Write a C program that generates the Collatz sequence in the process. The initial number will be provided in the command line.
(1) The first version outputs the sequence directly in process. 
(2) The second version has a child process overlay its address space with the first program that generates the output.
###Threads
• In this part, we involve creating a child thread that generates the Collatz sequence, writing it to global data it shares with the parent. When the child thread terminates, the parent will output the sequence. 

##实验数据或结果
###The Fork Question
the makefile for fork_problem:
![makefile1.png](https://upload-images.jianshu.io/upload_images/11189792-d75ed13aff6d5acd.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

the makefile for multi-fork:
![makefile2.png](https://upload-images.jianshu.io/upload_images/11189792-d561506856e96b2f.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

run fork_problem:
![linexy.png](https://upload-images.jianshu.io/upload_images/11189792-da614f02cd1df7dc.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

From this screenshot we can see the output at the commented lines LINE X and LINE Y for fork_problem.c
LINE X: I am the child - value = 20
LINE Y: I am the parent - value = 5

run multi-fork:
![uniqueprocesses.png](https://upload-images.jianshu.io/upload_images/11189792-59527d826a2193e5.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

There are **fifteen** unique processes are created using the multi-fork.

###Fork and fork more
fork1:
![fork1.png](https://upload-images.jianshu.io/upload_images/11189792-31b64dd248c2f2c8.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

fork2:
![fork2.png](https://upload-images.jianshu.io/upload_images/11189792-74efe4982178915a.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

run:
![differentoutput.png](https://upload-images.jianshu.io/upload_images/11189792-651f8b9ba9120b40.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

Explain: printf存在数据缓冲区，\n可以刷新缓冲区。在没有加\n时数据缓冲区的数据没有更新，而fork()创建子进程时，复制了父进程的数据段和堆栈段，包括缓冲区，所以就会将L0和L1一起打印出来。


###Processes
1.Outputs the sequence directly
code:
![collatz.png](https://upload-images.jianshu.io/upload_images/11189792-9eb842e4a408a231.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

run:
![result1.png](https://upload-images.jianshu.io/upload_images/11189792-125f456dca362cff.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

2.Use execlp()
code:
![collatz2.png](https://upload-images.jianshu.io/upload_images/11189792-6302bd67736987a3.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

run:
![result2.png](https://upload-images.jianshu.io/upload_images/11189792-cb65f7a7d26c9be6.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

###Threads
code:
![collatz-thrd1.png](https://upload-images.jianshu.io/upload_images/11189792-978537e2a7bea67b.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

![collatz-thrd2.png](https://upload-images.jianshu.io/upload_images/11189792-89192a16a02fc9a5.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

![collatz-thrd3.png](https://upload-images.jianshu.io/upload_images/11189792-c18929267c83d22a.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

run:
![result4.png](https://upload-images.jianshu.io/upload_images/11189792-e8b62188908a152e.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
##实验思考
通过这次实验更加了解进程与线程，同时也对exec函数组进行了一定的了解。


##参考资料
exec函数：https://blog.csdn.net/gogokongyin/article/details/51334773
进程与线程：https://www.cnblogs.com/reality-soul/p/6397021.html
