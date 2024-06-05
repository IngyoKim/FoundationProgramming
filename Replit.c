#include <stdio.h>
#include <math.h>

// 2-1. Hello Wolrd : https://www.acmicpc.net/problem/2557
/*
int main()
{
  printf("Hello World!");
}
*/

// 2-2. A+B : https://www.acmicpc.net/problem/1000
/*
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a+b);
}
*/

// 2-3. 사칙연산 : https://www.acmicpc.net/problem/10869
/*
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a+b);
  printf("%d\n", a-b);
  printf("%d\n", a*b);
  printf("%d\n", a/b);
  printf("%d", a%b);
}
*/

// 2-4. 나머지 : https://www.acmicpc.net/problem/10430
/*
int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", (a+b)%c);
  printf("%d\n", ((a%c)+(b%c))% c);
  printf("%d\n", (a*b)%c);
  printf("%d\n", ((a%c)*(b%c))%c);
}
*/

// 2-5. 꼬마 정민 : https://www.acmicpc.net/problem/11382
/*
int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", a+b+c);
}
*/

// 3-1. 시험 성적 : https://www.acmicpc.net/problem/9498
/*
int main()
{
  int a;
  scanf("%d", &a);
  if(a > 90 && a <= 100)
  {
    printf("A");
  }
  else if(a > 80 && a <= 90)
  {
    printf("B");
  }
  else if(a > 70 && a <= 80)
  {
    printf("C");
  }
  else if(a > 60 && a<= 70)
  {
    printf("D");
  }
  else
  {
    printf("F");
  }
}
*/

// 3-2. 윤년 : https://www.acmicpc.net/problem/2753
/*
int main()
{
  int a;
  scanf("%d", &a);
  if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
}
*/

// 3-3. 오븐시계 : https://www.acmicpc.net/problem/2525
/*
int main()
{
  int a, b, c, m, h;
  scanf("%d %d", &a, &b);
  scanf("%d", &c);
  m = (60 * a) + b + c;
  if (m >= 60)
  {
    h = m/60;
    m = m%60;
    if (h >= 24)
    {
      h -= 24;
    }
  }
  printf("%d %d", h, m);
}
*/

// 3-4. 구구단 : https://www.acmicpc.net/problem/2739
/*
int main()
{
  int n;
  scanf("%d", &n);
  for (int i=1; i <= 9; i++)
    {
      printf("%d * %d = %d\n", n, i, n*i);
    }
}
*/

// 3-5. 영수증 : https://www.acmicpc.net/problem/25304
/*
int main()
{
  int totalPrice, number, eachPrice, eachNumber, price = 0;
  scanf("%d", &totalPrice);
  scanf("%d", &number);

  for (int i = 1; i <= number; i++)
    {
      scanf("%d %d", &eachPrice, &eachNumber);
      price += eachPrice * eachNumber;
    }
  if(price == totalPrice)
  {
    printf("Yes");
  }
  else{
    printf("No");
  }
}
*/

// 3-6. A+B – 5 : https://www.acmicpc.net/problem/10952
/*
int main()
{
  while(1)
    {
      int a, b;
      scanf("%d %d", &a, &b);
      if (a == 0 && b == 0)
      {
        break;
      }
      printf("%d\n", a+b);
    }
}
*/

// 4-1. 세탁소 사장 동혁 - https://www.acmicpc.net/problem/2720
/*
int main()
{
  int t, c, quarter=0, dime=0, nickel=0, penny=0;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
    {
      quarter=0, dime=0, nickel=0, penny=0;
      scanf("%d", &c);
      if (c >= 25)
      {
        quarter = c/25;
        c = c%25;
      }
      if(c >= 10)
      {
        dime = c/10;
        c = c%10;
      }
      if(c>=5)
      {
        nickel = c/5;
        c = c%5;
      }
      penny = c;
      printf("%d %d %d %d\n", quarter, dime, nickel, penny);
    }
}
*/

// 4-2. 중앙 이동 알고리즘 - https://www.acmicpc.net/problem/2903
/*
int main()
{
  int a, value = 2;
  scanf("%d", &a);
  for (int i = 0; i<a; i++)
    {
      value += (int)pow(2, i);
    }
  printf("%d", (int)pow(value, 2));
}
*/

