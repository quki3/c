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
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circumference);
    return 0;
}

/* README
          //this command you need run in terminal that this do is create a executable file
          gcc -o integer_example integer_example.c
          // run the commpiled program
          ./name_of_executable.
*/



