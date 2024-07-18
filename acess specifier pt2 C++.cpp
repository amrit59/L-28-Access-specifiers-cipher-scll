#include<iostream>
using namespace std;
class Bank_client{
    private:

    string name;
    int credit_number;
    int cvv;
    string user_name;
    string password;

    public:
    string name;


    void set_credit_card_number(int number){ 
        credit_number = number;
    }
    void get_creditcardnumber(){
        cout<<"The card number is "<<credit_number
    }

};

int main(){
Bank_client a,b,c;
a.name="Amrit";
a.set_credit_card_number(78645);
a.get_creditcardnumber();
return 0;
}
