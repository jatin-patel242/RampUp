#include <iostream>
#include <fstream>
#include "projectmanagement.pb.h"
#include "amit.h"

using namespace std;

void f1()
{
   std::cout << "f1() calling" <<std::endl;
   projectmanagement::Project project;
   projectmanagement::Developer *developer = project.add_developer();
   developer->set_first_name("Developer 1");
   cout << "First name: " << developer->first_name() << endl;
   
}

void f2()
{
   std::cout << "f2() calling" <<std::endl;
   projectmanagement::Project project;
   projectmanagement::Developer *developer = project.add_developer();
   developer->set_last_name("Developer 2");
   cout << "Last name: " << developer->last_name() << endl; 	
}


