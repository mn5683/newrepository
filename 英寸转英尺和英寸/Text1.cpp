#include<iostream>
int main()
{
	using namespace std;
	const int Change=12;
	cout<<"please input your height in In:__\b\b";
	int in,ft;
    cin>>in;
	ft=in/Change;in=in%12;
	cout<<"your height in ft:__\b\b"<<ft<<"  ft  "<<"__\b\b"<<in;
	cout<<"  in"<<endl;
	return 0;

}
