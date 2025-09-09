//  Update the '_' in the code below to solve the problem
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        //Declare a new variable to store the 5 seater capacity
        int five_seat_capacity = N * 5;
        //Declare a new variable to store the 7 seater capacity
        int seven_seat_capacity = M * 7;
        //Print the desired output for each test case
        cout << five_seat_capacity + seven_seat_capacity << endl;
    }
    return 0;
}