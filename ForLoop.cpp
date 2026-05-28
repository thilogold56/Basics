#include<iostream>
using namespace std;
int main()
{
	int low;
	cin>>low;
	int high;
	cin>>high;
	 int sum = 0;
        for(int i = low;i <= high;i++ )
        {
            sum = sum + i;
        }
        cout<<sum;
}
