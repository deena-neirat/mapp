#include <iostream>
using namespace std;

int main()
{
	/*
	* Q2
		int r;
	cout << "please enter number of rows" << endl;
	cin >> r;

	for (int x = 0; x < r; x++) {
		for (int i = 0; i < r-x; i++) {
			cout << "*";
		}
		cout << endl;
		}
	
	*/

    /*
    * 
    Q1
     int r;
     cout<<"please enter number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            if (j == 1 || j == i || i == r)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    */
   
   /*
   Q4

    int c , i ,x;
    int arr[100];

    cout<<"Enter Number of Elements in Array "<<endl;
    cin >> c;

    cout << "enter number in array" << endl;
        for ( i = 0; i < c; i++) {
        cin >> arr[i];
    }

    cout << "please enter number to search about" << endl;
    cin >> x;

    for ( i = 0; i < c; i++) {
        if (arr[i] == x) {
            cout <<"Element found at index " <<  i  << endl;
            break;
        }
    }

    if (i == c) {
        cout << "Element Not found in Array\n";
    }
 
   */
   
    /*
    //Q3

    int c1 = 0;
    int c2 = 0;
    int arr[100];
    int n;

    cout << "enter the size of array" << endl;
    cin >> n;

    cout << "enter the " << n << " number to array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            c1++;
        }
        else
            c2++;

    }

    cout << "Total even elements:" << c1 << endl;
    cout << "Total odd elements:" << c2 << endl;
    
    */

/*
Q5
int arr[100];
int arr1[100];

int n;

cout << "enter the size of array" << endl;
cin >> n;

cout << "Input " << n << " array1 elements:" << endl;
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
for (int i = 0; i < n; i++) {
    arr1[i] = arr[i];
}

cout << "array1 is :" << endl;

for (int i = 0; i < n; i++) {
    cout << arr[i];
    }
cout << endl;

cout << "array2 is :" << endl;

for (int i = 0; i < n; i++) {
    cout << arr1[i];
}
cout << endl;
*/

    /*
    Q6
    int arr[100];
int n;

cout << "enter the size of array" << endl;
cin >> n;

cout << "enter the " << n << " number to array" << endl;
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
for (int i = 0; i < n; i++) {
    int c = 0;
    for (int j = 0; j < n; j++) {
        if (arr[i] == arr[j])
            c++;
    }
    if (c == 1) {
        cout << arr[i] << " ";
    }
}

    */

/*
Q7
int arr[5];
int arr1[5];
int arr3[10];
for (int i = 0; i < 5; i++) {
    cin >> arr[i];
    arr3[i] = arr[i];
}
int position = 5;
for (int i = 0; i < 5; i++) {
    cin >>arr1[i];
    arr3[position] = arr1[i];
    position++;
}
for (int i = 0; i < 10; i++) {
    cout << arr3[i] << " ";
}
for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        if (arr3[j] > arr3[j + 1]) {
            int t = arr3[j];
            arr3[j] = arr3[j + 1];
            arr3[j + 1] = t;
        }
    }
}
cout << endl;
cout << "the sorted array" << endl;
for (int i=0; i < 10; i++) {
    cout << arr3[i] << " ";
}
*/


    
/*
* //b1
int i, j, r;
cout<<"Enter number of rows : "<<endl;;
cin >> r;
for (i = 1; i <= r; i++)
{
    for (j = i; j < r; j++)
    {
        cout << " ";
    }
    for (j = 1; j <= (2 * i - 1); j++)
    {
        cout << "*";
    }
    cout << endl;
}
*/



int i, j, r;

cout << "Enter the number of rows" << endl;;
cin >> r;

for (i = 0; i < r; i++) {

    for (j = 0; j < r-1-i; j++) {
        cout<<" ";
    }


    for (j = 0; j < r; j++) {
        cout << "*";
    }

    cout << endl;
}




}
	



