ARRAYS
Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. It is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.
To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list, inside curly braces.

Example:-

int marks[] = {25, 50, 75, 100};

Access the Elements of an Array

1.A specific element in an array is accessed by an index.
2.Array indexes start with 0. This statement accesses the value of the first element [0] in marks:

Example:-

int myNumbers[] = {25, 50, 75, 100};

printf("%d", myNumbers[0]);

// Outputs 25

All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.

![image](https://user-images.githubusercontent.com/125783965/234498797-91d02011-d672-4aea-8338-d5a5baefe5d7.png)

OUTPUT OF THE CODE:

![image](https://user-images.githubusercontent.com/125783965/234499062-c433dcaa-69ce-4a3e-8562-16ae4e75a0a9.png)
