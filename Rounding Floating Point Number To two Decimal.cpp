float roundr(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67

    int a = var * 1000;
    int b = var * 100;
    int c = a - b;

    float value = (int)(var * 100);

    if (c > 5)
        value = (int)(var * 100 + .5);

    return (float)value / 100;
}

int main()
{

    float r = roundr(ans);
}