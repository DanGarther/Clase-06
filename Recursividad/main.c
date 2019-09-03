#include <stdio.h>
#include <stdlib.h>


/** \brief
 *
 * \param int
 * \return int
 *
 */
int factorial(int);

int main()
{

int num = 0;
int total;

total = factorial(num);

printf("%d\n", total);


    return 0;
}


int factorial(int num){

int i;
int total=1;

if(num == 0){

    total = 0;

    return total;
}

else{
for(i = num; i >= 1; i--){



    total = total * i;



}
}

return total;
}
