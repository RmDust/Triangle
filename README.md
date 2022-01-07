# Triangle
![GitHub Last Commit](https://img.shields.io/github/last-commit/bre97-web/Trangle?color=%234b8bf5&label=Last%20commit)
![GitHub commits since latest release (by date) for a branch](https://img.shields.io/github/commits-since/bre97-web/Trangle/latest?color=%234b8bf5&label=Commits%20since%20last%20release)  

![Version 1.0.0](https://img.shields.io/badge/Version-1.0.1-lightgreen)
![Codename January 2022](https://img.shields.io/badge/Codename-January%202022%20Recovery%201-lightgreen)  

![C program language](https://img.shields.io/badge/Language-C-lightgreen)
![Students are object](https://img.shields.io/badge/Object-Students-lightgreen)
  

## Instruction  
Suitable for triangles in C language teaching. Various triangles (right-angle triangles, equilateral triangles, equal waist triangles).  

- Impotant  
  + **need for some students, eazy-code goto -> Release -> 1.0.0 please.**  
  + **you can NOT easy to get easy-code from 1.0.1**  

### Interface  
|Interface                            |Return |Tips                           |
|:---                                 |:---   |                           ---:|
|PrintTriangleI(Size)                 |void   |PrintTriangleI(2)              |
|PrintTriangleIRA_RightDown(Size)     |void   |PrintTriangleIRA_RightDown(7)  |
|PrintTriangleIRA_RightTop(Size)      |void   |PrintTriangleIRA_RightTop(0)   |
|PrintTriangleIRA_LeftDown(Size)      |void   |PrintTriangleIRA_LeftDown(7)   |
|PrintTriangleIRA_LeftTop(Size)       |void   |PrintTriangleIRA_LeftTop(7)    |

```C
/* Files
 *   Main.c
 *   Triangle.c
 *   Triangle.h
 */

#include <stdio.h>
#include "Triangle.h"

int main(void) {

        /* Output
         * =
         * ==
         * ===
         */
        printf("%d", PrintTriangleIRA_LeftDown(3));
        
        return 0;
}
```
