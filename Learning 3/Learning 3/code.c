#include<stdio.h>

void main()
{
	// Welcome to chapter 3. First,Lets review the convert.
	float test = 3.14;
	printf("test = %d\n", (int)test);
	int test2 = 4;
	printf("test2 = %f\n", (float)test2);
	printf("test2 = %.2f\n", (float)test2);
	// Very good,let's continue to today's content : arithmetic operator [like + - * / ]
	// Some simple plus caculate with our friend:INT!
	int int1 = 3;
	int int2 = 3;
	int result1 = 0; // If you just need one caculate,simply 'int result1 = int1+int2;'
	result1 = int1 + int2;
	printf("%d + %d equals %d\n", int1, int2, result1);
	// Lets try sth different.
	result1 = int1 - int2;
	printf("%d - %d equals %d\n", int1, int2, result1);
	result1 = int1 / int2;
	printf("%d / %d equals %d\n", int1, int2, result1);
	result1 = int1 * int2;
	printf("%d * %d equals %d\n", int1, int2, result1);
	// sehr schon!
	// some special things: [var]++ equals [var]+1
	int var1 = 10;
	int res2 = 0;
	res2 = ++var1;
	// If you use ++ , you must define a base value for result var.
	printf("var1 ++ equals %d\n", res2);
	// there is ++,there is --. -- means var - 1
	int var2 = 5;
	int res3 = 0;
	res3 = --var2;
	printf("10 -- = %d", res3);
	// perfecto.
	// Thats chapter3,see  you next file.
}