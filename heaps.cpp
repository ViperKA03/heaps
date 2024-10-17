#include<iostream>
using namespace std;
class Heaps{
    int arr[100];
    int size;
    public:
    Heaps()
    {
        size=0;

    }
    void insert(int val)
    {
        size=size+1;
        arr[size]=val;

        int index=size;
        while(index>1)
        {
            
            if(arr[index]>arr[index/2])
            {
                swap(arr[index],arr[index/2]);
                index=index/2;
            }
            else
            return;
        }
    }
    // void deletefromHeap

    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Heaps h;
    h.insert(55);
    h.insert(5);
    h.insert(40);
    h.insert(32);
    h.print();
    return 0;
}
