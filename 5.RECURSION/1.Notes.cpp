/********************************************************
 *                     RECURSION NOTES
 *                  (Striver – Basics)
 ********************************************************

 RECURSION:
 A function calling itself until a base condition
 is satisfied.

 Key Components:
 1. Base Case → stops recursion
 2. Recursive Call → function calls itself
 3. Smaller Input → moves toward base case

 Golden Rule:
 Every recursive call must move toward the base case.

 --------------------------------------------------------
 UNDERSTANDING RECURSION (PRINT N TIMES)
 -------------------------------------------------------- */

void printNTimes(int n) {
    if(n == 0)
        return;

    cout << "Hello\n";
    printNTimes(n - 1);
}

/*
 Time Complexity: O(N)
 Space Complexity: O(N)  (recursive stack)

----------------------------------------------------------
/* PRINT NAME N TIMES USING RECURSION
----------------------------------------------------------*/

void printName(int n) {
    if(n == 0)
        return;

    cout << "Dhruv\n";
    printName(n - 1);
}

/* 
----------------------------------------------------------
/* PRINT 1 TO N USING RECURSION (BACKTRACKING)
----------------------------------------------------------*/

void print1ToN(int n) {
    if(n == 0)
        return;

    print1ToN(n - 1);
    cout << n << " ";
}

/*
----------------------------------------------------------
 PRINT N TO 1 USING RECURSION
----------------------------------------------------------*/

void printNTo1(int n) {
    if(n == 0)
        return;

    cout << n << " ";
    printNTo1(n - 1);
}

/*
----------------------------------------------------------
/* SUM OF FIRST N NUMBERS (PARAMETERIZED RECURSION)
----------------------------------------------------------*/

void sumParameterized(int n, int sum) {
    if(n == 0) {
        cout << sum;
        return;
    }
    sumParameterized(n - 1, sum + n);
}

/*
----------------------------------------------------------
/* SUM OF FIRST N NUMBERS (FUNCTIONAL RECURSION)
----------------------------------------------------------*/

int sumFunctional(int n) {
    if(n == 0)
        return 0;

    return n + sumFunctional(n - 1);
}

/*
----------------------------------------------------------
/* FACTORIAL OF N NUMBERS
----------------------------------------------------------*/

int factorial(int n) {
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}

/*
 Example:
 factorial(4) = 4 * 3 * 2 * 1 = 24
*/
/*
----------------------------------------------------------
/* REVERSE AN ARRAY USING RECURSION
----------------------------------------------------------*/

void reverseArray(int arr[], int l, int r) {
    if(l >= r)
        return;

    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}
/*
----------------------------------------------------------
/* CHECK PALINDROME STRING USING RECURSION
----------------------------------------------------------*/

bool isPalindrome(string &s, int l, int r) {
    if(l >= r)
        return true;

    if(s[l] != s[r])
        return false;

    return isPalindrome(s, l + 1, r - 1);
}
/*
----------------------------------------------------------
/* FIBONACCI NUMBER USING RECURSION
----------------------------------------------------------*/

int fibonacci(int n) {
    if(n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
 Fibonacci Series:
 0 1 1 2 3 5 8 ...

 Time Complexity: O(2^N)
 Space Complexity: O(N)
 (Highly inefficient – optimized later using DP)
*/
/*
----------------------------------------------------------
/* IMPORTANT RECURSION TAKEAWAYS
----------------------------------------------------------

✔ Always define a base case
✔ Recursive call must reduce the problem size
✔ Recursion uses extra stack space
✔ Backtracking happens while returning
✔ Prefer iteration when recursion depth is very large

----------------------------------------------------------
 COMMON MISTAKES
----------------------------------------------------------

❌ Missing base case
❌ Base case never reached
❌ Wrong parameter update
❌ Expecting recursion to be faster than loops

********************************************************/
