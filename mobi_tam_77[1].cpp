#include <iostream>

using namespace std;

class stringclass
{
    char c[255] ;
public :
    stringclas1 ( char *c2 ){
        int k = 0 ;
        while (c2[k] != '\0' && k < 255 )
        {
            c[k] = c2[k] ;
            k ++ ;
        }
        c[k]='\0' ;
}
char *m ()
{
    return c ;
}
stringclass operator + (stringclass &s2)
{
        stringclass s3;
        int i = 0 , j = 0 ;
        while ( c[i] != '\0' && i < 255 )
        {
            s3.c[i] = c[i] ;
            i++ ;
        }
        while (s2.c[j] != '\0' && i < 255)
        {
            s3.c[i] = s2.c[j] ;
            i ++ ;
            j ++ ;
        }
        s3.c[i] = '\0' ;
        return s3 ;
    }
    friend ostream &operator << (ostream&, const stringclass &);
};
ostream &operator << (ostream &output, const stringclass &x)
{
output << x << endl ;
return output;
}
int main()
{
    stringclass s1, s2  , s3 ;
    s1.stringclas1("mhkr") ;
    s2.stringclas1("jccd") ;
    s3 = s1 + s2 ;
    cout << s3.m() << endl ;
    return 0;
}
