#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

	/*char arr[] = {'a','b','c','d','e','f','\0','g'};
	printf("%s\n", arr);*/

	//printf("abcd\nefg");
	//printf("%d\n", strlen("c:\test\628\test.c"));
	//int input = 0;
	//scanf("%d", &input);
	//if (input == 1)
	//{
	//	printf("hhh");
	//}
	//
	//else
	//{
	//	printf("cvccc");
	//}
	
		/*int arr[] = { 40,212 };
		int a = arr[0];
		int b = arr[1];

		printf("%d", (-8 + 22) * a - 10 + b / 2);
		return 0;
	*/


	/*int arr[] = {1,2,3,4};
	int i = 0;
	while (i < 3) {
		printf("%d\n", arr[i]);
		i++;

	}*/
	
	/*int len = strlen("c:\test\121");
	printf("%d\n", len);*/


	//char arr1[] = { 'z','h','a','n','g'};
	//int len1 = strlen(arr1);
	//printf("%d\n", len1);
	////输出74  ？？？  因为没有\0 停止字符

	//char arr2[10] = { 'z','h','a','n','g' };
	//int len2 = strlen(arr2);
	//printf("%d\n", len2);
	////输出5   不完全初始化，剩余的默认为0
	//return 0;


//	//写一个函数求两个数的较大值
//int MAX(int x,int y) {
//	if (x > y) {
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int r = MAX(a, b);
//	printf("%d\n",r);
//
//}


//int main() {
//	int x = scanf("%d", &x);
//	int y = 0;
//	if (x < 0) {
//		printf("%d\n", y+1);
//	}
//	else if (x == 0) {
//		printf("%d\n", y);
//	}
//	else {
//		printf("%d\n",y-1);
//	}
//	return 0;
//}



//int main() {
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//	return 0;
//}

//int main() {
//	int a = 7 / 2;
//	int b = 7 % 2;
//	float c = 7.0 / 2;
//	printf("%d\n", a);  //3
//	printf("%d\n", b);  //1
//	printf("%.1f\n", c  //3.5
//	);
//
//}


//int main() {
//	int flag = 0;
//	if (!flag) {
//		printf("true");
//	}
//}


//int main() {
//	//sizeof是操作符，是单目操作符
//	int a = 10;
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof a);    //4
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));   //40  计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));   //4  计算数组第一个元素的大小
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));  //10   数组的元素个数
//
//	return 0;
//}


//int main() {
//	int a = 10;
//	//int b = a++;  //后置++，先使用，后++
//	/*相当于int b = a; a = a + 1;*/
//	//打印出a=11,b=10
//
//
//	int b = ++a; //前置++，先++，后使用
//	//相当于a = a + 1; b = a;
//	//打印出a=11,b=11
//
//
//	int b = ++a;
//	return 0;
//}

//int main() {
//	int a = (int)3.14;
//	//3.14字面浮点数，编译器默认理解为double类型
//	printf("%d\n", a); //3
//	return 0;
//}


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//typedef unsigned int uint;
//int main() {
//	unsigned int num1 = 0;
//	uint num2 = 1;
//
//	struct Node n;
//	Node n2;
//	return 0;
//}



//static修饰局部变量
//void test() 
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	int a=1;
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//static修饰全局变量

//声明外部变量
//extern int g_val;
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}



//static修饰函数

//extern int Add(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}


////define定义标识符常量
//#define NUM 100
//
////定义宏，宏是有参数
//#define ADD(x,y) ((x)+(y))
//int main() {
//	/*printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };*/
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
	//int a = 10;  //向内存申请4分字节，储存10
	//&a; //取地址操作符
	//printf("%p\n", &a); // 打印地址
	//int* p = &a;
	////p就是指针变量

	//*p = 20;//解引用操作符，通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
	//printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;




	//printf("%zu\n", sizeof(int*));
	//printf("%zu\n", sizeof(char*));
	//printf("%zu\n", sizeof(short*));
	//printf("%zu\n", sizeof(float*));
	//printf("%zu\n", sizeof(double*));
	//return 0;
//}


struct Stu {
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	//printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);


}
int main() {
	struct Stu s = { "zhangsan",22,"man","110" };

	//结构对象.成员名
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);


	print(&s);
	return 0;
}