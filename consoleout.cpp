#include <iostream>
#include <unistd.h>
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

void taketonextline(int len, string msg){

   if(i1 != (len - 1)){
      string result = mapMe(msg, len);
      std::cout<<result;
      taketonextline(len, msg);
   }
   return;
}


int main(int argc, char **argv)
{

  string msg = "";

   for( int i = 0; argv[1][i] != '\0'; i++){
      msg += argv[1][i];
   }
   
   int len = msg.length();

   //string result = mapMe(msg, len);

   taketonextline(len, msg);

   return 0;
}