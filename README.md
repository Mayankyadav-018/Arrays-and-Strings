# EXPERIMENT NO - 07

* Aim: To explore and implement Strings and Arrays in C++ for storing and processing collections of data.

* Tools Used: IDE, string functions, array indexing, loops, operators, etc.

* Theory:
  
In C++, arrays and strings are used to store collections of data. Arrays store elements of the same data type, while strings handle sequences of characters. These structures allow efficient data access and manipulation.

 🔹 1. *Arrays in C++:*
 
  An array is a fixed-size collection of elements of the same data type stored in contiguous memory locations.
  It allows efficient access to elements using indices, starting from 0.
  Arrays can be used to store integers, floats, characters, or even user-defined data types.
  They are ideal for tasks that require repetitive data handling, such as storing marks, sensor readings, or processing       matrices.
However, since the size is fixed, memory must be allocated in advance and cannot be resized during runtime.

  🔸 Syntax:

      int arr[5] = {1, 2, 3, 4, 5};
  
  🔸 Usage:

  -Access elements using indices (starting from 0)

  -Can be one-dimensional or multi-dimensional

  -Commonly used with loops for iteration

🔸 Example:

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";

  🔹 2. *Strings in C++:*
  
A string in C++ is a sequence of characters enclosed in double quotes.
Strings can be manipulated using built-in functions from the string library.
They support operations like concatenation, comparison, substring extraction, and length calculation.
C++ provides both C-style character arrays and the more flexible string class from the Standard Library.

   🔸 Syntax:


    string name = "SIT";
    
   🔸 Usage:

  Declared using string data type from <string> header

  Supports concatenation, length checking, indexing, and comparison

  More convenient than C-style character arrays

   🔸 Example:


    string str = "Hello";
    cout << str.length();  

# Check if String is Palindrome or not:

This program checks if a given string is a palindrome (reads the same forwards and backwards). It calculates the string’s length, then compares characters from both ends using a loop. If all characters match symmetrically, it’s a palindrome.

*ALGORITHM:*

1> Start

2> Declare variables:

* str[100] (char array) – to store the input string

* length (int) – to calculate the length of the string

* isPalindrome (bool) – flag to determine if the string is a palindrome

3> Prompt the user and take input

* Display: “Enter a string:”

* Store the string in str

4> Calculate the length of the string

* Use a while loop to increment length until \0 is encountered

5> Check for palindrome using for loop

* Loop from i = 0 to length/2

* Compare str[i] and str[length - 1 - i]

* If mismatch found, set isPalindrome = false and break the loop

6> Display result

* If isPalindrome is true → print "str is a palindrome."

* Else → print "str is not a palindrome."

7> End

# Concatenation of String:

This program takes two input strings and manually concatenates the second string to the end of the first. It calculates the length of the first string, adds a space, then appends characters from the second string one by one using a while loop.

*ALGORITHM:*

1> Start

2> Declare variables:

* str1[100] (char array) – to store the first input string

* str2[50] (char array) – to store the second input string

* i, j (int) – loop counters for str1 and str2 respectively

3> Prompt user to enter both strings

* Take input for str1 and str2 using cin

4> Find the end of the first string

* Use a while loop to increment i until str1[i] == '\0' (null terminator)

5> Add a space character after the first string

* Assign ' ' (space) to str1[i], then increment i

6> Concatenate the second string to the first

* Use a while loop to copy each character of str2[j] into str1[i]

* Increment both i and j inside the loop

7> Terminate the new string with null character

* Set str1[i] = '\0' to properly end the combined string

8> Display the concatenated string

* Output: "Concatenated string: " followed by str1

9> End

# Input and Output for array:

This program takes user input to create an integer array and then displays all the elements. It demonstrates basic array creation, input using loops, and output display using for loops in C++.

*ALGORITHM:*

1> Start

2> Declare variables:

* n (int) – to store number of elements

* numbers[n] – integer array to store input values

3> Ask user how many numbers to input

* Input value into n

4> Loop from i = 0 to n - 1:

* Input elements into numbers[i]

5> Print message: "The elements of this array are:"

6> Loop from j = 0 to n - 1:

* Print numbers[j] with space

7> End

# Maximum and Minimum element of an array:

This program reads an array of numbers from the user and then finds the maximum and minimum values by comparing each element. It uses two loops: one for input and the other for comparison.

*ALGORITHM:*

1> Start

2> Declare variables:

* arr[50] – array to hold elements

* num – number of elements

* i, j, temp – loop/control variables

* sum – initialized to 0 (not used further)

* max, min – to store highest and lowest values

3> Prompt user to enter number of elements

* Store in num

4> If num <= 0, display "Invalid input" and exit

5> Use a loop from i = 0 to num - 1:

* Take input for each element of the array

6> Initialize max and min with first element of array

7> Use loop from i = 0 to num - 1:

* If arr[i] > max, update max

* If arr[i] < min, update min

8> Display max and min values

9> End

# Reversed String:

This program takes a string input and reverses it by first calculating its length and then printing characters in reverse order using a loop. It does not use any built-in reverse functions.

*ALGORITHM:*

1> Start

2> Declare a character array str[100]

3> Prompt user to enter a string

* Store it in str

4> Initialize length = 0

5> Use while loop to find length of string

* Loop until str[length] != '\0'

* Increment length

6> Print "Reversed string: "

7> Use for loop from length - 1 to 0:

* Print str[i] in reverse order

8> Print newline

9> End

# Reversing an array:

This program reverses the elements of an array using the two-pointer method. It first takes input from the user, then swaps elements from both ends using a temporary variable until the middle is reached, effectively reversing the array.

*ALGORITHM:*

1> Start

2> Declare array arr[50], variables num, temp, i, j

3> Prompt user for number of elements

* Store in num

* If num <= 0, display "Invalid input."

4> Use for loop from i = 0 to num - 1:

* Prompt and store elements into arr[i]

5> Display original array using another for loop

6> Initialize i = 0, j = num - 1

* Use while or for loop until i < j

* Swap arr[i] and arr[j] using temp

* Increment i, decrement j

7> Display reversed array using for loop

8> End

# Search element in an array:

This program performs linear search to find a specific value in an array. It compares each element one by one with the user-input key and reports its position if found. If the key is not present, it displays an appropriate message.

*ALGORITHM:*

1> Start

2> Declare an array marks[] = {24, 62, 45, 77, 57}

3> Take user input and store it in variable key

4> Initialize flag variable found = false

5> Use a loop from i = 0 to 4:

* If marks[i] == key:

* Print position as i + 1

* Set found = true

* Break the loop

6> After loop:

* If found == false, print "Key not found"

7> End

# Sum and Average of an array:

This program calculates the sum and average of elements in an array. It takes user input for each element, adds them using a loop, and then divides the sum by the number of elements to compute the average.

*ALGORITHM:*

1> Start

2> Declare array arr[50], variables num, sum = 0

3> Input total number of elements num

4> If num <= 0, print "Invalid input"

5> Input num elements into the array using a loop

6> Use another loop to calculate the sum of all array elements

7> Print the total sum

8> Compute and print average using: sum / num

9> End

# Taking String as Inout and Display it:


# Conclusion:

By implementing arrays and strings, we learn to store and manage multiple data values efficiently. Arrays help with indexed numeric data, while strings simplify character and text processing, both essential for building real-world C++ applications.

