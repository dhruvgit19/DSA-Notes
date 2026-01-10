// For pattern printing, we use - NESTED LOOPS

/*
4 important things : 
1) For the outer loop, count the no. of rows.
2) For the inner loop, focus on the columns and somehow try to connect them to the rows.
3) Print '*' inside the inner for loop
4) Observe symmmetry {Optional}
*/



// Q) To print the pattern       * * * * *
//                               * * * * *
//                               * * * * *
//                               * * * * *
//                               * * * * *

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1; i<6; i++){
//         for(int j=1; j<6; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // USING FUNCTIONS : 
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=n; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print1(n);
// }



// Q) To print the pattern       * 
//                               * * 
//                               * * * 
//                               * * * *
//                               * * * * *

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1; i<6; i++){
//         for(int j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// USING FUNCTIONS : 
// #include<bits/stdc++.h>
// using namespace std;
// void print2(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print2(n);
// }





// Q) To print the pattern       1 
//                               1 2 
//                               1 2 3 
//                               1 2 3 4
//                               1 2 3 4 5
// #include<bits/stdc++.h>
// using namespace std;
// void print3(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print3(n);
// }




// Q) To print the pattern       1 
//                               2 2 
//                               3 3 3 
//                               4 4 4 4
//                               5 5 5 5 5
// #include<bits/stdc++.h>
// using namespace std;
// void print4(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print4(n);
// }




// Q) To print the pattern       
//.                              * * * * *
//                               * * * *
//                               * * *
//                               * * 
//                               * 
// #include<bits/stdc++.h>
// using namespace std;
// void print5(int n){
//     for(int i=n; i>=1; i--){
//         for(int j=i; j>=1; j--){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print5(n);
// }




// Q) To print the pattern       1 2 3 4 5
//                               1 2 3 4
//                               1 2 3
//                               1 2 
//                               1 
// #include<bits/stdc++.h>
// using namespace std;
// void print6(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print6(n);
// }





// Q) To print the pattern       
//                                      * 
//                                    * * *
//                                  * * * * * 
//                                * * * * * * *
//                              * * * * * * * * * 
// #include<bits/stdc++.h>
// using namespace std;
// void print7(int n){
//     for(int i=0; i<n; i++){
//         // space
//         for(int j=0; j < n-i-1; j++){
//             cout << " ";
//         }

//         // star
//         for(int j=0; j < (2*i)+1; j++){
//             cout << "*";
//         }

//         // space
//         for(int j=1; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print7(n);
// }




// Q) To print the pattern       
//                               * * * * * * * * *
//                                 * * * * * * *
//                                   * * * * *
//                                     * * *
//                                       * 
// #include<bits/stdc++.h>
// using namespace std;
// void print8(int n){
//     for(int i=n; i>0; i--){
//         // space
//         for(int j=n; j>i; j--){
//             cout << " ";
//         }

//         // star
//         for(int j=(2*i)-1; j > 0; j--){
//             cout << "*";
//         }

//         // space
//         for(int j=n; j>i; j--){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print8(n);
// }




// Q) To print the pattern       
//                                       * 
//                                     * * *
//                                   * * * * * 
//                                 * * * * * * *
//                               * * * * * * * * * 
//                               * * * * * * * * *
//                                 * * * * * * *
//                                   * * * * *
//                                     * * *
//                                       * 

// #include<bits/stdc++.h>
// using namespace std;
// void print7(int n){
//     for(int i=0; i<n; i++){
//         // space
//         for(int j=0; j < n-i-1; j++){
//             cout << " ";
//         }

//         // star
//         for(int j=0; j < (2*i)+1; j++){
//             cout << "*";
//         }

//         // space
//         for(int j=1; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// void print8(int n){
//     for(int i=n; i>0; i--){
//         // space
//         for(int j=n; j>i; j--){
//             cout << " ";
//         }

//         // star
//         for(int j=(2*i)-1; j > 0; j--){
//             cout << "*";
//         }

//         // space
//         for(int j=n; j>i; j--){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print7(n);
//     print8(n);
// }



// Q) To print the pattern       * 
//                               * * 
//                               * * * 
//                               * * * *
//                               * * * * *
//                               * * * *
//                               * * *
//                               * * 
//                               * 
// #include<bits/stdc++.h>
// using namespace std;
// void print10(int n){
//     for(int i=0; i<n; i++){
//         for(int j = 0; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// void print11(int n){
//     for(int i=n-1; i>0; i--){
//         for(int j = i; j>0; j--){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print10(n);
//     print11(n);
// }





// Q) To print the pattern       1 
//                               0 1 
//                               1 0 1 
//                               0 1 0 1
//                               1 0 1 0 1

// #include<bits/stdc++.h>
// using namespace std;
// void print12(int n){
//     int start=1;
//     for(int i=0; i<n; i++){
//         if(i%2 == 0) start = 1;
//         else start = 0;

//         for(int j = 0; j<=i; j++){
//             cout << start << " ";
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print12(n);
// }





// Q) To print the pattern       1             1
//                               1 2         2 1
//                               1 2 3     3 2 1
//                               1 2 3 4 4 3 2 1
// #include<bits/stdc++.h>
// using namespace std;
// void print13(int n){
//     int space = 2*(n-1);
//     for(int i=1; i <= n; i++){

//         // Numbers : 
//         for(int j = 1; j<=i; j++){
//             cout << j;
//         }

//         // Spaces : 
//         for(int j=1; j<=space;j++){
//             cout<<" ";
//         }


//         // Numbers : 
//         for(int j = i; j>=1; j--){
//             cout << j;
//         }
    

//         cout << endl;
//         space -= 2;
//     }


// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print13(n);
// }





// Q) To print the pattern       1             
//                               2 3         
//                               4 5 6    
//                               7 8 9 10
//                               11 12 13 14 15
// #include<bits/stdc++.h>
// using namespace std; 
// void print14(int n){
//     int num=1;
//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << num << " ";
//             num = num+1;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print14(n);
// }




// Q) To print the pattern       A             
//                               A B         
//                               A B C    
//                               A B C D
//                               A B C D E
// #include<bits/stdc++.h>
// using namespace std; 
// void print15(int n){
//     int num=1;
//     for(int i = 0; i<n; i++){
//         for(char ch = 'A'; ch<='A'+i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print15(n);
// }





// Q) To print the pattern       
//                               A B C D E
//                               A B C D      
//                               A B C    
//                               A B 
//                               A 

// #include<bits/stdc++.h>
// using namespace std; 
// void print15(int n){
//     int num=1;
//     for(int i = n; i>=0; i--){
//         for(char ch = 'A'; ch<='A'+ i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print15(n);
// }





// Q) To print the pattern       
//                               A 
//                               B B      
//                               C C C    
//                               D D D D
//                               E E E E E
// #include<bits/stdc++.h>
// using namespace std; 
// void print15(int n){
//     int num=1;
//     for(int i = 0; i<=n; i++){
//         char ch = 'A' + i;
//         for(int j=0; j<=i; j++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print15(n);
// }




// Q) To print the pattern       
//                               A 
//                             A B A      
//                           A B C B A    
//                         A B C D C B A
//                       A B C D E D C B A
// #include<bits/stdc++.h>
// using namespace std; 
// void print17(int n){
//     for(int i=0; i<n; i++){
//         // space
//         for(int j=0; j < n-i-1; j++){
//             cout << " ";
//         }

//         // characters
//         char ch = 'A';
//         int breakpoint = (2*i+1)/2;
//         for(int j=1;j<=2*i+1; j++){
//             cout << ch;
//             if(j<=breakpoint) ch++;
//             else ch--;
//         }

//         // space
//         for(int j=0; j < n-i-1; j++){
//             cout << " ";
//         }

//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print17(n);
// }





// Q) To print the pattern       E             
//                               D E         
//                               C D E    
//                               B C D E
//                               A B C D E
// #include<bits/stdc++.h>
// using namespace std; 
// void print15(int n){
//     for(int i = 0; i<n; i++){
//         for(char ch = 'E' - i; ch<='E'; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print15(n);
// }




// Q) To print the pattern
//                             * * * * * * * * * *
//                             * * * *     * * * *
//                             * * *         * * *
//                             * *             * *
//                             *                 *
//                             * *             * *
//                             * * *         * * *
//                             * * * *     * * * *
//                             * * * * * * * * * *
// #include<bits/stdc++.h>
// using namespace std; 
// void print15(int n){
//     int iniS=0;
//     for(int i = 0; i<n; i++){
//         //stars
//         for(int j=1; j<=n-i; j++){
//             cout << "*";
//         }

//         //spaces:
//         for(int j=0; j<iniS;j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=1; j<= n-i; j++){
//             cout << "*";
//         }
//         iniS += 2;
//         cout << endl;
//     }
//     iniS=2*n-2;
//     for(int i=1;i<=n;i++){
//         //stars
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }

