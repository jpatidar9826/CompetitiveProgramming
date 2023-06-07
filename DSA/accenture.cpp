double PI = 3.14159265358979323846;

double dx = centerX2 - centerX1;
double dy = centerY2 - centerY1;
double d = sqrt(dx * dx + dy * dy);

if (d <= fabs(radius1 - radius2))
{
    double smallerRadius = (radius1 < radius2) ? radius1 : radius2;
    return PI * smallerRadius * smallerRadius;
}

double angle1 = acos((radius1 * radius1 + d * d - radius2 * radius2) / (2 * radius1 * d));
double angle2 = acos((radius2 * radius2 + d * d - radius1 * radius1) / (2 * radius2 * d));
answer = angle1 * radius1 * radius1 + angle2 * radius2 * radius2 - radius1 * d * sin(angle1);
return answer;