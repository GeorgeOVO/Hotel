#include <iostream>
#include "room.h"
using namespace std;

Room::Room(int id,int type,int price):id(id),type(type),price(price)
{
	cnt = 0;
	g = new Guest[type];
}

Room::~Room(void)
{
	delete g;
}

void Room::check_in(const Guest& g)
{
	if(cnt < type)
	{
		this->g[cnt++] = g;
		return;
	}
	else
	{
		cout << "房间已满!" << endl;
		return;
	}
}

void Room::check_out(const Guest& g)
{
	
}

ostream& operator<<(ostream& os,const Room& r)
{
	os << "房号：" << r.id << endl;
	os << "房型：" << r.type << endl;
	os << "房价：" << r.price << endl;
	os << "入住数：" << r.cnt << endl;
	os << "房客信息："
	for(int i=0; i<r.type; i++)
	{
		os << r.g[i] << endl;
	}
}
