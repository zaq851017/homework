#include "0416245_vector3.h"
#include<iostream>
#include<math.h>
using namespace std;
vector3::vector3(float inX, float inY, float inZ):x(inX),y(inY),z(inZ)
{ }

vector3::vector3(const vector3 &v)
{
	x=v.x;
	y=v.y;
	z=v.z;
}

float  &vector3::operator [] (unsigned int index)
{
	if(index==0) return x;
	else if(index==1) return y;
	else if(index==2) return z;
}

const float  &vector3::operator [] (unsigned int index) const
{
	if(index==0) return x;
	else if(index==1) return y;
	else if(index==2) return z;
}

vector3   &vector3::operator = (const vector3 &v)
{
	x=v.x;
	y=v.y;
	z=v.z;
	return *this;
}

vector3   &vector3::operator += (const vector3 &v)
{
	x=x+v.x;
	y=y+v.y;
	z=z+v.z;
	return *this;
}

vector3   &vector3::operator -= (const vector3 &v)
{
	x=x-v.x;
	y=y-v.y;
	z=z-v.z;
	return *this;
}

vector3 &vector3::operator *= (float f)
{	
	x=x*f;
	y=y*f;
	z=z*f;
	return *this;
}

vector3 &vector3::operator /= (float f)
{	
	x=x/f;
	y=y/f;
	z=z/f;
	return *this;
}

bool operator == (const vector3 &a, const vector3 &b)
{
	if(a.x==b.x&&a.y==b.y&&a.z==b.z) return true;
	else return false;
}

bool operator != (const vector3 &a, const vector3 &b)
{
	if(a.x!=b.x||a.y!=b.y||a.z==b.z) return true;
	else return false;
}

vector3     operator - (const vector3 &a)
{
 return vector3(-a.x,-a.y,-a.z);
}

vector3 operator + (const vector3 &a, const vector3 &b)
{
	return vector3(a.x+b.x,a.y+b.y,a.z+b.z);
}

vector3 operator - (const vector3 &a, const vector3 &b)
{
	return vector3(a.x-b.x,a.y-b.y,a.z-b.z);
}

vector3 operator * (const vector3 &v, float f)
{
	return vector3((v.x)*f,(v.y)*f,(v.z)*f);
}

vector3 operator * (float f, const vector3 &v)
{
	return vector3((v.x)*f,(v.y)*f,(v.z)*f);
}

vector3 operator / (const vector3 &v, float f)
{
	return vector3((v.x)/f,(v.y)/f,(v.z)/f);
}

void vector3::set(float xIn, float yIn, float zIn)
{
	x=xIn;
	y=yIn;
	z=zIn;
}

float vector3::length() const
{
	return sqrt((x*x)+(y*y)+(z*z));
}

void vector3::printVector3() const
{
	cout<<x<<" "<<y<<" "<<z;
}
