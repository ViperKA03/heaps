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
    void deletefromHeap()
{
    arr[1] = arr[size];  // Replace root with the last element
    size--;              // Decrease heap size
    int ind = 1;

    while (ind < size)
    {
        int leftChild = 2 * ind;
        int rightChild = 2 * ind + 1;

        // Check if left child exists and is greater than current node
        if (leftChild < size && arr[ind] < arr[leftChild])
        {
            swap(arr[ind], arr[leftChild]);
            ind = leftChild;
        }
        // Check if right child exists and is greater than current node
        else if (rightChild < size && arr[ind] < arr[rightChild])
        {
            swap(arr[ind], arr[rightChild]);
            ind = rightChild;
        }
        else
        {
            return;  // Heap is restored
        }
    }
}


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
    h.insert(50);
    h.insert(53);
    h.insert(54);
    h.insert(52);
    h.print();
    cout<<" "<<endl;
    h.deletefromHeap();
    h.print();
    return 0;
}
