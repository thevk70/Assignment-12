// 1. Write a recursive function to print first N natural numbers
// #include <stdio.h>
// void natural_no(int n)
// {
//     if (n==0)
//     {
//         return;
//     }
//     else
//     {
//         natural_no(n - 1);
//     }
//     printf(" %d ", n);
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d", &num);
//     natural_no(num);
//     return 0;
// }

// 2. Write a recursive function to print first N natural numbers in reverse order
// #include <stdio.h>
// void natural_no(int n)
// {
//     if (n==0)
//     {
//         return;
//     }
//     else
//     printf(" %d ",n);
//     natural_no(n-1);   
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     natural_no(num);
//     return 0;
// }

// 3. Write a recursive function to print first N odd natural numbers
//  #include <stdio.h>
//  void ODD(int n)
//  {
//     if (n==-1)
//     {
//         return;
//     }
//     else
//     ODD(n-2);
//     printf("%d\t",n);
//  }
//  int main()
//  {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     ODD(num*2-1);
//     return 0;
//  }

// 4. Write a recursive function to print first N odd natural numbers in reverse order
//  #include <stdio.h>
//  void ODD(int n)
//  {
//     if (n==-1)
//     {
//         return;
//     }
//     else
//     printf("%d\t",n);
//     ODD(n-2);
//  }
//  int main()
//  {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     ODD(num*2-1);
//     return 0;
//  }

// 5. Write a recursive function to print first N even natural numbers
//  #include <stdio.h>
//  void EVEN(int n)
//  {
//      if (n==0)
//      {
//         return;
//      }
//      else
//      EVEN(n-2);
//      printf("%d\t",n);
//  }
//  int main()
//  {
//      int n;
//      printf("Enter the value of N:: ");
//      scanf("%d",&n);
//      EVEN(2*n);
//      return 0;
//  }

// 6. Write a recursive function to print first N even natural numbers in reverse order
// #include <stdio.h>
// void EVEN(int n)
// {
//     if (n==0)
//     {
//         return;
//     }
//     else
//     printf("%d\t",n);
//     EVEN(n-2);   
// }
// int main()
// {
//     int n;
//     printf("Enter the value of N:: ");
//     scanf("%d",&n);
//     EVEN(2*n);
//     return 0;
// }

// 7. Write a recursive function to print squares of first N natural numbers
// #include <stdio.h>
// void Sqr(int n)
// {
//     if (n==0)
//     {
//         return;
//     }
//     else
//     Sqr(n-1);
//     printf("%d\t",n*n);
// }
// int main()
// {
//     int num;
//     printf("Enter the value of N:: ");
//     scanf("%d",&num);
//     Sqr(num);
//     return 0;
// }

// 8. Write a recursive function to print binary of a given decimal number
//  #include <stdio.h>
//  void binary(int n)
//  {
//     if (n==0)
//     {
//        return;
//     }
//     else
//     printf("%d",n%2);
//     binary(n/2);
//  }
//  int main()
//  {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     binary(num);
//     return 0;
//  }

// 9. Write a recursive function to print octal of a given decimal number
//  #include <stdio.h>
//  void Octal(int n)
//  {
//      if (n==0)
//      {
//         return;
//      }
//      else
//      Octal(n/8);
//      printf("%d",n%8);
//  }
//  int main()
//  {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//      Octal(num);
//      return 0;
//  }

// 10. Write a recursive function to print reverse of a given number
//  #include <stdio.h>
//  void print(int n)
//  {
//      if (n==0)
//      return;
//      printf("%d",n%10);
//      print(n/10);
//  }
//  int main()
//  {
//     int num;
//     print("Enter any number:: ");
//     scanf("%d",&num);
//     print(num);
//     return 0;
//  }

