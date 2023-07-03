// #include - the contents of that file are essentially copied and pasted into the source file at the location of the #include.
// <stdio.h>- <> This form is used for including standard library header files for your file use "".
#include <stdio.h>
// int- return type indicates that the main() function should return an integer value. 
// main() - is the entry point of a C program. It is the function from where the program execution begins
int main() {
    // myInterger - name or variable
    int myInteger = 42;
    printf("The value of myInteger is: %d\n", myInteger);
    
    // float - The size of a float variable is usually 4 bytes on most systems.
    // radius - variable
    // area - variable
    // circumference - variable
    float radius, area, circumference;
    const float pi = 3.14159;
    printf("Enter the radius of a circle: ");
    // scanf - function is used to read input from the user or from a file.
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circumference);

    // char - 
    char myChar = 'A';
    printf("The value of myChar is: %c\n", myChar);

    // Signed char - can store values from -128 to 127. 
    signed char mySignedChar = -50;
    printf("The value of mySignedChar is: %d\n", mySignedChar);

    // Unsigned char - can store values from 0 to 255
    unsigned char myUnsignedChar = 200;
    printf("The value of myUnsignedChar is: %u\n", myUnsignedChar);

    // array - 
    // Define an array of integers with a size of 5
    int numbers[5];
    // Assign values to the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Access and print the array elements
    printf("numbers[0]: %d\n", numbers[0]);
    printf("numbers[1]: %d\n", numbers[1]);
    printf("numbers[2]: %d\n", numbers[2]);
    printf("numbers[3]: %d\n", numbers[3]);
    printf("numbers[4]: %d\n", numbers[4]);
    return 0;
}

/* README
          //this command you need run in terminal that this do is create a executable file
          gcc -o integer_example integer_example.c
          // run the commpiled program
          ./name_of_executable.
*/



