#include <iostream>
#include <string>
#include <sstream>
#include "./mapdir/mapping.cpp"

using namespace std;

string operator *( const string a, const string b )
{
   const string SPACE = "  ";
   stringstream ssa( a ), ssb( b );
   string result, parta, partb;
   while( getline( ssa, parta ) && getline( ssb, partb ) ) result += parta + SPACE + partb+'\n';
   return result;
}


int main(int argc, char **argv)
{

  string msg = "";

   for( int i = 0; argv[1][i] != '\0'; i++){
      msg += argv[1][i];
   }
   
   int len = msg.length();

   string result = mapMe(msg, len);

   std::cout<<result;
   
   return 0;
}