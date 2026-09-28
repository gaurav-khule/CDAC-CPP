#include<iostream>
using namespace std;

class FY{
	private:
		int rollno;
		string name;
		int phy, chem, math;

	public:
		void setFeData(){
			cout << "Enter rollno & name: ";
			cin >> rollno >> name;

			cout << "Enter Phy, Chem, Math marks: ";
			cin >> phy >> chem >> math;
		}

		int getPhy(){
			return phy;
		}

		int getChem(){
			return chem;
		}

		int getMath(){
			return math;
		}
};

class SE{
	private:
		int C, CPP, DBMS;

	public:
		void setSeData(){
			cout << "Enter C, CPP, DBMS marks: ";
			cin >> C >> CPP >> DBMS;
		}

		int getC(){
			return C;
		}

		int getCPP(){
			return CPP;
		}

		int getDBMS(){
			return DBMS;
		}
};

class TY : public FY, public SE{
	private:
		int java, web, msnet;
		float total;
		float per;

	public:
		void setTyData(){
			cout << "Enter Java, Web, MSNET marks: ";
			cin >> java >> web >> msnet;
		}

		void calculate(){
			total = getPhy() + getChem() + getMath()
			      + getC() + getCPP() + getDBMS()
			      + java + web + msnet;

			per = total / 9;
		}

		void display(){
			cout << "\nTotal Marks: " << total << endl;
			cout << "Percentage: " << per << "%" << endl;
		}
};

int main(){
	TY obj;

	obj.setFeData();
	obj.setSeData();
	obj.setTyData();

	obj.calculate();
	obj.display();

	return 0;
}