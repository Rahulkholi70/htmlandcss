#include<iostream>
using namespace std;

class Parent
{
	// protected data members
	protected:
	int EM_pass;

	public :
	int MOB_num ;
	void getData() {
		cout<< "MOBILE NUMBER IS : "<<MOB_num <<endl ;
	}
};

// sub class or derived class from public base class
class Child : public Parent
{
	public:
	void setPASS(int id)
	{ //  Child class is able to access the inherited
		EM_pass = id;
	}
	void displayId()
	{
		cout << "Email password is: " << EM_pass << endl;
	}
};
int main() {
	
	Child obj1;
	Parent obj2;
	int number ;

	cout << "Press '0' to access mobile number or '1' to access Email password :"<<endl;
	cin >> number; 
	// member function of the derived class can access the protected data members
	// obj1.setPASS();
	// obj1.displayId();
	// obj2.MOB_num = 70781017;
	// cout << "Mobile Number is :" << obj2.MOB_num<< endl;
	// obj2.getData();
	if ( number == 1){
	obj2.MOB_num = 70781017;
	obj2.getData();
	}
	else if (number ==0){
		obj1.setPASS(512627);
	    obj1.displayId();
	}
	else {
		cout<< " Wrong number input "<<endl;
	}
	return 0;
}
