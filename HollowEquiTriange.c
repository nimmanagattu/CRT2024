/*Printing Stars in Hollow Equilateral Triangle Shape

Input Format

Read n value

Constraints

1<=n<=10^7

Output Format

Printing Stars in Hollow Equilateral Triangle Shape

Sample Input 0

6
Sample Output 0

     * 
    * * 
   *   * 
  *     * 
 *       * 
* * * * * * 
Sample Input 1

9
Sample Output 1

        * 
       * * 
      *   * 
     *     * 
    *       * 
   *         * 
  *           * 
 *             * 
* * * * * * * * * 
Submissions: 65
Max Score: 0
Difficulty: Medium
Rate This Challenge:

    
More*/
 
1
#include <stdio.h>
2
#include <string.h>
3
#include <math.h>
4
#include <stdlib.h>
5
​
6
int main() {
7
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
8
    int n;
9
    scanf("%d", &n);
10
    for (int i = 0; i < n; i++) {
11
        for (int j = 0; j < n - i - 1; j++) {
12
            printf(" ");
13
        }
14
        for (int j = 0; j <= i; j++) {
15
            if (j == 0 || j == i || i == n - 1) {
16
                printf("* ");
17
            } else {
18
                printf("  ");
19
            }
20
        }
21
        printf("\n");
22
    }
23
    return 0;
24
}
