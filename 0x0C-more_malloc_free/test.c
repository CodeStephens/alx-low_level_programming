 #include <stdio.h>


  
  int main(void)
  {
        int c[3][2][2] = {{{2,5},{7,9}}, {{3,4}, {6,1}}, {{0,8}, {11,13}}};

                printf("%p\n", (void *) c);
       
        
        return 0;
  }
