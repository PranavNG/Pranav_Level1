//Actvity 13
#include <stdio.h>
#include <math.h>

struct rectangle
{
    float x1, y1, x2, y2, x3, y3, area;
};
typedef struct rectangle rec;

rec input_one()
{
    rec rect;
    scanf("%f %f %f %f %f %f", &rect.x1, &rect.y1, &rect.x2, &rect.y2, &rect.x3, &rect.y3);
    return rect;
}

void input_n(int n, rec rectangles[n])
{
    for (int i = 0; i < n; i++)
        rectangles[i] = input_one();
}

float dist(float x1, float y1, float x2, float y2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

float calc_area(float l, float b)
{
    return l * b;
}
void compute_one(rec *rect)
{
    float length = dist(rect->x1, rect->y1, rect->x2, rect->y2);
    float breadth = dist(rect->x2, rect->y2, rect->x3, rect->y3);
    float height = dist(rect->x1, rect->y1, rect->x3, rect->y3);

    if (length > breadth && length > height)
        rect->area = calc_area(breadth, height);
    else if (breadth > length && breadth > height)
        rect->area = calc_area(length, height);
    else
        rect->area = calc_area(length, breadth);
}

void compute_n(int n, rec rectangles[n])
{
    for (int i = 0; i < n; i++)
        compute_one(&rectangles[i]);
}

void output_one(rec rect)
{
    printf("Area of rect with vertices (%f,%f), (%f,%f), (%f,%f) is %.2f \n",rect.x1, rect.y1, rect.x2, rect.y2, rect.x3, rect.y3, rect.area);
}

void output_n(int n, rec rectangles[n])
{
    for (int i = 0; i < n; i++)
        output_one(rectangles[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    rec rectangles[n];
    input_n(n, rectangles);
    compute_n(n, rectangles);
    output_n(n, rectangles);

    return 0;
}
