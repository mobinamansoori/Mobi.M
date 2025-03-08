#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void get ( string g[] , int l )
{
    cout << " enter 5 names : " << endl ;
    for ( int i = 0 ; i < l ; i ++ )
    {
        cout << "please capitalize the first letter of the name ! " << endl ;
        cin >> g[i] ;
    }
}
int srt ( string g[] , int l )
{
    string tmp ;
    for ( int i = 0 ; i < l ; i ++ )
    {
        for ( int j = i+1 ; j < l ; j ++ )
        {
            if ( g[i] > g[j] )
            {
                tmp = g[i] ;
                g[i] = g[j];
                g[j] = tmp ;
            }
        }
    }
for ( int m = 0 ; m < l ; m ++ )
cout << g[m] << endl ;
}
void check ( string g[] , int n , int *l  , int *p )
{
    *l = 0 , *p = 0 ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        int x = g[i].length() ;
            if ( ( (g[i][0] == 'L') || (g[i][0] == 'l') ) && ( (g[i][ x - 1] == 'M') ||  (g[i][ x - 1] == 'm') ) )
                (*l)++ ;
                else if (( ( g[i][0] == 'P' || g[i][0] == 'p' ) ) && (( g[i][ x - 1] == 'M' ||  g[i][ x - 1] == 'm' ) ) )
                (*p)++ ;
    }
}
int main()
{
    int l = 0 , p = 0 ;
    string *n = new string[5] ;
    if (!n)
    {
        cout << "error" ;
    exit (1) ;
    }
    get ( n , 5 ) ;
    srt ( n , 5 ) ;
    check ( n , 5 , &l , &p ) ;
    cout << " p : " << p << endl ;
    cout << " l : " << l << endl ;
    delete n ;
    return 0;
}
