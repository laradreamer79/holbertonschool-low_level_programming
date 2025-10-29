#include"main.h"

/**
*_sqrt_helper-findsthenaturalsquarerootofanumberrecursively
*@n:thenumbertofindthesquarerootof
*@i:thecurrentnumbertotestasapossibleroot
*
*Return:thenaturalsquarerootofn,or-1ifnotfound
*/
int_sqrt_helper(intn,inti)
{
if(i*i>n)
return(-1);
if(i*i==n)
return(i);
return(_sqrt_helper(n,i+1));
}

/**
*_sqrt_recursion-returnsthenaturalsquarerootofanumber
*@n:thenumbertofindthesquarerootof
*
*Return:thenaturalsquareroot,or-1ifnonaturalsquarerootexists
*/
int_sqrt_recursion(intn)
{
if(n<0)
return(-1);

return(_sqrt_helper(n,0));
}

