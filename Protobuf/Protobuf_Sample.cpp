#include <iostream>
#include <fstream>
#include "projectmanagement.pb.h"
#include "amit.h"

using namespace std;
int main()
{
    projectmanagement::Project project;
    project.set_title("BOSE");
    project.set_url("http://www.bose.com");
    
    f1();
    f2();
    
    projectmanagement::Developer *developer = project.add_developer();

    developer->set_email("developer@bose.com");
    
    cout << "Project: " << project.title() << endl;
    cout << "company URL: " << project.url() << endl;
    cout << "Email: " << developer->email() << endl;
    return 0;
}
