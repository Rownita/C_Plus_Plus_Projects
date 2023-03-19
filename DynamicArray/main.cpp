
#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    dynArr obj1;
    dynArr obj2(5);

    int i,value=0;
    cout<<"Insert 5 values:"<<endl;
    for(i=0;i<5;i++){
        cout<<"Insert "<<i+1<<"th value:";
        cin>>value;
        obj2.setValue(i,value);


    }

    cout<<"Displaying values:"<<endl;
    for(i=0;i<5;i++){

        cout<<obj2.getValue(i)<<endl;

    }
    cout<<"After resizing the array"<<endl;
    obj2.allocate(10);
    for(i=0;i<10;i++){

        cout<<"Insert"<<i+1<<"th value:";
        cin>>value;
        obj2.setValue(i,value);


    }
    cout<<"Displaying values:"<<endl;
    for(i=0;i<10;i++){

       cout<<obj2.getValue(i)<<endl;

    }
}
