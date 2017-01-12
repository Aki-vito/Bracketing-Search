#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){ 
	srand ((unsigned)time(0));
	int x;
	float a;
	for(int i = 0;i < 1;i++){
		x = (rand()%10)+1;
		cout << "Guess the number correctly from 1 to 10" << endl;
    cout << x << endl;
		}
	cin >> a;
	do{
		
		if(a > x){
			cout << "too big" << endl;
			cin >> a;
		}else if(a < x){
			cout << "Too small" << endl;
			cin >> a;
		}
	 	if(a == x){
			cout << "You are right,The x is : " << x << endl;
			exit(1);
		}



	}while(true);

	return 0;
}
