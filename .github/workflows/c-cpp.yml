#include <iostream>
using namespace std;
          
void accept(int &, int[]);
void display(int, int[]);
void ascending(int, int[]);
void descending(int, int[]);
void swap(int &, int &);

int main()
{
    int n, arr1[10];

    accept(n, arr1);
    display(n, arr1);


    ascending(n, arr1);  
    descending(n, arr1);  

    int a, b;
    cout << "\nEnter two numbers to swap: ";
    cin >> a >> b;

    swap(a, b);

    cout << "After swap x = " << a << endl;
    cout << "After swap y = " << b << endl;

    return 0;
}



void accept(int &n, int arr[])
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void display(int n, int arr[])
{
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void ascending(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Ascending order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void descending(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Descending order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
