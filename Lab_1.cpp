#include <iostream>
#include <conio.h>
#include <stdlib.h>

class Pages
{
private:
    int pagecount = 1;
    int currentpage = 1;
    int outputArray[5];

    void arrowScroll(char step)
    {
        switch(step)
        {
        case 72:
            outputArray[0] = 0;
            outputArray[1] = 0;
            outputArray[2] = 1;
            outputArray[3] = 2;
            outputArray[4] = 3;
            break;

        case 80:
            outputArray[0] = pagecount - 2;
            outputArray[1] = pagecount - 1;
            outputArray[2] = pagecount;
            outputArray[3] = 0;
            outputArray[4] = 0;
            break;

        case 77:
            if(pagecount > 1 && currentpage < pagecount)
            {
                currentpage ++;
                outputArray[0] = currentpage -2;
                outputArray[1] = currentpage -1;
                outputArray[2] = currentpage;
                outputArray[3] = currentpage +1;
                outputArray[4] = currentpage +2;
            }
            break;

        case 75:
            if(currentpage > 1 )
            {
                currentpage--;
                outputArray[0] = currentpage-2;
                outputArray[1] = currentpage-1;
                outputArray[2] = currentpage;
                outputArray[3] = currentpage+1;
                outputArray[4] = currentpage+2;
            }
            break;
        }
    }

public:
    Pages()
    {
        outputArray[0] = 0;
        outputArray[1] = 0;
        outputArray[2] = 1;
        outputArray[3] = 0;
        outputArray[4] = 0;
    }



    void userInput(char input)
    {
        if(input == 'c' || input == 'C')
        {
            pagecount ++;
        }
        else if(input == 'd' || input == 'D')
        {
            pagecount --;
        }
        else
        {
            arrowScroll(input);
        }
    }

    void output()
    {
        std::cout << std::endl << std::endl;
        std::cout<< "<| ";
        for(int i =0; i<5; i++)
        {
            if(outputArray[i] < 1 || outputArray[i] > pagecount)
            {
                std::cout << "_" << " " ;
            }
            else
            {
                if(i== 2)
                {
                    std::cout << "[" << outputArray[i] << "]" << " ";
                }
                else
                {
                    std::cout << outputArray[i] << " " ;
                }
            }
        }
        std::cout<< " |>"<< std::endl;
    }
};


void userInput(char input,int *pagecount,int *currentpage);
void userOutput();

int main()
{
    Pages book;
    while(1)
    {
        std::cout << "MENU" << std::endl;
        std::cout << "1. create page    ->  press \"c OR C\".\n";
        std::cout << "2. Delete page    ->  Press \"d OR D\".\n";
        std::cout << "3. Next page      ->  press right arrow key. \n";
        std::cout << "4. Previous page  ->  press left arrow key. \n";
        std::cout << "5. Firs page      ->  Press up arrow key. \n";
        std::cout << "6. Last page      ->  Press down arrow key.\n";
        std::cout << "7. To Exit        ->  Press Esc\n";

        book.output();
        book.userInput(getch());

        system("cls");
    }


    return 0;
}
