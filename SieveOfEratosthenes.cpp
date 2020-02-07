using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int MAX =10010;
    vector<bool> is_prime(MAX, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAX; i++)
    {
        if (!is_prime[i])
            continue;
        for (int j = i * 2; j < MAX; j += i)
        {
            is_prime[j] = false;
        }
    }
    while (true)
    {
        cout << "0から10000の内で好きな数を入力してください." << endl;
        long long num;
        cin >> num;
        if (num > 10000 || num < 0)
        {
            cout << "適当な値を入力してください." << endl;
        }
        else
        {
            if (is_prime[num])
            {
                cout << num << "は素数です." << endl;
            }
            else
            {
                cout << num << "は素数ではありません." << endl;
            }
        }
    }
}