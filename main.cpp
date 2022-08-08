#include <iostream>
using namespace std;

int main()
{
    int input;
    cout<< "Input number"<<endl;
    cin >> input;
    int count = 0;
    int num = 1;
    while (num <= input) {
        if (input % num == 0){
            count= count + num;

    }
    num=num +1;
    }
cout<< "the sum of it primes is "<<count<<endl;
    return 0;
}

/* I Emmanuel Osei Bonsu Appiah, I certify that i did this assignment.*/
