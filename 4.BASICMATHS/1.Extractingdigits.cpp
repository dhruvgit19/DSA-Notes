/********************************************************
 * EXTRACTING DIGITS (Logic)
 *
 * Purpose:
 * - To isolate each digit of a number for processing
 *
 * Core Operations:
 * 1. Last Digit:  n % 10
 * 2. Remove Last: n / 10
 *
 * Logic Flow:
 * while (n > 0) {
 * int lastDigit = n % 10;
 * // ... do something with lastDigit ...
 * n = n / 10;
 * }
 *
 * Time Complexity:
 * - O(log10(n)) → Number of digits in n
 *
 * Space Complexity:
 * - O(1) → Constant space
 * * Edge Case:
 * - If n is 0, the loop won't execute. Handle 0 separately
 * if needed.
 ********************************************************/



 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int count = 0;
    while(n>0){
        int last_digit = n % 10;
        cout << last_digit << endl;
        n = n/10;
        count = count + 1;
    }
    
    cout << "The count is : " << count;
}
