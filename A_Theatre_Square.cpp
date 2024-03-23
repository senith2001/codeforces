#include<iostream>

long long count(long long m,long long n,long long a);

int main(){
    long long m,n,a;
    std::cin>> m>> n>> a;
    std::cout << count(m,n,a);
    return 0;
}

long long count(long long m,long long n,long long a){
    long long x=0,y=0;
    if(m%a != 0)
        x = m/a +1;
    else
        x = m/a;
    if(n%a != 0)
        y = n/a +1;
    else
        y = n/a;
    return x*y;
}