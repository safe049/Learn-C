#include<stdio.h>

void main()
{
	printf("Hello,World."); // Print "Hello World" to screen.'
	// data[bool] : int float 
	int a = 1; // define "a" is a int
	// define "a" value is 1
   // %d means a placeholder for int bools
	printf("%d", a); // This placehold "a"'s int value. It output "1" which is "a"'s int value,
	printf("The value of a is %d", a);  // Look,it works good.Which output "The value of a is 1"
	// Float and Double are bools for float type. But float is 4 bytes, double is 8 bytes. But,just use them free.
	float b = 3.14; // This could straight give b a value which is a float.
	double c = 5.26; // This give c a float value.double is also a float type
	// Float's placeholder is %f
	printf("The value of a is %d , The value of b is %f , The value of c is %f ", a, b, c); // You may list them up. How elegant?
	// But,output so many 0 is really not so elegant.
	// What about we just delete those 0?
	printf("The value of b is %.3f , the value of c is %.4f ", b, c); // Keep three decimal places for b and three decimal places for c
	// Use .x [x stands for the decimal places] in %[.x]f , make it elegant.
	// Let's get into Char types. Char need to use ' ' when giving a value!
	char f; // Set 'f' is a char.
	f = 'a'; // Placeholder of char is %c
	printf("value of f is %c , value of c is %.2f ", f, c); // Print f and c.
	// What if you want to make it another line? use \n in "" of printf.
	printf("Value of f is %c , value of b is %f \n", f, b);
	printf("Test \n");
	// Elegant.	
    // List a var.
	int g[10] = { 1,2,3,4,5,6,7,8,9,10 }; // give g 10 value which is able to use free. format: [bool]+ [var]+[value of number gived] = { Number,Number,Number };
	// You may choose the number free. NOTICE:base number of computer is 0.
	printf("Choosed number %d , Second choosed number %d", g[0], g[1]);
	// How elegant.
	// Chapter 1 end. see you next file.
}