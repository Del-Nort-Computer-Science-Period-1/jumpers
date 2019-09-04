//
//  main.c
//  jumpers
//
//  Created by Parsons, Mason on 9/4/19.
//  Copyright © 2019 Parsons, Mason. All rights reserved.
//
#include <stdio.h>

main(void) {
    
    float amount;
    char name[15];
    printf("name your jumpers\n");
    scanf("%s",&name[15]);
    printf("how many jumps\n");
    scanf("%f",&amount);
    
    
    int countdown = amount;                  char* bedjumpers = &name[15];
    
    
    int i = countdown;
    while (i > -1) {
        
        if (i == 0) {
            printf("Zero little %s", bedjumpers);
        } else {
            
            printf("%i little %s jumping on the bed\n", i, bedjumpers);
            printf("One fell off and broke his head\n");
            printf("Mama called the doctor and the doctor said\n");
            printf("no more %s jumping on the bed.\n",bedjumpers);
        }
        
        
        i--;
    }
}
