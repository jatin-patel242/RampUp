#include <iostream>
#include <fstream>
#include "projectmanagement.pb.h"

using namespace std;
int main()
{
    projectmanagement::Project project;
    project.set_title("BOSE");
    project.set_url("http://www.BOSE.com");
    
    //projectmanagement::Developer *developer = project.add_developer();
    //developer->set_first_name("ABC");
    //developer->set_last_name("XYZ");
    //developer->set_email("someone@example.com");
    
    cout << "Project: " << project.title() << endl;
    cout << "company URL: " << project.url() << endl;
    
    //cout << "First name: " << developer->first_name() << endl;
    //cout << "Last name: " << developer->last_name() << endl;
    //cout << "Email: " << developer->email() << endl;
    return 0;
}


