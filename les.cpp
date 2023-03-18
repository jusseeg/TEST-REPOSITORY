
#include <iostream>

void loop(int first_number,int last_number) {
   for(int el = first_number; el < last_number ; el++ ) {
      std::cout<<el;
   }
}

int main(int args,char *argv[])
{
   int result = loop(5,10);
   std::cout<<result;
   return 0;
}