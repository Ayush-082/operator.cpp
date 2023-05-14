#include<iostream>
using namespace std;
class ayu;
class ayush
{
	public:
	int i,n;
	ayush(int i,int n)
	{
      this->i=i;
	  this->n=n;  		
	}
	void show()
	{
		cout<<i<<","<<n<<endl;
	}
void show(int i)
{
	cout<<"the new value of sum  is"<<endl;
}
void operator-()
{
	i=-i;
	n=-n;
}
protected:
void sh()
{
	cout<<"sum is"<<"="<<i+n<<endl;
}
friend class ayu;
friend void s(ayush o);
};
class ayu
{
	public:
	void sum(ayush i)
	{
	i.sh();
}
};
void s(ayush o)
{
  o.operator-();
}
int main()
{
	ayush obj(9,8);
	ayu o;
	obj.show();
	o.sum(obj);
	obj.show(9);
	-obj;
     s(obj);
	//obj.show();
	o.sum(obj);
	return 0;
}
