#include <iostream>
using namespace std;

class FE {
	private:
    int rollno;
	
	protected:
    float sub1, sub2, sub3;

	public:
    void setFEData(int rn,float s1, float s2, float s3) {
        rollno = rn;
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }

    float FeTotal() {
        return sub1 + sub2 + sub3;
    }
};

class SE : public FE {
	private:
    float SeSub1, SeSub2, SeSub3;

	public:
    void setSEData(float s1, float s2, float s3) {
        SeSub1 = s1;
        SeSub2 = s2;
        SeSub3 = s3;
    }
    
     float SeTotal() {
        return SeSub1 + SeSub2 + SeSub3;
    }

    float total() {
        return FeTotal() + SeTotal();
    }

    float percentage() {
        float per = total() / 6;
        return per;
    }
};

int main() {

    SE obj;

    obj.setFEData(101, 70, 80, 90);
    obj.setSEData(75, 85, 95);

    cout << "FE Total = " << obj.FeTotal() << endl;
    cout << "SE Total = " << obj.SeTotal() << endl;
    cout << "Total = " << obj.total() << endl;
    cout << "Percentage = " << obj.percentage()<< endl;

    return 0;
}