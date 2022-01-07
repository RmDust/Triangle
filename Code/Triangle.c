
#include <stdio.h>
#include <windows.h>

// PrintTriangleIsosceles
extern void PrintTriangleI(size_t Height) {
        
        for(size_t Index = 0; Index < Height; Index += 1) {
                
                for(size_t Space = 0; Space < Height - Index; Space += 1) {
                        printf("%s", " ");
                }
                
                for(size_t Symbol = 0; Symbol < Index * 2 + 1; Symbol += 1) {
                        printf("%s", "=");
                }
                
                printf("%s", "\n");
        }
        
} 

// PrintTriangleIsoscelesRightAngle
extern void PrintTriangleIRA_RightDown(size_t Height) {
            
        size_t Symbol = 1;
            
        for(size_t Index = 0; Index < Height; Index += 1) {
                        
                if(Index % 2 != 0) {
                        Symbol = Index + 1;
                }
                
                for(size_t Space = 0; Space < Height - Index; Space += 1) {
                        printf("%s", " ");
                }
                
                for(size_t N = Symbol; N > 0 ; N -= 1) {
                        printf("%s", "=");
                }
                
                printf("%s", "\n");
        }
        
}

extern void PrintTriangleIRA_RightTop(size_t Height) {
            
        size_t Symbol = Height;
            
        for(size_t Index = Height; Index > 0; Index -= 1) {
                        
                if(Index % 2 == 0) {
                        Symbol = Index + 1;
                }
                
                for(size_t Space = (Height - Index); Space > 0; Space -= 1) {
                        printf("%s", " ");
                }
                
                for(size_t N = Symbol - 1; N > 0 ; N -= 1) {
                        printf("%s", "=");
                }
                
                printf("%s", "\n");
        }
        
}

extern void PrintTriangleIRA_LeftDown(size_t Height) {
            
        size_t Symbol = 1;
            
        for(size_t Index = 0; Index < Height; Index += 1) {
                        
                if(Index % 2 != 0) {
                        Symbol = Index + 1;
                }
                
                for(size_t N = Symbol; N > 0 ; N -= 1) {
                        printf("%s", "=");
                }
                
                printf("%s", "\n");
        }
        
}

extern void PrintTriangleIRA_LeftTop(size_t Height) {
            
        size_t Symbol = Height;
            
        for(size_t Index = Height; Index > 0; Index -= 1) {

                if(Index % 2 == 0) {
                        Symbol = Index + 1;
                }
                
                for(size_t N = Symbol; N > 0 ; N -= 1) {
                        printf("%s", "=");
                }
                
                printf("%s", "\n");
        }
        
}
