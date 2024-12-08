#ifndef delivery_automation_h_
#define delivery_automation_h_

#include<stdio.h>
#include<stdlib.h>


struct customer{
	int ID;
	char* name;
	int address;
	struct Customer *nextCustomerPtr;
};




typedef struct customer Customer;
typedef Customer *CustomerPtr;


struct product{
	int ID;
	char* name;
	unsigned int type : 4;
	double price;
	struct Product *nextProductPtr;
};

typedef struct product Product;
typedef Product *ProductPtr;

struct store{
	int ID;
	char* name;
	int address;
	struct Store *nextStrorePtr;
};

typedef struct store Store;
typedef Store *StorePtr; 


void insertCustomer(CustomerPtr *cPtr, int c_ID, char* c_name, int c_address) {
    CustomerPtr temp = *cPtr;

    if (*cPtr == NULL) {
        CustomerPtr newCustomer = (CustomerPtr)malloc(sizeof(Customer));
        newCustomer->name = c_name;
        newCustomer->ID = c_ID;
        newCustomer->address = c_address;
        newCustomer->nextCustomerPtr = NULL;
        *cPtr = newCustomer;
    } else {
        while(temp->nextCustomerPtr != NULL) 
		{
        	temp = temp->nextCustomerPtr;
        }
        CustomerPtr newCustomer = (CustomerPtr)malloc(sizeof(Customer));
        newCustomer->name = c_name;
        newCustomer->ID = c_ID;
        newCustomer->address = c_address;
        newCustomer->nextCustomerPtr = NULL; // Yeni müþteri sona ekleniyor, bu yüzden nextCustomerPtr NULL olmalý
        temp->nextCustomerPtr = newCustomer; // Önceki son müþterinin nextCustomerPtr'si yeni müþteriye iþaret etmeli
    }
}




int deleteCustomer( CustomerPtr *cPtr, int c_ID)
{
	
	CustomerPtr temp = *cPtr;
	
	
	 if (*cPtr == NULL)   //liste boþ ise
	 {   
        return 0;
	 }
        
        
	
	if (temp != NULL && temp->ID == c_ID)     //baþtaki ise
	{
		*cPtr = temp->nextCustomerPtr;
		free(temp);
		return 1;
		
	}
	
	
	
	CustomerPtr bef = NULL;
	while (temp != NULL && temp->ID != c_ID)   //Diðer durumlar
	{
		bef = temp;
		temp = temp->nextCustomerPtr;
		if(temp == NULL)                     //eðer eleman listede yok ise
		{
			return 0;	
		}
	 		
	}
	
	
	if (temp->nextCustomerPtr == NULL) {
        bef->nextCustomerPtr = NULL; 
    } else {
        bef->nextCustomerPtr = temp->nextCustomerPtr;
    }
    free(temp);
    
    
    
    return 1;
}






int getCustomerID(CustomerPtr *cPtr, char* c_name) {
    CustomerPtr temp = *cPtr;
    
    while (temp != NULL) {
        if (strcmp(temp->name, c_name) == 0) 
		{ 
            return temp->ID;
        }
        temp = temp->nextCustomerPtr;
    }
    return 0;
}




char* getCustomerName( CustomerPtr *cPtr, int c_ID)
{
	CustomerPtr temp = *cPtr;
	
	while(temp != NULL)
	{
		if(temp->ID == c_ID)
		{
			return temp->name;
		}
		temp = temp->nextCustomerPtr;
	}
	
	
}





int getCustomerAddress( CustomerPtr *cPtr, int c_ID)
{
	CustomerPtr temp = *cPtr;
	
	while(temp != NULL)
	{
		if(temp->ID == c_ID)
		{
			return temp->address;
		}
		temp = temp->nextCustomerPtr;	
	}
	return 0;
}
	

	























#endif



