#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<int> pq;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }

    // pq.push(5);
    // pq.push(7);
    // pq.push(3);
    // pq.push(4);
    // pq.push(1);
    // pq.push(9);

    // pq.pop();

    // cout<<pq.top()<<endl;
    // cout<<"Size"<< pq.size()<<endl;

    // if(!pq.empty()){
    //     cout<<pq.size()<<endl;
    // }
    // else{
    //     cout<<"Empty"<<endl;
    // }

    while (!pq.empty())
    {
        int values = pq.top();

        pq.pop();
        cout << values << " ";
    }

    cout << endl;

    return 0;
}