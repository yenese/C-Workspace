#ifndef delivery_automation_h_
#define delivery_automation_h_


struct Invoice{
    char* productName; 
    double price;     
    int amount;    
    char* storeName;   
};

struct Customer {
    int ID;
    char* name;
    int address;
    struct Invoice invoices[50];
	int invoiceCount; 
    struct Customer *nextCustomerPtr;
};



struct Product {
    int ID;
    char* name;
    unsigned int type;
    double price;
    struct Product *nextProductPtr;
};


struct Store {
    int ID;
    char* name;
    int address; 
    struct Store *nextStorePtr;
};




typedef struct Customer Customer;
typedef struct Customer *CustomerPtr;
typedef struct Product Product;
typedef struct Product *ProductPtr;
typedef struct Store Store;
typedef struct Store *StorePtr;


void insertCustomer(CustomerPtr *cPtr, int c_ID, char* c_name, int c_address);

int deleteCustomer(CustomerPtr *cPtr, int c_ID);

int getCustomerID(CustomerPtr *cPtr, char* c_name);

char* getCustomerName(CustomerPtr *cPtr, int c_ID);

int getCustomerAddress(CustomerPtr *cPtr, int c_ID);

void insertProduct(ProductPtr *pPtr, int p_ID, char* p_name,int p_type, double p_price);

void insertStore(StorePtr *sPtr, int s_ID, char* s_name, int s_address);

void addInvoiceToCustomer(struct Customer* customer, char* productName, double price, int amount, char* storeName);


#endif 

