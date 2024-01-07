#include<stdio.h>

void main()
{
	// Welcome to chapter2 £º Converts.
	int int1 = 3; // define int1 and giving a value 3.
	float float1 = 3.14; //define float1
	printf("int1 = %d , float1 = %.3f\n", int1, float1); // Let's review last chapter.
	int list[5] = { 1,2,3,4,5 };
	printf("choosed number %d,second number %d\n", list[2], list[0]);
	// -------------------------------------------------------------------------------------
	// Math
	int var1 = 2;
	float1 = var1 / 2; // idk how this work but you can make caculate result to any var. 
	printf("result of 2 / 2 equals %f\n", float1); // As you can see,there is a convert that make float1 a char.
	// maybe?
	int var2 = var1 / 2; // well this does define one.
	printf("result of 2 / 2 equals %d\n", var2);
	// -------------------------------------------------------------------------------------
	// Straight convert a int to a float	
	printf("int1 is %f\n", (float)int1); // (Bool)[var] to straight convert a var type.
	// What about we convert a float into a int?
	float float2 = 4.5;
	printf("float2 is %d\n", (int)float2); // It just removed the part after the dot.
	// You have learned chapter2:converts.
	// See you next file.
}
