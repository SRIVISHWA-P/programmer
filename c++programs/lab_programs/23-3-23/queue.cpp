#include <iostream>
#include <queue>
using namespace std;
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

int main()
{
	queue<int> nums;
	nums.push(10);
	nums.push(20);
	nums.push(30);

	cout << "The queue nums is : ";
	showq(nums);

	cout << "\nnmums.size() : " << nums.size();
	cout << "\nnums.front() : " << nums.front();
	cout << "\nnums.back() : " << nums.back();

	cout << "\nnums.pop() : ";
	nums.pop();
	showq(nums);

	return 0;
}
