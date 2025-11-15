// Declaration:
// Declaring a variable means telling the compiler that a variable exists, what its name is, and what type of data it will hold.
// A declaration introduces a variable to the program.
// You are saying: “Hey compiler, I want a place in memory to store this kind of data, and I will refer to it using this name.”


// Example:
double c;

/*This means:
Create a variable named c
It will store a double (a number with decimals)
Reserve memory for it*/


// Why declarations are needed ?
// When the compiler sees this:
c = sqrt(x + y + z);

/*It needs to know:
What is c?
What type is it?
How much memory should be used to store it?*/


// Declaration vs Initialization

// Declaration:
int x;

// Initialization: (giving it a value)
x = 10;

// You can also do both at once:
int x = 10;


// Declaring a variable is like creating a labeled container:
double c;         // create a container called "c"
c = 5.2;          // put the value 5.2 inside it
// If you put something into a container that doesn’t exist, you get an error.
