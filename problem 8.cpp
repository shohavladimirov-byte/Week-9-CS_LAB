#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int q = 1;
    int c = 0;
    int max_c = 0;
    while (n>0){
        if (n%10 == 0 and n>9){
            q*=1;
        }
        else{q*=n%10;}
        n=n/10;
        c = n%10;
        if (c>max_c){
            max_c=c;
        }
    }
    cout << q << ' ' << max_c <<endl;
    return 0;
}
