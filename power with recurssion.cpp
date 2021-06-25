#include <iostream>
using namespace std;
int power1(int base,int number){
    if(number>0){
            return (base*power1(base,number-1));


    } else if (number==0){
        return 1;
    }else{
        cout<<"Invalid input"<<endl;
        return 0;
    }
}
int power2(int base,int number){

    if(number>1){
        if (number % 2 == 1) return power2(base, (number+1)/2) * power2(base, number/2);

        else return power2(base,number/2) * power2(base,number/2);


    } else if (number==1){
        return base;
    }else{
        cout<<"Invalid input"<<endl;
        return 0;
    }
}
int main() {
int base,pow,result,final;
cout<<"pls Enter base number"<<endl;
cin>>base;
cout<<"pls enter power number"<<endl;
cin>>pow;
result=power1(base,pow);
final=power2(base,pow);
cout<<result<<endl;
cout<<final<<endl;
    return 0;
}
