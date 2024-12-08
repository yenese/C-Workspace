#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "delivery_automation_h_.h"



int main() 
{
    CustomerPtr startptr = NULL;
	insertCustomer(&startptr, 1, "Yunus Emre", 21);
	insertCustomer(&startptr, 2, "Mert Tuna Albayrak", 32);
	insertCustomer(&startptr, 3, "Ege Altin", 50);   
	
	
	ProductPtr start1ptr = NULL;
	insertProduct(&start1ptr, 1, "Portakal Sikma", 1, 5.99);
	insertProduct(&start1ptr, 2, "Muz Yerli", 1, 12.95);
	insertProduct(&start1ptr, 3, "Sogan", 2, 7.45);
	insertProduct(&start1ptr, 4, "Pirasa", 2, 3.95);
	insertProduct(&start1ptr, 5, "Lahana", 2, 5.95);
	insertProduct(&start1ptr, 6, "Limon", 1, 7.45);
	insertProduct(&start1ptr, 7, "Hamsi", 3, 15);
	
	
	
	StorePtr start2ptr = NULL;
	insertStore(&start2ptr, 1, "Store1",21);       
	insertStore(&start2ptr, 2, "Store2",32); 
	insertStore(&start2ptr, 3, "Store3",15);
	insertStore(&start2ptr, 4, "Store4",16);
	insertStore(&start2ptr, 5, "Store5",17);
	insertStore(&start2ptr, 6, "Store6",50);


	
	
	ProductPtr current_p = start1ptr;   
	CustomerPtr current_c = startptr;
	StorePtr current_s = start2ptr;
	
	
	
	
	int ent;
	int type;
	int ID_p;
	int ID_c;
	int ID_s;
	int i;
	
	int customer_number;
	int product_number;
	int amount;
	double prices;
	
	CustomerPtr current_customer = startptr; 
	
	int total1 = 0;
	

    while (1) {
        printf("1. Sales\n2. Customer Information\n3. Store Information\n4. Product Information\n5. Customer Analysis\n(cikmak icin '0'a basiniz.)\n\n");

        scanf("%d", &ent);

        switch (ent)
        {
        case 0:
        	current_p = start1ptr;
 			current_c = startptr;
 			current_s = start2ptr;
            return 0;
            
            
            
            
            

        case 1:
        	
        			printf("Musteri ID giriniz : ");
					scanf("%d",&customer_number);
					
					printf("Urun ID giriniz :");
					scanf("%d",&product_number);
					
					printf("Miktar giriniz : ");
					scanf("%d",&amount);       
				            
				    while (current_c != NULL) {
				        if (current_c->ID == customer_number) {
				            break;
				        }
				        current_c = current_c->nextCustomerPtr;
				    }
				                
				    while (current_p != NULL) {
				        if (current_p->ID == product_number) {
				            break;
				        }
				        current_p = current_p->nextProductPtr;
				    }
				                
				    while (current_s != NULL) {
				        if (current_s->address == current_c->address) {
				            break;
				        }
				        current_s = current_s->nextStorePtr;
				    }
				                
				    double prices = current_p->price * amount;
				                
				    addInvoiceToCustomer(current_c, current_p->name , prices, amount,  current_s->name);
				                
				    current_p = start1ptr; 
				    current_c = startptr;   
				    current_s = start2ptr;  
                
				    scanf("%d", &ent);
				    break;
				    
        	







        case 2:  // 
            printf("2.1. All customer\n2.2. Single customer\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
            	current_p = start1ptr;
		 		current_c = startptr;
		 		current_s = start2ptr;
	            break;
            case 1:
            	printf("Customer Information \n");
                while (current_c != NULL) 
					{
					    printf("ID : %d -- Name: %s --  Adress: %d \n", current_c->ID, current_c->name, current_c->address);
					    current_c = current_c->nextCustomerPtr;
					}
                scanf("%d", &ent);
                break;
            case 2:
                printf("ID giriniz : ");
                scanf("%d",&ID_c);
                while (current_c != NULL) 
					{
						if(current_c->ID == ID_c)
						{
					    	printf("ID : %d -- Name: %s --  Adress: %d \n", current_c->ID, current_c->name, current_c->address);
						}
					    current_c = current_c->nextCustomerPtr;
					}
                scanf("%d", &ent);
                break;
            }
            current_p = start1ptr;
		 	current_c = startptr;
		 	current_s = start2ptr;
            break; // 
            
            
            
            
            
            
            

        case 3:   // 
            printf("3.1. All stores\n3.2. Single store\n3.3. Product list of a selected store\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	 			current_s = start2ptr;
	            break;
            case 1:
            	printf("Store Information\n");
			    while (current_s != NULL) 
				{
			        printf("ID : %d -- Name: %s -- Address: %d\n", current_s->ID, current_s->name, current_s->address);
			        current_s = current_s->nextStorePtr;
			    }
			    scanf("%d", &ent);
			    break;
            case 2:
                printf("ID giriniz : ");
                scanf("%d",&ID_s);
                while (current_s != NULL) 
				{
					if(current_s->ID == ID_s)
					{
			        printf("ID : %d -- Name: %s -- Address: %d\n", current_s->ID, current_s->name, current_s->address);
			    	}
			        current_s = current_s->nextStorePtr;
			    }
                scanf("%d", &ent);
                break;
            case 3:
            	printf("ID giriniz : ");
            	scanf("%d",&ID_s);
            	
            	for(i=0 ; i<7; i++)
				{
            		printf("%s \n", current_p->name);
					current_p = current_p->nextProductPtr;	
				}
                scanf("%d", &ent);
                break;
            }
            current_p = start1ptr;
		 	current_c = startptr;
		 	current_s = start2ptr;
            break;  // 










        case 4:  // 
            printf("4.1. All products\n4.2. According to the product type\n4.3. Single product\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	 			current_s = start2ptr;
	            break;
            case 1:
            	printf("Product Information \n");
                while (current_p != NULL) 
				{
				    printf("ID : %d -- Name: %s --  Type: %d --  Price: %.2lfTL \n", current_p->ID, current_p->name, current_p->type, current_p->price);
				    current_p = current_p->nextProductPtr;
				}
                scanf("%d", &ent);
                break;
            case 2:
            	printf("Type giriniz: ");
    			scanf("%d", &type);
                
                
                while (current_p != NULL) 
				{
					if(current_p->type == type)
					{
				    	printf("ID : %d -- Name: %s --  Type: %d --  Price: %.2lfTL \n", current_p->ID, current_p->name, current_p->type, current_p->price);
				 	}
				 	current_p = current_p->nextProductPtr;
				 	
				}
                
                scanf("%d", &ent);
                break;
            case 3:
            	printf("ID giriniz : ");
            	scanf("%d",&ID_p);
            	while (current_p != NULL) 
				{
					if(current_p->ID == ID_p)
					{
				    	printf("ID : %d -- Name: %s --  Type: %d --  Price: %.2lfTL \n", current_p->ID, current_p->name, current_p->type, current_p->price);
				 	}
				 	current_p = current_p->nextProductPtr;
				}
                scanf("%d", &ent);
                break;
            }
            current_p = start1ptr;
		 	current_c = startptr;
		 	current_s = start2ptr;
            break;   // 
            
            
            
            
            
            

        case 5:   // 
            printf("5.1. Products purchased by a customer\n5.2. Total amount of purchased by a customer\n5.3. Total amount of products purchased by all customer\n5.4 Customers shipping fee\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	 			current_s = start2ptr;
	            break;
            case 1:
            	printf("ID giriniz : ");
            	scanf("%d",&customer_number);
            	
            	
            	while (current_c != NULL) 
				{
					if (current_c->ID == customer_number) 
					{
					    // Müþterinin faturalarýný döngüyle geçin
					    for (i = 0; i < current_c->invoiceCount; i++) 
						{
					        printf("Musterinin aldigi urun: %s\n", current_c->invoices[i].productName);
					    }
					break; 
					}
					current_c = current_c->nextCustomerPtr;
				}
                scanf("%d", &ent);
                break;
            case 2:
            	printf("ID giriniz : ");
            	scanf("%d",&customer_number);
            	int total = 0;
            	
            	while (current_c != NULL) 
				{
					if (current_c->ID == customer_number) 
					{
					    for (i = 0; i < current_c->invoiceCount; i++) 
						{
							total += current_c->invoices[i].amount;
					    }
					    printf("Musterinin aldigi toplam miktar: %d\n", total);
					break; 
					}
					current_c = current_c->nextCustomerPtr;
				}
            	
                
                scanf("%d", &ent);
                break;
                
            case 3:
                
				
				while (current_customer != NULL) {
				    printf("Musteri Adi: %s\n", current_customer->name);
				    printf("Musterinin aldigi urunler:\n");
				    
				    
				    for (i = 0; i < current_customer->invoiceCount; i++) {
				        printf("  - %s\n", current_customer->invoices[i].productName);
				        total1 += current_customer->invoices[i].amount;
				    }
				    printf("Total miktar : %d \n\n\n",total1);
				    total1 = 0;
				    current_customer = current_customer->nextCustomerPtr; 
				}
                
                
                
                
                scanf("%d", &ent);
                break;
            case 4:
            		printf("ID giriniz : ");
            		scanf("%d",&customer_number);
            		
            		while (current_c != NULL) 
					{
				        if (current_c->ID == customer_number) 
						{
							printf("Musteri Adi: %s\n", current_c->name);
						    printf("Musteri Adresi: %d\n", current_c->address);
						    printf("Fatura Sayisi: %d\n\n", current_c->invoiceCount);  
				                
				    
						    for ( i = 0; i < current_c->invoiceCount; i++) 
							{
						        printf("Fatura %d:\n", i + 1);
						        printf("Urun Adi: %s\n", current_c->invoices[i].productName);
						        printf("Fiyat: %.2lf\n", current_c->invoices[i].price);
						        printf("Miktar: %d\n", current_c->invoices[i].amount);
						        printf("Magaza Adi: %s\n", current_c->invoices[i].storeName);
						        printf("\n");
						    }
					            
					    }
					    current_c = current_c->nextCustomerPtr;
					}
            		
            		
                	
				    
                scanf("%d", &ent);
                break;
            }
            current_p = start1ptr;
		 	current_c = startptr;
		 	current_s = start2ptr;
            break; // 
            
            
        }
    }
	
	
	

   
	return 0;
}




