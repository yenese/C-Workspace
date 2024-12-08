#include <stdio.h>

int main()
{
    int ent;

    while (1) {
        printf("1. Sales\n2. Customer Information\n3. Store Information\n4. Product Information\n5. Customer Analysis\n(cikmak icin '0'a basiniz.)\n\n");

        scanf("%d", &ent);

        switch (ent)
        {
        case 0:
            return 0;

        case 1:
            printf("1.1. Customer Number\n1.2. Product Sales\n1.3. Invoice\n0. Geri Don\n\n");
            scanf("%d", &ent);

            switch (ent)
            {
            case 0:
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
                    break;
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
                break;
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
                break;
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
                break;
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
                break;
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

    return 0;
}

