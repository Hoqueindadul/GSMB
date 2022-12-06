#include "system.h"

int main()
{
     int ch;
     printf("Press 1: For change your password\n");
     printf("Press 2: For Delete your account\n");
     printf("Press 3: For Logout from your account\n");
     while(1)
     {
        switch(ch)
        {
            case 1: changepass();
            break;
            case 2: deletaccount();
            break;
            case 3: logout();
            break;
         }   
     }
}fjdfdoiurqweur