/*void menu()
{
	int ent;
	

    while (1) {
        printf("1. Sales\n2. Customer Information\n3. Store Information\n4. Product Information\n5. Customer Analysis\n(cikmak icin '0'a basiniz.)\n\n");

        scanf("%d", &ent);

        switch (ent)
        {
        case 0:
        	current_p = start1ptr;
 			current_c = startptr;
            return 0;

        case 1:
            printf("1.1. Customer Number\n1.2. Product Sales\n1.3. Invoice\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	            return 0;
            	
                break;
            case 1:
                printf(" DENEME ");
                scanf("%d", &ent);
                break;
            case 2:
                printf("1.2.1. Find product number\n1.2.2.Enter amount\n0. Geri Don\n\n");
                scanf("%d", &ent);
                switch (ent)
                {
                case 0:
		        	current_p = start1ptr;
		 			current_c = startptr;
		            return 0;
                case 1:
                    printf(" ");
                    scanf("%d", &ent);
                    break;
                case 2:
                    printf(" ");
                    scanf("%d", &ent);
                    break;
                }
                break;
            }
            break;

        case 2:
            printf("2.1. All customer\n2.2. Single customer\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	            return 0;
            case 1:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 2:
                printf(" ");
                scanf("%d", &ent);
                break;
            }
            break;

        case 3:
            printf("3.1. All stores\n3.2. Single store\n3.3. Product list of a selected store\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	            return 0;
            case 1:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 2:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 3:
                printf(" ");
                scanf("%d", &ent);
                break;
            }
            break;

        case 4:
            printf("4.1. All products\n4.2. According to the product type\n4.3. Single product\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	            return 0;
            case 1:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 2:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 3:
                printf(" ");
                scanf("%d", &ent);
                break;
            }
            break;

        case 5:
            printf("5.1. Products purchased by a customer\n5.2. Total amount of purchased by a customer\n5.3. Total amount of products purchased by all customer\n5.4 Customers shipping fee\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
	        	current_p = start1ptr;
	 			current_c = startptr;
	            return 0;
            case 1:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 2:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 3:
                printf(" ");
                scanf("%d", &ent);
                break;
            case 4:
                printf(" ");
                scanf("%d", &ent);
                break;
            }
            break;
        }
    }
	
}*/

