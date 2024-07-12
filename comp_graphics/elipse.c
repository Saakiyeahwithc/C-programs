// #include <stdio.h>
// #include <math.h>

// void display();
// float x, y;
// int xc, yc;
// void main()
// {
//     int gd = detect, gm;
//     int rx, ry;
//     float p1, p2;
//     initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
//     printf("Enter the center point:");
//     scanf("%d%d", &xc, &yc);
//     printf("Enter the value for Rx and Ry:");
//     scanf("%d%d", &rx, &ry);
//     x = 0;
//     y = ry;
//     display();
//     p1 = (ry * ry) - (rx * rx * ry) + (rx * rx) / 4;
//     while ((2.0 * ry * ry * x) <= (2.0 * rx * rx * y))
//     {
//         x++;
//         if (p1 <= 0)
//             p1 = p1 + (2.0 * ry * ry * x) + (ry * ry);
//         else
//         {
//             y--;
//             p1 = p1 + (2.0 * ry * ry * x) - (2.0 * rx * rx * y) + (ry * ry);
//         }
//         display();
//         x = -x;
//         display();
//         x = -x;
//     }
//     x = rx;
//     y = 0;
//     display();
//     p2 = (rx * rx) + 2.0 * (ry * ry * rx) + (ry * ry) / 4;
//     while ((2.0 * ry * ry * x) <= (2.0 * rx * rx * y))
//     {
//         y++;
//         if (p2 > 0)
//             p2 = p2 - (2.0 * rx * rx * y) + (rx * rx);
//         else
//         {
//             x--;
//             p2 = p2 + (2.0 * ry * ry * x) - (2.0 * rx * rx * y) - (rx * rx);
//         }
//         display();
//         y = -y;
//         display();
//         y = -y;
//     }
//     closegrapg();
// }

// void display()
// {
//     delay(50);
//     putpixel(xc + x, yc + y, 7);
//     putpixel(xc - x, yc + y, 7);
//     putpixel(xc + x, yc - y, 7);
//     putpixel(xc - x, yc - y, 7);
// }