#include<iostream>
#include<string>
using namespace std;
struct student {
	string sname;
	
};
struct teacher {
	string name;
	struct student s[5];
};
void allocatespace(struct teacher arry[],int len) {


}
int main() {
	struct teacher arry[3];
	allocatespace(arry, 4);






}