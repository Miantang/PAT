#include <iostream>
#include <fstream>
#include <string>
#define min(A, B) (A<B)?A:B

using namespace std;

bool cmp(int *A, int *B, int& n)
{
    for(int i = 0; i < n; ++i)
    {
        if(A[i] == B[i])
            continue;
        else
            return false;
    }
    return true;
}
void insertSort2(int *A, int& n, int& i, int* CMP, bool once)
{
    for (int j = i; j > 0; j--) 
    {
        if(A[j] < A[j-1])
        {
            swap(A[j], A[j-1]);
        }
        else
            break;
    }
    if(once)
        return;
    if(cmp(A, CMP, n))
        return;
    i++;
    if(i >= n)
    {
        return;
    }
    // insertSort2(A, n, i);
}
void merge(int* A, int first, int mid, int end, int* B)
{
    // for(int i = mid + 1; i > first; i--)
    //     B[i-1] = A[i-1];
    // for(int j = mid; j < end; ++j)
    //     B[end+mid-j] = A[j+1];
    // for(int k = first; k <= end; ++k)
    // {
    //    if(B[j] < B[i])
    //         A[k] = B[j--];
    //     else
    //         A[k] = B[i++]; 
    // }
    int i = first, j = mid+1;
    for (int k = first; k <= end; ++k) 
        B[k] = A[k];
    for (int k = first; k <= end; ++k) 
    {
        if(i > mid)         A[k] = B[j++];
        else if(j > end)    A[k] = B[i++];
        else if(B[i] < B[j])    A[k] = B[i++];
        else                A[k] = B[j++];
    }
}
void mergeSort(int *A, int& n, int *B/*, int first, int mid, int end, int* CMP, bool once*/)
{
    for(int sz = 1; sz <= n-1; sz = sz+sz)
    {
        for(int i = 0; i < n -sz; i += sz+sz)
        {
            merge(A, i, i+sz-1, min(i+sz+sz-1, n-1), B);
        }
    }

}
int main() {
    #ifndef ONLINE_JUDGE
        // ifstream cin("i.txt");
        // ofstream cout("o.txt");
        freopen("i.txt", "r", stdin);
        freopen("o.txt", "w", stdout);
    #endif
    int N;
    scanf("%d", &N);
    int arr[N], B[N], CMP[N];
    for (int i = 0; i < N; ++i) 
        scanf("%d", &arr[i]);
    int insOrder = 1;
    if(N != 1)
        // insertSort2(arr, N, insOrder);
        mergeSort(arr, N,  B);
    for (int i = 0; i < N; ++i) 
    {
        if(i != 0)
            printf(" ");
        printf("%d", arr[i]);
    }
    
    return 0;
}
