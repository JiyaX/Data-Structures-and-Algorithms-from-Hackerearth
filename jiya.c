#include <iostream>

using namespace std;

int main() {

//print numbers in an array in reverse order
int myarray[1000];

int size;
cin >> size;

for (int i = 0; i<size; i++)
{
    cin >> myarray[i];
}

for (int i = size - 1; i >=0; i--)
{
    cout << myarray[i]<<endl;
}

return 0;

}
