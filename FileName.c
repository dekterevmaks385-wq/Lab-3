#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main(void)
{
    int task;
    printf("task: ");
    scanf("%d", &task);

    if (task == 1)
    {
        float S;
        float V;
        printf("S kmh: ");
        scanf("%f", &S);
        printf("V ms: ");
        scanf("%f", &V);
        float conv = V * 3.6;

        if (S > conv)
        {
            printf("S is bigger\n");
        }
        if (S < conv)
        {
            printf("V is bigger\n");
        }
        if (S == conv)
        {
            printf("equal\n");
        }
    }

    if (task == 2)
    {
        int num;
        int a;
        printf("num and a: ");
        scanf("%d %d", &num, &a);

        int d1 = num / 10;
        int d2 = num % 10;
        int sum = d1 + d2;

        if (sum >= 10)
        {
            printf("sum 2 digits\n");
        }
        if (sum < 10)
        {
            printf("sum 1 digit\n");
        }

        if (sum > a)
        {
            printf("sum > a\n");
        }
        if (sum <= a)
        {
            printf("sum not > a\n");
        }
    }

    if (task == 3)
    {
        float a;
        float b;
        float c;
        int count = 0;
        printf("a b c: ");
        scanf("%f %f %f", &a, &b, &c);

        int ia = a;
        int ib = b;
        int ic = c;

        if (a == ia)
        {
            count = count + 1;
        }
        if (b == ib)
        {
            count = count + 1;
        }
        if (c == ic)
        {
            count = count + 1;
        }
        printf("ints: %d\n", count);
    }

    if (task == 4)
    {
        int n;
        int m;
        printf("n and m: ");
        scanf("%d %d", &n, &m);

        int f = (m - 1) / 3 + 1;
        int ost = f % 2;

        if (ost != 0)
        {
            printf("go to %d\n", f);
        }
        if (ost == 0)
        {
            int p = f - 1;
            int nx = f + 1;
            printf("stop %d or %d\n", p, nx);
        }
    }

    if (task == 5)
    {
        int x;
        printf("3 digit num: ");
        scanf("%d", &x);

        int p1 = x / 100;
        int p2 = (x / 10) % 10;
        int p3 = x % 10;

        if (p1 > p3)
        {
            printf("1 > 3\n");
        }
        if (p3 > p1)
        {
            printf("3 > 1\n");
        }
        if (p1 == p3)
        {
            printf("1 = 3\n");
        }

        if (p1 > p2)
        {
            printf("1 > 2\n");
        }
        if (p2 > p1)
        {
            printf("2 > 1\n");
        }
        if (p1 == p2)
        {
            printf("1 = 2\n");
        }

        if (p2 > p3)
        {
            printf("2 > 3\n");
        }
        if (p3 > p2)
        {
            printf("3 > 2\n");
        }
        if (p2 == p3)
        {
            printf("2 = 3\n");
        }
    }

    if (task == 6)
    {
        float k;
        float b;
        float r;
        printf("k b r: ");
        scanf("%f %f %f", &k, &b, &r);

        float A = 1 + k * k;
        float B = 2 * k * b;
        float C = b * b - r * r;
        float D = B * B - 4 * A * C;

        if (D < 0)
        {
            printf("no points\n");
        }
        if (D == 0)
        {
            float x = -B / (2 * A);
            float y = k * x + b;
            printf("1 point %f %f\n", x, y);
        }
        if (D > 0)
        {
            float x1 = (-B + sqrt(D)) / (2 * A);
            float y1 = k * x1 + b;
            float x2 = (-B - sqrt(D)) / (2 * A);
            float y2 = k * x2 + b;
            printf("point1 %f %f\n", x1, y1);
            printf("point2 %f %f\n", x2, y2);
        }
    }

    if (task == 7)
    {
        float m1;
        float v1;
        float m2;
        float v2;
        printf("m1 v1: ");
        scanf("%f %f", &m1, &v1);
        printf("m2 v2: ");
        scanf("%f %f", &m2, &v2);

        float p1 = m1 / v1;
        float p2 = m2 / v2;

        if (p1 > p2)
        {
            printf("1 is denser\n");
        }
        if (p1 < p2)
        {
            printf("2 is denser\n");
        }
        if (p1 == p2)
        {
            printf("same\n");
        }
    }

    if (task == 8)
    {
        float x;
        printf("x: ");
        scanf("%f", &x);

        float s = sin(x);
        float c = cos(x);

        if (c == 0)
        {
            printf("tan error\n");
            if (s > c)
            {
                printf("%f %f\n", c, s);
            }
            if (s <= c)
            {
                printf("%f %f\n", s, c);
            }
        }
        if (c != 0)
        {
            float t = tan(x);
            float v1 = s;
            float v2 = c;
            float v3 = t;
            float tmp;

            if (v1 > v2)
            {
                tmp = v1;
                v1 = v2;
                v2 = tmp;
            }
            if (v1 > v3)
            {
                tmp = v1;
                v1 = v3;
                v3 = tmp;
            }
            if (v2 > v3)
            {
                tmp = v2;
                v2 = v3;
                v3 = tmp;
            }
            printf("sort %f %f %f\n", v1, v2, v3);
        }
    }

    if (task == 9)
    {
        float a;
        float b;
        float c;
        float d;
        printf("a b c d: ");
        scanf("%f %f %f %f", &a, &b, &c, &d);
        int ok = 0;

        if (a == d)
        {
            printf("a eq d\n");
            ok = 1;
        }
        if (b == d)
        {
            printf("b eq d\n");
            ok = 1;
        }
        if (c == d)
        {
            printf("c eq d\n");
            ok = 1;
        }

        if (ok == 0)
        {
            float max = d - a;
            float diff2 = d - b;
            float diff3 = d - c;

            if (diff2 > max)
            {
                max = diff2;
            }
            if (diff3 > max)
            {
                max = diff3;
            }
            printf("max = %f\n", max);
        }
    }

    if (task == 10)
    {
        float x;
        float y;
        float x1;
        float y1;
        float x2;
        float y2;
        float x3;
        float y3;

        printf("x y: ");
        scanf("%f %f", &x, &y);
        printf("tr: ");
        scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

        float pr1 = (x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y);
        float pr2 = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
        float pr3 = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);

        int in1 = 0;
        int in2 = 0;

        if (pr1 >= 0)
        {
            if (pr2 >= 0)
            {
                if (pr3 >= 0)
                {
                    in1 = 1;
                }
            }
        }

        if (pr1 <= 0)
        {
            if (pr2 <= 0)
            {
                if (pr3 <= 0)
                {
                    in2 = 1;
                }
            }
        }

        if (in1 == 1)
        {
            printf("in\n");
        }
        if (in2 == 1)
        {
            printf("in\n");
        }
        if (in1 == 0)
        {
            if (in2 == 0)
            {
                printf("out\n");
            }
        }
    }
}