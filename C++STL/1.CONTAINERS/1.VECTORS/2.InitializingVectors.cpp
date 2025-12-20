// Other methods to initialize vectors : 


// METHOD 1 : 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};
    // creates a vector of these elements.
}




// METHOD 2 : 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec(3,10); //{10,10,10}
    // creates a vector of size 3 elements of value 10.
    // IMPORTANT FOR DYNAMIC PROGRAMMING.
}




// METHOD 3 : 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec1 = {1,2,3,4,5};
    vector<int> vec2(vec1);
    // copies the elements of vector 1 to vector 2.
}