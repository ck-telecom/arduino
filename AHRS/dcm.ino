void dcm_from_euler(float dcm[3][3], float pitch, float roll, float yaw)
{
  float c1 = cos(roll);
  float s1 = sin(roll);
  float c2 = cos(pitch);
  float s2 = sin(pitch);
  float c3 = cos(yaw);
  float s3 = sin(yaw);
  // Euler angles, right-handed, intrinsic, XYZ convention
  // (which means: rotate around body axes Z, Y', X'')
  dcm[0][0] = c2 * c3;
  dcm[0][1] = c3 * s1 * s2 - c1 * s3;
  dcm[0][2] = s1 * s3 + c1 * c3 * s2;

  dcm[1][0] = c2 * s3;
  dcm[1][1] = c1 * c3 + s1 * s2 * s3;
  dcm[1][2] = c1 * s2 * s3 - c3 * s1;

  dcm[2][0] = -s2;
  dcm[2][1] = c2 * s1;
  dcm[2][2] = c1 * c2;
}
