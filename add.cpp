#include <iostream>
using namespace std;
class sum
{
	private:
	int N,K,s=0,a[100];
	public:
	sum()
	{
		cin>>N;
		cin>>K;
	}
	void input()
	{
		for(int i=1;i<=N;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=K;j++)
		{
			s=s+a[j];
		}
		cout<<s;
	}
	
};

int main() {
	sum obj;
    obj.input();
	return 0;
}
