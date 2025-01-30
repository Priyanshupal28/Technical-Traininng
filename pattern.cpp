#include <bits/stdc++.h>
using namespace std;

/* Pattern 1 (Butterfly Pattern)   *               *
                                   * *           * *
                                   * * *       * * *
                                   * * * *   * * * *
                                   * * * * * * * * *
                                   * * * *   * * * *
                                   * * *       * * *
                                   * *           * *
                                   *               *
*/


void pattern_1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(j<=i||j>=2*n-2-i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(j<n-i-1||j>=n+i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}


/* Pattern 2 (Alphabet Pattern)  A        A
                                 AB      BA
                                 ABC    CBA
                                 ABCD  DCBA
                                 ABCDEEDCBA
*/

void pattern_2(int n)
{
    for(int i=0;i<n;i++)
    {
        char c='A'-1;
        for(int j=0;j<2*n;j++)
        {
            if(j<=i) cout<<++c;
            else if(j>=2*n-i-1) cout<<c--;
            else cout<<" ";
        }
        cout<<"\n";
    }
}


/*Pattern 3 (Hourglass Pattern)   A B C D E F G H I
                                    A B C D E F G
                                      A B C D E
                                        A B C
                                          A
                                        A B C
                                      A B C D E
                                    A B C D E F G
                                  A B C D E F G H I
*/

void pattern_3(int n)
{
    for(int i=0;i<n;i++)
    {
        char c='@';
        for(int sp=0;sp<i;sp++)
        {
            cout<<"  ";
        }
        for(int j=0;j<2*n-2*i-1;j++)
        {
            cout<<++c<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++)
    {
        char c='@';
        for(int sp=0;sp<n-i-2;sp++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=2*i+2;j++)
        {
            cout<<++c<<" ";
        }
        cout<<"\n";
    }
}


/* Pattern 4 (Hollow Square Pattern)  1 2 3 4 5
                                      1       5
                                      1       5
                                      1       5
                                      1 2 3 4 5
*/

void pattern_4(int n)
{
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(j==1||j==n||i==1||i==n) cout<<j<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}


/*Pattern 5 (Hollow Hourglass Pattern)   A B C D E F G H I
                                           A           G
                                             A       E
                                               A   C
                                                 A
                                               A   C
                                             A       E
                                           A           G
                                         A B C D E F G H I
*/

void pattern_5(int n)
{
    for(int i=0;i<n;i++)
    {
        char c='@';
        for(int sp=0;sp<i;sp++)
        {
            cout<<"  ";
        }
        for(int j=0;j<2*n-i-1;j++)
        {
            ++c;
            if(i==0||j==0||j==2*n-2*i-2) cout<<c<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++)
    {
        char c='@';
        for(int sp=0;sp<n-i-2;sp++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=2*i+2;j++)
        {
            ++c;
            if(j==0||j==2*i+2||i==n-2) cout<<c<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}


/* Pattern 6 (Pascal's Triangle)     1
                                   1   1
                                 1   2   1
                               1   3   3   1
                             1   4   6   4   1
*/

void pattern_6(int n)
{
    for(int i=0;i<n;i++)
    {
        int num=1;
        for(int sp=0;sp<n-i-1;sp++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<num<<"   ";
            num=num*(i-j)/(j+1);
        }
        cout<<"\n";
    }
}


/* Pattern 7 *
             **
             ***
                *
                **
                ***
                   *
                   **
                   ***
*/

void pattern_7(int n)
{
    for(int i=0;i<3*n;i++)
    {
        for(int sp=0;sp<(i/3)*3;sp++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i%3;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}


/* Pattern 8    5 5 5 5 5 5 5 5 5
                5 4 4 4 4 4 4 4 5
                5 4 3 3 3 3 3 4 5
                5 4 3 2 2 2 3 4 5
                5 4 3 2 1 2 3 4 5
                5 4 3 2 2 2 3 4 5
                5 4 3 3 3 3 3 4 5 
                5 4 4 4 4 4 4 4 5
                5 5 5 5 5 5 5 5 5
*/

void pattern_8(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int mini=min({i,j,2*n-2-i,2*n-2-j});
            cout<<n-mini<<" ";
        }
        cout<<"\n";
    }
}

/* Pattern 9   *****         *****
                 ****       ****
                   ***     ***
                     **   **
                       * *
                     **   **
                   ***     ***
                 ****       ****
               *****         *****
*/

void pattern_9(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int sp=0;sp<2*i;sp++)
        {
            cout<<" ";
        }
        for(int j=0;j<4*n-4*i-1;j++)
        {
            if(j<n-i||j>3*n-3*i-2) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++)
    {
        for(int sp=0;sp<2*n-2*i-4;sp++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n+4*i-3;j++)
        {
            if(j<n+i-3||j>=n+3*i) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}


/* Pattern_10.  21 22 23 24 25
                20  7  8  9 10
                19  6  1  2 11
                18  5  4  3 12
                17 16 15 14 13
*/

void pattern_10(int n) {
    int matrix[5][5] = {0};
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        int num = ((n * n - n) + 1);
        int num2 = (n - 2) * (n - 2) + 1;


        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;


        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num2++;
        }
        right--;


        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num2++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num2++;
            }
            left++;
        }

        n -= 2;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
}



int main()
{
    pattern_9(5);
    return 0;
}