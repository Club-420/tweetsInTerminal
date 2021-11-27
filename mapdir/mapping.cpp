//#include <string>
#include "./letters.hpp"
//#include "./numbers.hpp"

int space = 0;
static int i1 = 0;
string operator *( const string a, const string b );

std::string mapMe( std::string msg, int len ){

    std::string str = a0;
    for(i1; i1 < len; i1++){
        
        switch ( msg[i1] )
        {

        case 'a':
            str = str * a;
            break;

        case 'b':
            str = str * b;
            break;
        case 'c':
            str = str * c;
            break;

        case 'd':
            str = str * d;
            break;
        case 'e':
            str = str * e;
            break;

        case 'f':
            str = str * f;
            break;
        case 'g':
            str = str * g;
            break;

        case 'h':
            str = str * h;
            break;
        case 'i':
            str = str * i;
            break;

        case 'j':
            str = str * j;
            break;
        case 'k':
            str = str * k;
            break;

        case 'l':
            str = str * l;
            break;
        case 'm':
            str = str * m;
            break;

        case 'n':
            str = str * n;
            break;
        case 'o':
            str = str * o;
            break;
        case 'p':
            str = str * p;
            break;

        case 'q':
            str = str * q;
            break;

        case 'r':
            str = str * r;
            break;
        case 's':
            str = str * s;
            break;

        case 't':
            str = str * t;
            break;
        case 'u':
            str = str * u;
            break;

        case 'v':
            str = str * v;
            break;
        case 'w':
            str = str * w;
            break;

        case 'x':
            str = str * x;
            break;
        case 'y':
            str = str * y;
            break;

        case 'z':
            str = str * z;
            break;

        case ' ':
            space++;
            if( space > 2){
                space = 0;
                return str;
            }
        default:
            str = str * def0;
            break;
        }
    };
    return str;
}




