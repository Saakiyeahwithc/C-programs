// #include <stdio.h>
// #include <dos.h>
// void draw_cicle(int, int, int);
// void symmetry(int, int, int, int);
// void main()
// {
//     int xc, yc, R;
//     int gd, gm;
//     initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
//     printf("Enter the center of the circle:\n");
//     printf("Xc=");
//     scanf("%d", &xc);
//     printf("Enter the center of the circle:\n");
//     printf("Yc=");
//     scanf("%d", &yc);
//     printf("Enter the radius of the circle:\n");
//     scanf("%d", &R);
//     draw_cicle(xc, yc, R);
//     closegraph();
// }

// void draw_circle(int xc, int yc, int rad)
// {
//     int x = 0;
//     int y = rad;
//     int p = 1 - rad;
//     symmetry(x, y, xc, yc);
//     for (x = 0; y < x; x++)
//     {
//         if (p < 0)
//             p += 2 * x + 3;
//         else
//         {
//             p += 2 * (x - y) + 5;
//             y--;
//         }
//         symmetry(x, y, xc, yc);
//         delay(50);
//     }
// }

// void symmetry(int x, int y, int xc, int yc)
// {
//     putpixel(xc + x, yc - y, WHITE);
//     delay(50);
//     putpixel(xc + y, yc - x, WHITE);
//     delay(50);
//     putpixel(xc + y, yc + x, WHITE);
//     delay(50);
//     putpixel(xc + x, yc + y, WHITE);
//     delay(50);
//     putpixel(xc - x, yc + y, WHITE);
//     delay(50);
//     putpixel(xc - y, yc + x, WHITE);
//     delay(50);
//     putpixel(xc - y, yc - x, WHITE);
//     delay(50);
//     putpixel(xc - x, yc - y, WHITE);
//     delay(50);
// }