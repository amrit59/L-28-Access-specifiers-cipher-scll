#include<iostream>
using namespace std;
class Bank_client{
    public:

    string name;
    int credit_number;
    int cvv;
    string user_name;
    stirng password;

};

int main(){
Bank_client a,b,c;
a.name="Gagan";
a.passsword="Enjoyc++";
a.cvv=788;
a.credit_number=345676;
cout<<"The password of gagan is: "<<a.password;

return 0;
}
