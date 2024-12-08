#include "delivery_automation_h_.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void insertCustomer(CustomerPtr *cPtr, int c_ID, char* c_name, int c_address) 
{
    CustomerPtr temp = *cPtr;

    if (*cPtr == NULL)	
	{
        CustomerPtr newCustomer = (CustomerPtr)malloc(sizeof(Customer));   
        newCustomer->name = c_name;
        newCustomer->ID = c_ID;
        newCustomer->address = c_address;
        newCustomer->nextCustomerPtr = NULL;
        *cPtr = newCustomer;
    } 
	else 
	{
        while(temp->nextCustomerPtr != NULL) {
            temp = temp->nextCustomerPtr;
        }
        CustomerPtr newCustomer = (CustomerPtr)malloc(sizeof(Customer));
        newCustomer->name = c_name;
        newCustomer->ID = c_ID;
        newCustomer->address = c_address;
        newCustomer->nextCustomerPtr = NULL; 
        temp->nextCustomerPtr = newCustomer; 
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
	
	return NULL;
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



void insertProduct(ProductPtr *pPtr, int p_ID, char* p_name, int p_type, double p_price) 
{
    ProductPtr temp = *pPtr;

    if (*pPtr == NULL) 
	{
        ProductPtr newProduct = (ProductPtr)malloc(sizeof(Product));
        newProduct->name = p_name;
        newProduct->ID = p_ID;
        newProduct->type = p_type;
        newProduct->price = p_price;
        newProduct->nextProductPtr = NULL;
        *pPtr = newProduct;
    } 
	else 
	{
        while(temp->nextProductPtr != NULL) {
            temp = temp->nextProductPtr;
        }
        ProductPtr newProduct = (ProductPtr)malloc(sizeof(Product));
        newProduct->name = p_name;
        newProduct->ID = p_ID;
        newProduct->type = p_type;
        newProduct->price = p_price;
        newProduct->nextProductPtr = NULL; 
        temp->nextProductPtr = newProduct; 
    }
}



void insertStore(StorePtr *sPtr, int s_ID, char* s_name, int s_address)
{
    StorePtr temp = *sPtr;
    int i;
    

    if (*sPtr == NULL) {
        StorePtr newStore = (StorePtr)malloc(sizeof(Store));
        newStore->name = s_name;
        newStore->ID = s_ID;
        newStore->address = s_address;
        newStore->nextStorePtr = NULL;
		*sPtr = newStore;
    } else {
        while(temp->nextStorePtr != NULL) {
            temp = temp->nextStorePtr;
        }
        StorePtr newStore = (StorePtr)malloc(sizeof(Store));
        newStore->name = s_name;
        newStore->ID = s_ID;
        newStore->address = s_address;
        newStore->nextStorePtr = NULL;
        temp->nextStorePtr = newStore;
    }
}

void addInvoiceToCustomer(struct Customer* customer, char* productName, double price, int amount,  char* storeName) 
{
    
    struct Invoice newInvoice;
    newInvoice.productName = strdup(productName); 
    newInvoice.price = price;
    newInvoice.amount = amount;
    newInvoice.storeName = strdup(storeName); 

    
    customer->invoices[customer->invoiceCount++] = newInvoice;
}













