#include<iostream>
using namespace std;
#include<string>

struct teacher {
	string name;
	struct student s[5];
};
struct student {
	string name;
	int score;
};
void cin0(struct teacher t[], int l)
{
	for (int i = 0;i < l;i++) {
	t[0].name =
	
	}

}
int main() {
	struct teacher t[2];
	int len =sizeof(t)/sizeof(t[0]);
	cin0(t,len);

}