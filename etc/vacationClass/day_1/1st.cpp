#include <iostream>

using namespace std;

#define MAX 100001
#define MAXNUM 100001

void prepare(int pre[], int arr[], int Num)
{
    int i;
    for (i = 0; i < Num; i++)
    {
        pre[arr[i]] = 1;
    }
}

int find(int pre[], int T)
{
    return pre[T];
}

int main()
{
    int A[MAX], size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
    int num, size2;
    cin >> size2;

    int pre[MAXNUM] = {0};
    prepare(pre, A, size);

    for (int i = 0; i < size2; i++)
    {
        cin >> num;
        if (find(pre, num) == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}