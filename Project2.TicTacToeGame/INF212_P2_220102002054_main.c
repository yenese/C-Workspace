#include<stdio.h>

void initialize_Game_Board(int grid_size);
int update_Game_Board(int row, int column, char sign, int size, char board[][size]);
void show_Game_Board(int size, char board[][size]);
int check_for_Win(int size, char board[][size]);
void start_Game(int size, char board[][size]);




int main() 
{
    int size;
    printf("Tahta boyutunu seciniz (3 veya 9) : ");
    scanf("%d", &size);
	
	printf("OYUN TAHTASI \n");
	printf("***********  \n");
    initialize_Game_Board(size);
    printf("*********** \n\n");
    printf("\n");
	
    char board[size][size];
    int i, j;
	
	
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            board[i][j] = ' ';              //boþluklardan oluþan bir tablo oluþturduk.
        }
    }
    
    
    start_Game(size, board);
    check_for_Win(size, board);            //oluþturduðumuz fonksiyonlarý çaðýrdýk.
    
	
	return 0;

}



///FONKSÝYONLAR///





void initialize_Game_Board(int grid_size) 
{
    int grid_nine[9][9];
    int grid_three[3][3];             //3x3 lük bir tablo ise 1'den 9'a kadar olan numaralarý her bir kareye yazdýrdýk.
    								  //9x9 luk bir tablo ise de 1'den 81'e kadar olan sayularý her bir kareye yazdýrdýk.
	
    int i, j;
    int count = 1;
    int temp = 1;
	
    int *p;
	
    if (grid_size == 3) {
        p = &grid_three[0][0];
		
        for (i = 0; i < 9; i++) {
            *(p + i) = count;
            count++;
        }
		
        count = 0;
		
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d  | ", *(p + count));
                count++;
            }
			
            printf("\n");
            printf("-------------- \n");
        }
    }
	
    if (grid_size == 9) 
	{
        p = &grid_nine[0][0];
        count = 1;
	
        for (i = 0; i < 81; i++) {
            *(p + i) = count;
            count++;
        }
	
        count = 0;
				
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                if (temp < 10) {
                    printf("%d  | ", *(p + count));
                    count++;
                } else {			
                    printf("%d | ", *(p + count));
                    count++;
                }
                temp++;
            }
			
            printf("\n");
            printf("-------------------------------------------- \n");
        }
    }
}


int update_Game_Board(int row, int column, char sign, int size, char board[][size])
{
	if (row < 1 || column < 1  || row > size || column > size)           //girmek istenilen satýr ve sütunun tablonun içinde mi olduðunu kontrol ettik.                
	{
		printf("Gecersiz satýr veya sutun girdiniz. \n");
		return 0;
	}
	                                                            
	
	if (board[row-1][column-1] != ' ')
	{
		printf("Yazmak istediginiz kutu dolu. \n");
		return 0;
	}
	
	else
	{
		board[row-1][column-1] = sign;
		show_Game_Board(size, board);
		printf("\n");
		return 1;
	}
	
		
}



