# Bit-Level-Manipulation

We are required to create a simple bit manipulation program that allows
the user to input any decimal number and choose a bit system through the terminal. The code
converts and outputs the corresponding binary number, and also calculates and outputs the
one’s and two’s complement of the decimal number inputted. We are also required to use
anonymous variables for all the variables except for the pointer p, which will be the only named
variable. In the program, it takes a decimal number “num” and bit system “b” as input. The
binary equivalent of the decimal number is stored in an array a[]. Pointer p is used to access the
elements of the array. The one's complement and two's complement of the decimal number are
calculated and displayed as output. Error checking is done by checking if the decimal number is
positive and if it’s a string. Another check we do is if the bit system entered by the user is either
4, 8, 16, 32, or 64. Unfortunately, I couldn’t get it to asks for input again if it is not correct, it
would end up going into an infinite loop. I ended up making the code just end and require you to
exit the console. This could likely be due to my poor coding structure.
Here we first include our libraries before main line. Then in main we start to declare our multiple
variables with an int data type. The variables b, i, k, a[64], and *p are declared and initialized. b
stores the bit system entered by the user, a[64] is an array used to store the binary
representation of the decimal number, and p is a pointer that stores the address of a[]. In the
first part we prompt the user to input a decimal number and we do error checking to make sure
it’s not a negative number or a string of letters. Here I used scanf to read input from the user. It
reads the decimal number entered by the user and stores it into the variable “num”. %d
specifies that the input must be a decimal integer. If the input is invalid, an error message will be
displayed to the user and then the code exits. Once the user finally enters a decimal, the
