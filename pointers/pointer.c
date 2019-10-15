/******************************************************************************************************************************************************
    NULL pointer       :Pointer is pointing to nothing is called null pointer.
    
    Dandling Pointer   :If any pointer is pointing the memory address of any variable but after some time variable has deleted 
 		        from that memory location while pointer is still pointing such memory location is called Dandling Pointer.
  
    Generic Poinyter   :A void pointer is a special pointer that can point to object of any TYPE. 
    		        A void pointer is typeless pointer also known as generic pointer. 
		        void pointer is an approach towards generic functions and generic programming in C.

   Wild Pointer        :A pointer in c which has not been initialized is known as wild pointer.  

   Constant Pointer    :A constant pointer is a pointer that cannot change the address its holding. 
   		        In other words, we can say that once a constant pointer is points to a variable then it cannot point to any other variable.
			( <type of pointer> * const <name of pointer> ).
   
   Pointer to Constant :These type of pointers can change the address they point to but cannot change the value kept at those address.
   			( const <type of pointer>* <name of pointer> )

   Constant Pointer to Constant :A Constant pointer to constant is a Pointer that can't change address and value it holding. 
   				 ( const <type of pointer>* const <name of pointer> )

*********************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a =5;
	int *ptr =NULL;  		//null pointer
	void *vPtr;
	vPtr=&a;       			//void pointer or generic pointer it can hold any data type
	char *str;     			//wild pointer
	int *const iPtr =&a;            //constant pointer 
	int b=6;
	iPtr=&b; 			// it will through error
	const int *iPtr1;		//pointer to constant
	iPtr1=&a;
	*iPtr1=b;                       //it will through error
	const int *const iPtr2 = &a;         //Constant pointer to constant
	*iPtr2=2;			//it will through error
	iPtr2 =&b;			//it will also through error

	
}


