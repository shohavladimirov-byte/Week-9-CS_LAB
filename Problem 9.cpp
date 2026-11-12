/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int q=n;
    int new_n=0;
    while (n>0){
        new_n*=10;
        new_n+=n%10;
        n=n/10;
    }
    if (new_n==q){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int sum=0;
    while(n>=0){
        if (isPalindrome(n)){
            sum+=n;
        }
        else {sum+=0;}
        n--;
    }
    cout << sum << endl;
    
}
