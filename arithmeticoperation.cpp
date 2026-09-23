#include<iostream>
#include<conio.h>
using namespace std;

class space
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"\nX="<<x<<"\tY="<<y<<"\tZ="<<z;
		}
		 space operator +(space m)
		{
			space temp;
			temp.x=x+m.x;
			temp.y=y+m.y;
			temp.z=z+m.z;
			return (temp);
		}
	     space operator -(space m)
		{
			space temp;
			temp.x=x-m.x;
			temp.y=y-m.y;
			temp.z=z-m.z;
			return (temp);
		}
		space operator *(space m)
		{
			space temp;
			temp.x=x*m.x;
			temp.y=y*m.y;
			temp.z=z*m.z;
			return (temp);
		}

		space operator /(space m)
		{
			space temp;
			temp.x=x/m.x;
			temp.y=y/m.y;
			temp.z=z/m.z;
			return (temp);
		}
};
int main()
{
	int a,b,c;
	int A,B,C;
	space s1,s2,s3,s4,s5,s6;
	cout<<"Enter number 1 :";
	cin>>a;
	cout<<"Enter number 2 :";
	cin>>b;
	cout<<"Enter number 3 :";
	cin>>c;
	cout<<"Enter number 4 :";
	cin>>A;
	cout<<"Enter number 5 :";
	cin>>B;
	cout<<"Enter number 6 :";
	cin>>C;
	
	// s1.getdata(20,30,40);
	// s2.getdata(1,2,3);
	s1.getdata(a,b,c);
	s2.getdata(A,B,C);
	
	s1.display();
	s2.display();
	s3=s1+s2;
	cout<<"\nAddition :";
	s3.display();
       s4=s1-s2;
	cout<<"\nSubtraction :";
	s4.display();
	s5=s1+s2;
	cout<<"\nMultiplication :";
	s5.display();
	s6=s1+s2;
	cout<<"\nDivision :";
	s6.display();
	return 0;
}
/*OUTPUT:

X=20    Y=30    Z=40                                                            
X=1     Y=2     Z=3                                                             
Addition :                                                                      
X=21    Y=32    Z=43                                                            
Subtraction :                                                                   
X=19    Y=28    Z=37                                                            
Multiplication :                                                                
X=21    Y=32    Z=43                                                            
Division :                                                                      
X=21    Y=32    Z=43                                                            
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
