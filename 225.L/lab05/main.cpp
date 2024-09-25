#include <iostream>
using namespace std;

void case1();
int main()
{
    int row;
    cout<<"Enter number of rows you want to enter: " << endl;
    cin>>row;
    int tempArray[row];
    for(int i=0;i<row;i++) {
        cout<<"Enter number of columns in each row you want to enter: " << i+1 << endl;
        cin>>tempArray[i];
    }
    int** ptr = new int*[row];
    for(int i=0;i<row;i++) {
       ptr[i] = new int[tempArray[i]];
    }
    for(int i=0;i<row;i++) {
        for (int j=0; j<tempArray[i]; j++ ) {
            cout<< "Row " << i+1 << "Column " << j+1 << endl;
            cin>>ptr[i][j];
        }
    }

    for(int i=0;i<row;i++) {
        for (int j=0; j<tempArray[i]; j++ ) {
            cout<<ptr[i][j]<< " ";
        }
        cout<<endl;
    }
}