// 4-3. 벌집 - https://www.acmicpc.net/problem/2292
/*
int main()
{
  int n, value = 0;
  scanf("%d", &n);
  if (n == 1)
  {
    printf("1");
  }
  else
  {
    for (int i = 0; i <= 100; i++)
      {
        value += i;
        if (n >= ((3*value) +1) * 2 && n < ((3*(value +i + 1)) + 1) * 2)
        {
          printf("%d", i+2);
        }
      }
  }
}
*/

// 4-4. 달팽이는 올라가고 싶다 - https://www.acmicpc.net/problem/2869
/*
int main()
{
  int a, b, v, d;
  scanf("%d %d %d", &a, &b, &v);
  d = (v - b - 1) / (a - b) + 1;
  printf("%d", d);
}
*/

// 5-1. 배수와 약수 - https://www.acmicpc.net/problem/5086
/*
int main()
{
  int a, b;
  while(1)
    {
      scanf("%d %d", &a, &b);
      if(a == 0 && b == 0)
      {
        break;
      }
      if (a >= b)
      {
        if(a % b == 0)
        {
          printf("multiple\n");
        }
        else
        {
          printf("neither\n");
        }
      }
      else
      {
        if (b % a == 0)
        {
          printf("factor\n");
        }
        else
        {
          printf("neither\n");
        }
      }
    }
}
*/

// 5-2. 약수 구하기 - https://www.acmicpc.net/problem/2501
/*
int main()
{
  int a, b, d, cnt = 0;
  scanf("%d %d", &a, &b);
  for (int i = 1; i <= a; i++)
    {
      if(a % i == 0)
      {
        cnt++;
        if (cnt == b)
        {
          printf("%d", i);
          break;
        }
      }
    }
    if (cnt < b)
    {
      printf("0");
    }
}
*/

// 5-3. 약수들의 합 - https://www.acmicpc.net/problem/9506
/*
int main()
{
  int a, sum = 0;
  while(1)
    {
      scanf("%d", &a);
      sum = 0;
      if (a < 0)
      {
        break;
      }
      for(int i = 1; i < a; i++)
        {
          if(a % i == 0)
          {
            sum += i;
          }
        }
      if (sum == a)
      {
        printf("%d = 1", a);
        for(int i = 2; i < a; i++)
          {
            if(a % i == 0)
            {
              printf(" + %d", i);
            }
          }
      }
      else
      {
        printf("%d is NOT perfect", a);
      }
      printf("\n");
    }
}
*/

// 5-4. 소수 찾기 - https://www.acmicpc.net/problem/1978
/*
int main()
{
  int a, b, cnt, cnt2=0;
  scanf("%d", &a);
  for (int i=1; i<=a; i++)
    {
      cnt = 0;
      scanf("%d", &b);
      for (int j = 1; j <= b; j++)
        {
          if (b % j == 0)
          {
            cnt++;
          }
        }
      if (cnt == 2)
        {
          cnt2++;
        }
    }
  printf("%d", cnt2);
}
*/

// 5-5. 소인수분해 - https://www.acmicpc.net/problem/11653
/*
int main()
{
  int a;
  scanf("%d", &a);
  for (int i = 2; i <= a; i++)
    {
      if(a % i == 0)
      {
        a /= i;
        printf("%d\n", i);
        i = 1;
      }
    }
}
*/

// 7-1. 킹, 퀸, 룩, 비숍, 나이트, 폰 : https://www.acmicpc.net/problem/3003
/*
int main()
{
  int k, q, l, v, kn, p;
  scanf("%d %d %d %d %d %d", &k, &q, &l, &v, &kn, &p);
  printf("%d %d %d %d %d %d", 1-k, 1-q, 2-l, 2-v, 2-kn, 8-p);
}
*/

// 7-2. 수학은 체육과목입니다 : https://www.acmicpc.net/problem/15894
/*
int main()
{
  int a;
  scanf("%d", &a);
  printf("%d", 4 * a);
}
*/

// 7-3. 주사위 세개 : https://www.acmicpc.net/problem/2480
/*
int main()
{
  int a, b, c, total= 0;
  scanf("%d %d %d", &a, &b, &c);
  if(a == b && b == c)
  {
    total = 10000 + (a * 1000);
  }
  else if(a == b && a != c)
  {
    total = 1000 + (a * 100);
  }
  else if(a == c && a!= b)
  {
    total = 1000 + (a * 100);
  }
  else if(b == c && b != a)
  {
    total = 1000 + (b * 100);
  }
  else
  {
    if (a > b && a > c)
    {
      total = a * 100;
    }
    else if (b > a && b > c)
    {
      total = b * 100;
    }
    else if (c > a && c > b)
    {
      total = c * 100;
    }
  }
  printf("%d", total);
}
*/

