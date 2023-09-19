#include <stdio.h>

int function(int x){
  int ans = x;
  ans >> 1;
  int c = ans + 1;
  int e = 0xe;
  if(c == e){
    return 0; 
  }else if(c > e){
    return function(c-1)*2;
  }else{
    return function(c+1)*2 + 1;
  }
  
}

int main(){
  printf("ans: %d\n", function(0xe));
  return 0;
}
