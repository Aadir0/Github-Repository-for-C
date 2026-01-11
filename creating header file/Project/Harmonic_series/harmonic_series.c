float harmonic_for(int n)
{
    float sum = 0.0;
    for (int i = 1; i <= n; i++)
        sum += 1.0f / i;
    return sum;
}