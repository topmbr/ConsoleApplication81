#include <iostream> 

using namespace std;

void print_array(int* a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "  ";
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int* a;
    int n = 100;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    cout << "Сформированный массив:\n";
    print_array(a, n);
    cout << "Время работы = " << clock() / 1000.0 << endl;
    return 0;
}