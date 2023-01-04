#include<iostream>
using namespace std;
class Basic_Info
{
	public:
		string name,gender;
		int rollno;
		void getdata()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"enter roll no:";
			cin>>rollno;
			cout<<"enter gender:";
			cin>>gender;
		}
		void display()
		{
		    cout<<rollno<<","<<name<<","<<gender<<",";
		}
};
class Physical_Fit
{
	public:
	int height,weight;
	void getdata()
	{
		 cout<<"enter height:";
		 cin>>height;
		 cout<<"enter weight:";
		 cin>>weight;
	}
	void display()
	{
		 cout<<height<<","<<weight;
	}
};

int main()
{
	Basic_Info obj1,obj2;
	Physical_Fit S1,S2;

	obj1.getdata();
	S1.getdata();
	obj2.getdata();
	S2.getdata();
	cout<<endl;
	obj1.display();
	S1.display();
	cout<<endl;
	obj2.display();
	S2.display();
	return 0;
}
