/*
------------------------------------------------
 C++ DATA TYPES NOTES (with examples)
------------------------------------------------

1. int
   - Size: Usually 4 bytes (depends on system/compiler).
   - Range: -2,147,483,648 to 2,147,483,647
   - Usage: Storing whole numbers (positive or negative).
   Common Examples:
       int age = 21;
       int year = 2025;
       int temperature = -5;

------------------------------------------------
2. long
   - Size: At least 4 bytes (can be 8 bytes on some systems).
   - Range: Same as int or larger depending on system.
   - Usage: Larger whole numbers when int might overflow.
   Common Examples:
       long population = 1000000;
       long distance = 987654321;

------------------------------------------------
3. long long
   - Size: 8 bytes
   - Range: -9,223,372,036,854,775,808 to 
             9,223,372,036,854,775,807
   - Usage: Very large integers beyond the range of long.
   Common Examples:
       long long starsInGalaxy = 9000000000000;
       long long nationalDebt = 300000000000000;

------------------------------------------------
4. float
   - Size: 4 bytes
   - Precision: ~6-7 decimal digits
   - Usage: Decimal numbers with moderate precision.
   Common Examples:
       float pi = 3.14f;
       float gpa = 8.75f;
       float weight = 65.5f;

------------------------------------------------
5. double
   - Size: 8 bytes
   - Precision: ~15-16 decimal digits
   - Usage: High precision decimal numbers.
   Common Examples:
       double precisePi = 3.141592653589793;
       double distanceToMoon = 384400.123456;
       double bankBalance = 10500.99;

------------------------------------------------
6. string + getline
   - `string` stores a sequence of characters (words or sentences).
   - getline(cin, str) → Reads an entire line (with spaces).
   Common Examples:
       string name = "Dhruv";
       string city;
       getline(cin, city);   // e.g. "New Delhi"
       cout << "Welcome " << city;

------------------------------------------------
7. char
   - Size: 1 byte
   - Stores a single character (inside single quotes).
   Common Examples:
       char grade = 'A';
       char symbol = '#';
       char initial = 'D';

------------------------------------------------
8. bool (Extra)
   - Size: 1 byte
   - Values: true (1), false (0)
   - Usage: Logical values (yes/no).
   Common Examples:
       bool isStudent = true;
       bool hasLicense = false;

------------------------------------------------
*/
