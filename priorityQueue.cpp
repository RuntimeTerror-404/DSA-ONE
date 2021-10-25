#include <bits/stdc++.h>
using namespace std;

void max_heap(priority_queue<int> &nums)
{
    while (!nums.empty())
    {
        cout << nums.top() << endl;
        nums.pop();
    }
}

void min_heap()
{
    priority_queue<int> nums;
    nums.push(-5);
    nums.push(-18);
    nums.push(-13);
    nums.push(-2);
    while (!nums.empty())
    {
        cout << abs(nums.top()) << " ";
        nums.pop();
    }
}

void Kth_largest(priority_queue<int> &q, int k)
{
    int count = 0;
    while (!q.empty())
    {
        count += 1;
        if (count == k)
        {
            cout << q.top();
        }
        q.pop();
    }
}

void kth_smallest(priority_queue<int> &q, int k)
{
    int count = 0;
    while (!q.empty())
    {
        count += 1;
        if (count == (k + 1))
        {
            cout << q.top();
        }
        q.pop();
    }
}

int main()
{

    priority_queue<int> nums;
    nums.push(5);
    nums.push(18);
    nums.push(13);
    nums.push(2);
    max_heap(nums);
    min_heap();

    priority_queue<int> q;
    q.push(20);
    q.push(10);
    q.push(60);
    q.push(30);
    q.push(50);
    q.push(40);
    cout << endl;
    cout << endl;
    // Kth_largest(q, 3);
    // cout<<endl;
    kth_smallest(q, 3);
}