#include <iostream>
using namespace std;
int main()
{
    int books, fine, days;
    cout << "Enter the number of books returned late: ";
    cin >> books;
    for (int i = 1; i <= books; i++)
    {
        cout << "Enter the Number of Days the book " << i << " is late: ";
        cin >> days;
        fine = 5;
        for (int j = 1; j <= days; j++)
        {
            if (fine >= 1000)
            {
                fine = 1000;
                break;
            }
            else
            {
                fine = fine * 2;
            }
        }
        cout << "Book " << i << " fine= " << fine << endl;
    }

    return 0;
}