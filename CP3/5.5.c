double hypotenuse(double side1,double side2)
{
    double hyp = sqrt(side1*side1 + side2*side2);
    return hyp;
}
int smallest(int a, int b, int c)
{
    int small = a;
    if(b < small)
        small = b;
    if(c < small)
        small = c;
    return small;
}
void instructions(void)
{
    printf("Instructions:\n");
    printf("More Insructions\n");
}
float intToFloat(int number)
{
    return (float)number;
}