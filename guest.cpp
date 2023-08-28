#include <iostream>
#include "guest.h"
#include <cstring>
using namespace std;

Guest::Guest(string name,char sex,string id):name(name),sex(sex),id(id){}

void Guest::show_guest(void)const
{
	cout << "姓名：" << name << " " << "性别：" << sex << " " << "身份证号：" << id << endl; 
}

ostream& operator<<(ostream& os,const Guest& g)
{
	os << "姓名：" << g.name << " " << "性别：" << g.sex << " " << "身份证号：" << g.id << endl; 
}
