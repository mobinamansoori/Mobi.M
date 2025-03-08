#include <iostream>

using namespace std;

int funck ( float s[] , int l , float *mx , float *mn , float *fsmx , float *fsmn )
{
    float temp ;
    for( int i = 0 ; i < l ; i++ )
    {
        for (int j = 0 ; j < l-i-1 ; j ++ )
        {
        if ( s[j] >= s[j+1] )
        {
            temp = s[j] ;
            s[j] = s[j+1] ;
            s[j+1] = temp ;
            }
        }
    }
    *mn = s[0] ;
    *mx = s[l-1] ;
    *fsmx = 20 - (*mx) ;
    *fsmn = 20 - (*mn) ;
}
int main()
{
    float st [5] , mxm , mnm , fasmx , fasmn ;
    int l ;
    cout << "enter scores students : " << endl ;
    for ( int i = 0 ; i < 5 ; i++ )
        cin >> st[i] ;
    funck ( st , 5 , &mxm , &mnm , &fasmx , &fasmn ) ;
    cout << "maximum : " << mxm << endl ;
    cout << "minimum : " << mnm << endl ;
    cout << " the maximum distance is up to twenty : " << fasmx << endl ;
    cout << " minimum distance to twenty : " << fasmn << endl ;
    return 0 ;
}
