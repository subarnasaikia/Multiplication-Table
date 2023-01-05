#include <iostream>
using namespace std;


class Multiplication{
    public:
    int number;

    void Get_Number(){
        cout << "\nEnter a positive integer to generate multiplication table of that number: " ;
        cin >> number;
    }

    void Multiplication_table(){
        Get_Number();
        int n = number;
        printf("\nMultiplication table for %d \n", n);
        for(int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", n , i, (n*i));
        }
        char c;
        cout << "\nWanna generate more multiplication table(y/n): " ;
        cin >> c;
        (c == 'y' || c == 'Y') ? Multiplication_table() : exit(0) ;
    }

};
int main(){
    Multiplication ob;
    ob.Multiplication_table();
    return 0;
}