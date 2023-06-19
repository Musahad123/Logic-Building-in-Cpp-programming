#include<iostream>
using namespace std;

// Problems on Numbers

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void Function()     // Here you want to place the function with business logic
        {
            // Logic
            for(int i =0; i <= iNo; i++){
                cout<<" "<<endl;
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Function();

    return 0;
}