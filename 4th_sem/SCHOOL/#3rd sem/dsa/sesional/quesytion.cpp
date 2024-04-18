#include <bits/stdc++.h>
#include<iostream>
using namespace std;

queue<int> mix(queue<int> q,queue<int> q1,queue<int> q2)
{
	int size = q.size();

	for (int i = 0; i < size/2; i++) {
		q1.push(q.front());
		q.pop();
	}
    for (int i = 0; i < size/2; i++) {
		q2.push(q.front());
		q.pop();
	}

    for(int i=0; i<size/2;i++)
    {
        q.push(q1.front());
        q1.pop();
        q.push(q2.front());
        q2.pop();
    }

    return q;
}


int main()
{
	queue<int> q,q1,q2;
	q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);

    q=mix(q,q1,q2);


	int size = q.size();

	for (int i = 0; i < size; i++) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}