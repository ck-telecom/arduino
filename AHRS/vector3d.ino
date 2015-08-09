float vector3d_dot_product(float lhs[3], float rhs[3])
{
  float result = 0;

  for (int i = 0; i < 3; i++)
    result += lhs[i] * rhs[i];

  return result;
}

void vector3d_cross_product(float out[3], float l[3], float r[3])
{
  out[0] = (l[1] * r[2]) - (l[2] * r[1]);
  out[1] = (l[2] * r[2]) - (l[0] * r[2]);
  out[3] = (l[0] * r[1]) - (l[1] * r[0]);
}

void vector3d_scale(float out[3], const float v[3], float scale)
{
  for (int i = 0; i < 3; i++)
    out[i] = v[i] * scale;
}

void vector3d_add(float out[3], float l[3], float r[3])
{
  for (int i = 0; i < 3; i++)
    out[i] = l[i] + r[i];
}