int check_for_Win(int size, char board[][size])
{
	int i,j;
	int player1 = 0;
	int player2 = 0;
	char *p = &board[0][0];
		
	
	if (size == 9)   //soldan baþlayýp köþegen
	{
	
		for (i = 0; i<7; i++)
		{	
			for (j = 0; j<7; j++)
			{
				if (*(p+j+i*9) == *(p+j+i*9+10) && *(p+j+i*9) == *(p+j+i*9+20))
				{
					if (*(p+j+i*9) == 'X'){
						player2 += 1;					
					} 
					else
					{
						player1 += 1;
					}
				}	
			}
		}
		
			
		for (i = 7; i>0; i--)  //saðdan baþlayýp köþegen
		{	
			for (j = 7; j>0; j--)
			{
				if (*(p+j+i*8-1) == *(p+j+i*8-1+8) && (*p+j+i*8-1) == *(p+j+i*8-1+16))
				{
					if (*(p+j+i*8-1) == 'X'){
						player2 += 1;					
					} 
					else
					{
						player1 += 1;
					}
				}	
			}
		}
		
		
		for (i = 0; i<7; i++)   //Satýr kontrolü
		{
			for (j = 0; j<7; j++)
			{
				
				if (*(p+j+i*9) == *(p+j+i*9+1) && *(p+j+i*9) == *(p+j+i*9+2))	
				{	
			
					if (*(p+i) == 'X'){
						player2 += 1;					
					} 
					
					else
					{
						player1 += 1;
					}
				
				}			
			}
		}
		
		
		for (i = 0; i<7; i++)   //Sütun kontrplü
		{
			for (j = 0; j>9; j++)
			{
				
				if (*(p+j+i*9) == *(p+j+i*9+9) && *(p+j+i*9) == *(p+j+i*9+18))	
				{	
			
					if (*(p+i) == 'X')
					{
						player2 += 1;					
					} 
					
					else
					{
					
						player1 += 1;
					}
				
				}			
			}
		}
	}
		
		
		
	if (size == 3)
	{
		
		for (i = 0; i < size; i++) 
		{

					
		    if (*(p + i*size) == *(p + i*size + 1) && *(p + i*size + 1) == *(p + i*size + 2)) 
			{
		        if (*(p + i*size) == 'X') 
				{
		        	player2++;
		                
		        }
				else 
				{
		        	player1++;
		            
		        }
		    }
		}	
	



	    for (j = 0; j < size; j++) 
		{

	        if (*(p + j) == *(p + 3 + j) && *(p + 3 + j) == *(p + 6 + j)) 
			{
				
	            if (*(p + j) == 'X') 
				{
	                player2++;
	            }
				else 
				{
	                player1++;
	            }
	            
	        }

	    }
	
	    
	    
	    if (*(p + 0) == *(p + 4) && *(p + 4) == *(p + 8)) 
		{
			
			
	        if (*(p + 0) == 'X') 
			{
	            player2++;
	        }
			else 
			{
	            player1++;
	        }
	    }
	
	
	
	    if (*(p + 2) == *(p + 4) && *(p + 4) == *(p + 6)) 
		{
			
			
	        if (*(p + 2) == 'X') 
			{
	            player2++;
	        }
			else 
			{
	            player1++;
	        }
	    }
	    
	}
	
	
	
	
	printf("Player1 : %d   Player2 :  %d \n",player1 , player2);

     
	
	if (player1 > player2) {
        printf("Player1 won! \n");
    } else if (player2 > player1) {
        printf("Player2 won! \n");
    } else {
        printf("Berabere! \n");
    }	
	
}		
			
			


void start_Game(int size, char board[][size])
{
	int moves = 0;
	int row, column;
	
	
	
	while(1)
	{	
	
		if (moves == size * size)                //hamle sayýsý 3x3'te en fazla 9 , 9x9'da 81 olur.
		{
            break;
        }
		
		
		
		printf("Oyuncu1 'in sirasi (satir sutun): ");
        scanf("%d %d", &row, &column);
        
        while(1)
		{	
        	if (update_Game_Board(row, column, '0', size, board))
			{
				moves++;
				break;
			}	
			printf("Oyuncu1 'in sirasi (satir sutun): ");
        	scanf("%d %d", &row, &column);
		}
		
			
		
		if (moves == size * size) 
		{
            break;
        }
		
		printf("Oyuncu2 'nin sirasi (satir sutun): ");
        scanf("%d %d", &row, &column);
        
		while(1)
		{
        	if (update_Game_Board(row, column, 'X', size, board))
			{
				moves++;
				break;
			}	
			printf("Oyuncu2 'in sirasi (satir sutun): ");
        	scanf("%d %d", &row, &column);
		}
		
	}
	
}
			
			

void show_Game_Board(int size, char board[][size]) 
{
    int i, j;
    int count = 0;
	
    char *p;
    p = &board[0][0];
		
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%c |", *(p + count));
            count++;
        }
		if (size ==3)
		{
			printf("\n");
        	printf("--------- \n");	
		}
        
        if (size == 9)
		{
        	printf("\n");
        	printf("--------------------------- \n");
		}
    }
}

