// Program to display multiplication table of any number 
// here we choose 5
// to print table of another number just change 
// the value of the variable table

 #include <stdio.h>
 
 int main()
 {
    int i = 0, table = 5, num;

    printf("Multiplication table of %d:\n", table);
    num = table;
    while(i < 10)
    {
        i += 1;
        printf("%d x %d = %d\n", table, i, num);
        num += table;
    }
     return 0;
 }