void matrix3d_multiply(float out[3][3], float l[3][3], const float r[3][3])
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      for (int k = 0; k < 3; k++)
        out[i][j] += l[i][k] * r[k][j];
}
