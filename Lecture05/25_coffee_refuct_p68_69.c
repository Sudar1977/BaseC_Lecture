#include <stdio.h>
#include <conio.h>

enum states { READY, PREPFRE, WAIT, CHANGE, RETURN };
enum signals { ONE_RUBL, TWO_RUBLS, CANCEL, NONE };

enum signals GetUserSignal(void)
{
    char Choice;
    while(1)
    {
        printf("1.Put 1 rubl\n2.Put 2 rubl\n0.Cancel\n");
        Choice = getch();
        switch(Choice)
        {
            case '1': return ONE_RUBL;
            case '2': return TWO_RUBLS;
            case '0': return CANCEL;
        }
    }
}

int main()
{
    enum states state = READY;
    enum signals signal = NONE;
    while (1)
    {
        switch (state)
        {
            case READY:
            printf("Ready\n");
            signal = GetUserSignal();
            if(signal==TWO_RUBLS)
                state = PREPFRE;
            if(signal==ONE_RUBL)
                state = WAIT;
            break;
            case PREPFRE:
                printf("Prepare cofee\n");
                state = READY;
            break;
            case WAIT:
                printf("Wait\n");
                signal = GetUserSignal();
                if(signal==TWO_RUBLS)
                    state = CHANGE;
                if(signal==ONE_RUBL)
                    state = PREPFRE;
                if(signal==CANCEL)
                    state = RETURN;
                break;
            case CHANGE:
                printf("Change 1 Rubl\n");
                state = PREPFRE;
            break;
            case RETURN:
                printf("Change 1 Rubl\n");
                state = READY;
            break;
        }
    }
    return 0;
}
