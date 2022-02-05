#include<iostream>
using namespace std;
class FeetInches{
	private:
		int feet;
		double inches;
	public:
		FeetInches operator +(FeetInches obj2){
			FeetInches temp1;
			temp1.feet=feet+obj2.feet;
			temp1.inches=inches+obj2.inches;
			return temp1;
		}
		FeetInches operator *(FeetInches obj2){
			FeetInches temp2;
			temp2.feet=feet*obj2.feet;
			temp2.inches=inches*obj2.inches;
			return temp2;
		}
		FeetInches operator >=(FeetInches obj2){
			FeetInches temp3;
			if(feet>=obj2.feet && inches>=obj2.inches){
				cout<<feet<<" feet "<<inches<<" inches is not greater than or equal to "<<obj2.feet<<" feet "<<obj2.inches<<" inches.";
			}
		
		}
		FeetInches operator !=(FeetInches obj2){
			FeetInches temp4;
		}
		void convert(){
			int feet1,inches1;
			if(inches>=12){
				feet1=inches/12;
				feet+=feet1;
				inches1=inches/12;
				inches=inches1;
			}
		}
		void setfunction(){
			cout<<"Enter Length in Feet and Inches:\n\n";
			cout<<"Feet     : ";
			cin>>feet;
			cout<<"Inches   : ";
			cin>>inches;
		}
		void getfunction(FeetInches obj1,FeetInches obj2){
			cout<<obj1.feet<<" feet, "<<obj1.inches<<" inches sum, "<<obj2.feet<<" feet, "<<obj2.inches<<" inches is "<<feet<<" feet "<<inches<<" inches.";
		}
};
main(){
	FeetInches obj1,obj2,obj3;
	obj1.setfunction();
	cout<<endl;
	obj2.setfunction();
	obj3=obj1+obj2;
	obj3.convert();
	cout<<endl;
	obj3.getfunction(obj1,obj2);
	obj3=obj1*obj2;
	cout<<endl;
	obj3.getfunction(obj1,obj2);
}
