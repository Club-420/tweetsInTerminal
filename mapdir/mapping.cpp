//#include <string>
#include "./letters.hpp"
//#include "./numbers.hpp"

std::string str = a0;

string operator *( const string a, const string b );

std::string mapMe( std::string msg, int len ){

    for( int i = 0; i < len; i++){
        switch ( msg[i] )
        {
        case 'z':
            str = str * z;
            break;

        case 'o':
            str = str * o;
            break;

        default:
            str = str * def0;
            break;
        }
    };
    return str;
}




