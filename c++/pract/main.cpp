#include <iostream>

using namespace std;

class emp{
    public:
        int sno;
        string name;
        long phn;
};

int main()
{
    emp emp1,emp2;
    emp1.sno=1;
    emp1.name="shaik";
    cin>>emp1.phn;

    emp2.sno=2;
    emp2.name="dfjszk";
    emp2.phn=798134913;

    cout<<emp1.phn;

    return 0;
}