//         //spaces:
//         for(int j=0; j<iniS;j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         iniS -= 2;
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print15(n);
// }




// Q) To print the pattern
//                             *                 *
//                             * *             * *
//                             * * *         * * *
//                             * * * *     * * * *
//                             * * * * * * * * * *
//                             * * * *     * * * *
//                             * * *         * * *
//                             * *             * *
//                             *                 *

// #include<bits/stdc++.h>
// using namespace std; 
// void print20(int n){
//     int spaces = 2*n-2;
//     for(int i = 1; i<=2*n-1; i++){
//         //stars
//         int stars = i;
//         if(i>n) stars = 2*n-1;

//         for(int j=1; j<= stars; j++){
//             cout << "*";
//         }

//         //spaces:
//         for(int j=1; j<=spaces;j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=1; j<= stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//         if(i<n) spaces -= 2;
//         else spaces += 2;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print20(n);
// }




// Q) To print the pattern
// * * * *
// *     *
// *     *
// * * * *
// #include<bits/stdc++.h>
// using namespace std; 
// void print21(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==0 || j==0 || i == n-1 || j == n-1) {
//                 cout << "*";
//             }
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     print21(n);
// }




// Q) To print the pattern
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
#include<bits/stdc++.h>
using namespace std; 
void print22(int n){
    for(int i=0; i< 2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout << (n - min(min(top,down), min(left,right)));
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    print22(n); 
}
