#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    // Insertion in Heap Sort

    void insert(int val)
    {
        size += 1;
        int index = size;

        arr[index] = val;

        while (index > 1 && arr[index] > arr[index / 2])
        {
            int parent = index / 2;
            swap(arr[parent], arr[index]);
            index = parent;
        }
    }

    //Deletion of root element from the heap

    void deleteFromHeap()
    {
        if (size == 0)
            return;

        arr[1] = arr[size];
        size--;

        int i = 1;

        while (i <= size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            int largest = i;

            if (leftIndex <= size && arr[leftIndex] > arr[largest])
            {
                largest = leftIndex;
            }

            if (rightIndex <= size && arr[rightIndex] > arr[largest])
            {
                largest = rightIndex;
            }

            if (largest != i)
            {
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else
            {
                return;
            }
        }
    }

    //Heapify Function

    void heapify(int arr[], int n, int i){

        int largest = i;
        int left = 2*i;
        int right = 2*i + 1;

        if (left < n && arr[largest] < arr[left]){
            largest = left;
        } if (right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if (largest != i){
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(20);
    h.insert(55);
    h.insert(43);
    h.insert(19);
    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    for(int i=n/2; i>0; i--) {
        h.heapify(arr, n, i);
    }

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    } 

    cout<<endl;

    return 0;
}