#include <iostream>
#include "Sample.pb.h"

using namespace std;

int main()
{       
        PERSON::Person p;
        p.set_name("AKM");
        p.set_id(101);
        p.set_email("ak@gmail.com");
        
        cout << "Name is " << p.name() << endl;
	cout << "Id is " << p.id() << endl;
	cout << "Email is " << p.email() << endl;
}
