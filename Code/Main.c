
#include <stdio.h>


int main(void) {
        
        struct _Trangle {
                int Height;
        } Trangle;
        
        Trangle.Height = 0;
 
        printf("Putin the trangle's height:");
        scanf("%d", &Trangle.Height);
        
        if(Trangle.Height < 0) {
                return 0;
        }
        
        
        for(size_t Index = 0; Index < Trangle.Height; Index += 1) {
                
                for(size_t Space = 0; Space < Trangle.Height - Index; Space += 1) {
                        printf("%s", " ");
                }
                
                for(size_t Symbol = 0; Symbol < Index * 2 + 1; Symbol += 1) {
                        printf("%s", "=");
                }
                
                printf("%s", "\n");
        }
        
        
        return 0;
}
