#include<stdio.h>
int main()
{
//structure:
/*
what is structure:it is user define data type .by using structe we can define a data 
                  type which holds more than one element of different types.

    syntax:-
            struct <identiity>
            {
            
            datatype element1; 
			datatype element2;
            };
            
    important point: every structure end with a semi colen(;).
  */	
  struct employee{
  	int eno;
  	char ename[100];
  	char ecompany[30];
  };
  /*
  1] 
  see above structure,here "struct employee" is a data type having elements of diff data types.
  
  2]we can declare a variable for struct employee type 
  
      variable declaration:
                      syntax:
                             struct employee e;
3]whenever, we declare a variable then store allocation takes place

4] we can access the element of a struct data type using dot operator:
  like   
  
    syntax:  varablename.elementname;
          example: e.ename;
  */

 struct employee e1={1,"mahesh","infosys"};
 printf("size of struct employee: %d",sizeof(e1));
  printf("\nsize of struct employee: %d",sizeof(struct employee));
  printf("employee details:\n %d\n %s\n %s",e1.eno,e1.ename,e1.ecompany);
	return 0;
}
