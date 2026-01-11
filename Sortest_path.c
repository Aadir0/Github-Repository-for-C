#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    int dx, dy, distance;

    printf("Enter starting point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter destination point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    distance = sqrt(pow(dx, 2) + pow(dy, 2));

    printf("Shortest path distance = %d units\n", distance);

    return 0;
}