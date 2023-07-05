// #include - the contents of that file are essentially copied and pasted into the source file at the location of the #include.
// <> - This form is used for including standard library.
// "" - for your file use "".
// stdio.h -
// string.h -
#include <stdio.h>
#include <string.h>
// int- return type indicates that the main() function should return an integer value. 
// main() - is the entry point of a C program. It is the function from where the program execution begins


int ig1 = 2023;// global variable
int main() {
    // local variable int
    // int - type number
    int i1 = 42;
    int i2,i3;
    int i4=1,i5=2,i6=3;
    printf("The value of i1 is: %d\n", i1);
    printf("the value of i2, i3 : %d,%d\n",i2,i3);
    printf("the value of i4,i5,i6 is: %d,%d,%d\n",i4,i5,i6);
    
    // ** static
    static int si1=10;
    si1=si1+1; // incremented value in each func call
    printf("static si1 = %d\n",si1);

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

    // set object o struct
    // struct
    struct Person {
    char name[50];
    int age;
    };
    struct Person person1;
    // strcpy - s.l.c string copy use to copy an string to another place
    strcpy(person1.name, "John");
    person1.age = 25;
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    
    return 0;
}

/* README
          //this command you need run in terminal that this do is create a executable file
          gcc -o integer_example integer_example.c
          // run the commpiled program
          ./name_of_executable.
*/



