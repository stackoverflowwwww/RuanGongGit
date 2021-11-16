#include<iostream>
#include<ctime>
using namespace std;

void display (){
	 for (int i = 0; i < 100; i++)
        cout << (rand() % 7)<< endl;
}

void trys (){
    cout << "hello world !" << endl;
}

int main()
{
    srand(time(0));
    cout << "随机生成一个0~7的整数" << endl;
    display();
    cout<< "--------" <<endl;
    trys();
    return 0;
}
