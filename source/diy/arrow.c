int arrow_vertices = 20;

int arrow_faces = 14;

float arrow_v[] =
{
   0.1, 0.025, -0.043301,
   0.1, 0.025, 0.043301,
   0.8, 0.025, -0.043301,
   0.8, 0.025, 0.043301,
   0.1, -0.05, 0,
   0.8, -0.05, 0,
   0.1, 0.025, -0.043301,
   0.8, 0.025, -0.043301,
   0.8, -0.030902, -0.095106,
   0.8, -0.1, 0,
   0.8, 0.080902, -0.058779,
   0.8, -0.030902, 0.095106,
   0.8, 0.080902, 0.058779,
   0.8, -0.030902, -0.095106,
   0.8, 0.080902, -0.058779,
   1, 0, 0,
   0.8, 0.080902, 0.058779,
   0.8, -0.030902, 0.095106,
   0.8, -0.1, 0,
   0.8, -0.030902, -0.095106,
};

float arrow_vn[] =
{
   0, 0.499998, -0.866026,
   0, 0.500002, 0.866025,
   0, 0.5, -0.866026,
   0, 0.5, 0.866025,
   0, -1, 0,
   0, -1, 0,
   0, 0.499998, -0.866026,
   0, 0.5, -0.866026,
   -1, 0, 0,
   -1, 0, 0,
   -1, 0, 0,
   -1, 0, 0,
   -1, 1e-06, 0,
   0.447214, -0.276393, -0.850651,
   0.447214, 0.723607, -0.525731,
   1, 0, 0,
   0.447214, 0.723607, 0.525731,
   0.447213, -0.276393, 0.850651,
   0.447214, -0.894427, 0,
   0.447214, -0.276393, -0.850651,
};

float arrow_vt[] =
{
   0.375, 0.3125,
   0.458333, 0.3125,
   0.375, 0.68844,
   0.458333, 0.68844,
   0.541667, 0.3125,
   0.541667, 0.68844,
   0.625, 0.3125,
   0.625, 0.68844,
   0.577254, 0.012236,
   0.75, 0.25,
   0.297746, 0.103054,
   0.577254, 0.487764,
   0.297746, 0.396946,
   0.25, 0.5,
   0.35, 0.5,
   0.5, 1,
   0.45, 0.5,
   0.55, 0.5,
   0.65, 0.5,
   0.75, 0.5,
};

int arrow_f[] =
{
   0, 1, 2,
   2, 1, 3,
   1, 4, 3,
   3, 4, 5,
   4, 6, 5,
   5, 6, 7,
   8, 9, 10,
   9, 11, 10,
   11, 12, 10,
   13, 14, 15,
   14, 16, 15,
   16, 17, 15,
   17, 18, 15,
   18, 19, 15,
};