// 12-1. 문자와 문자열 : https://www.acmicpc.net/problem/27866
/*
int main()
{
  char arr[1000];
  int a;
  scanf("%s", arr);
  scanf("%d", &a);
  printf("%c", arr[a-1]);
}
*/

// 12-2. 문자열 : https://www.acmicpc.net/problem/9086
/*
int main()
{
  char arr[1000];
  int a,cnt;
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
    {
      cnt = 0;
      scanf("%s", arr);
      for (int j = 0; j < 1000; j++)
        {
          cnt++;
          if(arr[j] == '\0')
          {
            break;
          }
        }
      printf("%c%c\n", arr[0], arr[cnt-2]);
    }
}
*/

// 12-3. 숫자의 합 : https://www.acmicpc.net/problem/11720
/*
int main()
{
  int a, b, sum= 0;
  scanf("%d", &a);
  for (int i =1; i <= a; i++)
    {
      scanf("%1d", &b);
      sum += b;
    }
  printf("%d", sum);
}
*/

// 12-4. 문자열 반복 : https://www.acmicpc.net/problem/2675
/*
int main()
{
  int a, b;
  char arr[20];
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
    {
      scanf("%d %s", &b, arr);
      for (int j = 0; j<=20; j++)
        {
            if (arr[j] == '\0')
            {
              j = 21;
            }
          for (int k = 1; k<=b; k++)
            {
              printf("%c", arr[j]);
            }
        }
      printf("\n");
    }
}
*/

// 12-5. 단어의 개수 : https://www.acmicpc.net/problem/1152
/*
int main()
{
  int cnt = 0, value;
  char arr[1000];
  fgets(arr, 1000, stdin);
  printf("%s", arr);
  for (int i = 1; i < 1000; i++)
    {
      if (arr[i] == '\n')
      {
        if (arr[i-1] == ' ')
        {
          cnt--;
        }
        break;
      }
      else if (arr[i] == ' ')
      {
        cnt++;
      }
    }
  printf("%d", cnt+1);
}
*/

// 13-1. 최댓값 - https://www.acmicpc.net/problem/2566
/*
int main()
{
  int arr[9][9], max = 0, value1, value2;
  for (int i=0; i< 9; i++)
    {
      for (int j =0; j<9; j++)
        {
          scanf("%d", &arr[i][j]);
          if (arr[i][j] > max)
          {
            max = arr[i][j];
            value1 = i;
            value2 = j;
          }
        }
    }
  printf("%d\n", max);
  printf("%d %d", value1+1, value2+1);
}
*/

// 13-2. 세로읽기 - https://www.acmicpc.net/problem/10798
/*
int main()
{
  char arr[5][15] = { 0 }, arr2[15][5] = { 0 };
  for (int i = 0; i<5; i++)
    {
      scanf("%s", arr[i]);
    }
  for(int i = 0; i<15; i++)
    {
      for (int j = 0; j <5; j++)
        {
          arr2[i][j] = arr[j][i];
          if (arr2[i][j] == '\0')
          {
            ;
          }
          else
          {
            printf("%c", arr2[i][j]);
          }
        }
    }
}
*/

// 13-3. 수 정렬하기 - https://www.acmicpc.net/problem/2750
/*
int main()
{
  int a, tmp;
  int arr[1000];
  scanf("%d", &a);
  for (int i = 0 ; i<a; i++)
    {
      scanf("%d", &arr[i]);
    }
  for (int i = 0; i < a; i++)
    {
      for (int j = 0; j < a - 1; j++)
        {
          if(arr[j] > arr[j+1])
          {
            tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
          }
        }
    }
  for (int i = 0; i < a; i++)
    {
      printf("%d\n", arr[i]);
    }
}
*/

// 13-4. 최댓값 - https://www.acmicpc.net/problem/2562
/*
int main()
{
  int arr[9], max = 0, value =0;
  for (int i =0; i<9; i++)
    {
      scanf("%d", &arr[i]);
      if (arr[i]> max)
      {
        max = arr[i];
        value = i;
      }
    }
  printf("%d\n%d", max, value+1);
}
*/