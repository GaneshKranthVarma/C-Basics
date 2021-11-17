/* Assignment operators 1 */
#include<stdio.h>
void main()
{   
    int x=3, y=5;
    x +=y; // x=8 y=5
    x -=y; // x=3 y=5
    x *=y; // x=15 y=5
    y +=x; // x=15 y=20
    y *=x; // x=15 y=300
    printf("%d %d", x,y);
}
