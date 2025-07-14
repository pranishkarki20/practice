#include <stdio.h>
 void printtable( int count ); 
 int main()

 {
    printtable(5);
    return 0;
 }
   
 void printtable( int count )
 {
     if (count == 0) {
        return;
     }
    printf("helloworld\n");
    printtable(count-1);
 }


 