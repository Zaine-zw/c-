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
	////���74  ������  ��Ϊû��\0 ֹͣ�ַ�

	//char arr2[10] = { 'z','h','a','n','g' };
	//int len2 = strlen(arr2);
	//printf("%d\n", len2);
	////���5   ����ȫ��ʼ����ʣ���Ĭ��Ϊ0
	//return 0;


//	//дһ���������������Ľϴ�ֵ
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
//	//sizeof�ǲ��������ǵ�Ŀ������
//	int a = 10;
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof a);    //4
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));   //40  ���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));   //4  ���������һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));  //10   �����Ԫ�ظ���
//
//	return 0;
//}


//int main() {
//	int a = 10;
//	//int b = a++;  //����++����ʹ�ã���++
//	/*�൱��int b = a; a = a + 1;*/
//	//��ӡ��a=11,b=10
//
//
//	int b = ++a; //ǰ��++����++����ʹ��
//	//�൱��a = a + 1; b = a;
//	//��ӡ��a=11,b=11
//
//
//	int b = ++a;
//	return 0;
//}

//int main() {
//	int a = (int)3.14;
//	//3.14���渡������������Ĭ�����Ϊdouble����
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



//static���ξֲ�����
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


//static����ȫ�ֱ���

//�����ⲿ����
//extern int g_val;
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}



//static���κ���

//extern int Add(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}


////define�����ʶ������
//#define NUM 100
//
////����꣬�����в���
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
	//int a = 10;  //���ڴ�����4���ֽڣ�����10
	//&a; //ȡ��ַ������
	//printf("%p\n", &a); // ��ӡ��ַ
	//int* p = &a;
	////p����ָ�����

	//*p = 20;//�����ò�������ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
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
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	//printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//->
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);


}
int main() {
	struct Stu s = { "zhangsan",22,"man","110" };

	//�ṹ����.��Ա��
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);


	print(&s);
	return 0;
}