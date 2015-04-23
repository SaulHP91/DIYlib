int pivot_vertices = 89;

int pivot_faces = 120;

float pivot_v[] =
{
   0.043301, -0.086603, -0.025,
   0.025, -0.086603, -0.043301,
   0.075, -0.05, -0.043301,
   0.043301, -0.05, -0.075,
   0, -0.086603, -0.05,
   0, -0.05, -0.086603,
   -0.025, -0.086603, -0.043301,
   -0.043301, -0.05, -0.075,
   -0.043301, -0.086603, -0.025,
   -0.075, -0.05, -0.043301,
   -0.05, -0.086603, 0,
   -0.086603, -0.05, 0,
   -0.043301, -0.086603, 0.025,
   -0.075, -0.05, 0.043301,
   -0.025, -0.086603, 0.043301,
   -0.043301, -0.05, 0.075,
   0, -0.086603, 0.05,
   0, -0.05, 0.086603,
   0.025, -0.086603, 0.043301,
   0.043301, -0.05, 0.075,
   0.043301, -0.086603, 0.025,
   0.075, -0.05, 0.043301,
   0.05, -0.086603, 0,
   0.086603, -0.05, 0,
   0.043301, -0.086603, -0.025,
   0.075, -0.05, -0.043301,
   0.086603, 0, -0.05,
   0.05, 0, -0.086603,
   0, 0, -0.1,
   -0.05, 0, -0.086603,
   -0.086603, 0, -0.05,
   -0.1, 0, 0,
   -0.086603, 0, 0.05,
   -0.05, 0, 0.086603,
   0, 0, 0.1,
   0.05, 0, 0.086603,
   0.086603, 0, 0.05,
   0.1, 0, 0,
   0.086603, 0, -0.05,
   0.075, 0.05, -0.043301,
   0.043301, 0.05, -0.075,
   0, 0.05, -0.086603,
   -0.043301, 0.05, -0.075,
   -0.075, 0.05, -0.043301,
   -0.086603, 0.05, 0,
   -0.075, 0.05, 0.043301,
   -0.043301, 0.05, 0.075,
   0, 0.05, 0.086603,
   0.043301, 0.05, 0.075,
   0.075, 0.05, 0.043301,
   0.086603, 0.05, 0,
   0.075, 0.05, -0.043301,
   0.043301, 0.086603, -0.025,
   0.025, 0.086603, -0.043301,
   0, 0.086603, -0.05,
   -0.025, 0.086603, -0.043301,
   -0.043301, 0.086603, -0.025,
   -0.05, 0.086603, 0,
   -0.043301, 0.086603, 0.025,
   -0.025, 0.086603, 0.043301,
   0, 0.086603, 0.05,
   0.025, 0.086603, 0.043301,
   0.043301, 0.086603, 0.025,
   0.05, 0.086603, 0,
   0.043301, 0.086603, -0.025,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, -0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
   0, 0.1, 0,
};

float pivot_vn[] =
{
   0.48399, -0.835568, -0.259959,
   0.289168, -0.835568, -0.467127,
   0.770829, -0.46841, -0.431757,
   0.451679, -0.46841, -0.759327,
   0.016864, -0.835568, -0.549128,
   0.011502, -0.46841, -0.883436,
   -0.259959, -0.835568, -0.48399,
   -0.431757, -0.46841, -0.770829,
   -0.467127, -0.835568, -0.289168,
   -0.759327, -0.46841, -0.451679,
   -0.549128, -0.835568, -0.016864,
   -0.883436, -0.468411, -0.011502,
   -0.48399, -0.835568, 0.259959,
   -0.770829, -0.46841, 0.431757,
   -0.289168, -0.835568, 0.467127,
   -0.451679, -0.46841, 0.759327,
   -0.016864, -0.835568, 0.549128,
   -0.011502, -0.46841, 0.883436,
   0.259959, -0.835568, 0.48399,
   0.431757, -0.46841, 0.770829,
   0.467127, -0.835568, 0.289168,
   0.759327, -0.46841, 0.451679,
   0.549128, -0.835568, 0.016864,
   0.883436, -0.468411, 0.011502,
   0.48399, -0.835568, -0.259959,
   0.770829, -0.46841, -0.431757,
   0.866025, 0, -0.5,
   0.5, 0, -0.866025,
   0, 0, -1,
   -0.5, 0, -0.866025,
   -0.866025, 0, -0.5,
   -1, 0, 0,
   -0.866025, 0, 0.5,
   -0.5, 0, 0.866025,
   0, 0, 1,
   0.5, 0, 0.866025,
   0.866025, 0, 0.5,
   1, 0, 0,
   0.866025, 0, -0.5,
   0.759327, 0.46841, -0.451679,
   0.431757, 0.46841, -0.770829,
   -0.011502, 0.46841, -0.883436,
   -0.451679, 0.46841, -0.759327,
   -0.770829, 0.46841, -0.431757,
   -0.883436, 0.468411, 0.011502,
   -0.759327, 0.46841, 0.451679,
   -0.431757, 0.46841, 0.770829,
   0.011502, 0.46841, 0.883436,
   0.451679, 0.46841, 0.759327,
   0.770829, 0.46841, 0.431757,
   0.883436, 0.468411, -0.011502,
   0.759327, 0.46841, -0.451679,
   0.467127, 0.835568, -0.289168,
   0.259959, 0.835568, -0.48399,
   -0.016864, 0.835568, -0.549128,
   -0.289168, 0.835568, -0.467127,
   -0.48399, 0.835568, -0.259959,
   -0.549128, 0.835568, 0.016864,
   -0.467127, 0.835568, 0.289168,
   -0.259959, 0.835568, 0.48399,
   0.016864, 0.835568, 0.549128,
   0.289168, 0.835568, 0.467127,
   0.48399, 0.835568, 0.259959,
   0.549128, 0.835568, -0.016864,
   0.467127, 0.835568, -0.289168,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, -1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
   0, 1, 0,
};

float pivot_vt[] =
{
   0, 0.166667,
   0.083333, 0.166667,
   0, 0.333333,
   0.083333, 0.333333,
   0.166667, 0.166667,
   0.166667, 0.333333,
   0.25, 0.166667,
   0.25, 0.333333,
   0.333333, 0.166667,
   0.333333, 0.333333,
   0.416667, 0.166667,
   0.416667, 0.333333,
   0.5, 0.166667,
   0.5, 0.333333,
   0.583333, 0.166667,
   0.583333, 0.333333,
   0.666667, 0.166667,
   0.666667, 0.333333,
   0.75, 0.166667,
   0.75, 0.333333,
   0.833333, 0.166667,
   0.833333, 0.333333,
   0.916667, 0.166667,
   0.916667, 0.333333,
   1, 0.166667,
   1, 0.333333,
   0, 0.5,
   0.083333, 0.5,
   0.166667, 0.5,
   0.25, 0.5,
   0.333333, 0.5,
   0.416667, 0.5,
   0.5, 0.5,
   0.583333, 0.5,
   0.666667, 0.5,
   0.75, 0.5,
   0.833333, 0.5,
   0.916667, 0.5,
   1, 0.5,
   0, 0.666667,
   0.083333, 0.666667,
   0.166667, 0.666667,
   0.25, 0.666667,
   0.333333, 0.666667,
   0.416667, 0.666667,
   0.5, 0.666667,
   0.583333, 0.666667,
   0.666667, 0.666667,
   0.75, 0.666667,
   0.833333, 0.666667,
   0.916667, 0.666667,
   1, 0.666667,
   0, 0.833333,
   0.083333, 0.833333,
   0.166667, 0.833333,
   0.25, 0.833333,
   0.333333, 0.833333,
   0.416667, 0.833333,
   0.5, 0.833333,
   0.583333, 0.833333,
   0.666667, 0.833333,
   0.75, 0.833333,
   0.833333, 0.833333,
   0.916667, 0.833333,
   1, 0.833333,
   0.041667, 0,
   0.125, 0,
   0.208333, 0,
   0.291667, 0,
   0.375, 0,
   0.458333, 0,
   0.541667, 0,
   0.625, 0,
   0.708333, 0,
   0.791667, 0,
   0.875, 0,
   0.958333, 0,
   0.041667, 1,
   0.125, 1,
   0.208333, 1,
   0.291667, 1,
   0.375, 1,
   0.458333, 1,
   0.541667, 1,
   0.625, 1,
   0.708333, 1,
   0.791667, 1,
   0.875, 1,
   0.958333, 1,
};

int pivot_f[] =
{
   0, 1, 2,
   2, 1, 3,
   1, 4, 3,
   3, 4, 5,
   4, 6, 5,
   5, 6, 7,
   6, 8, 7,
   7, 8, 9,
   8, 10, 9,
   9, 10, 11,
   10, 12, 11,
   11, 12, 13,
   12, 14, 13,
   13, 14, 15,
   14, 16, 15,
   15, 16, 17,
   16, 18, 17,
   17, 18, 19,
   18, 20, 19,
   19, 20, 21,
   20, 22, 21,
   21, 22, 23,
   22, 24, 23,
   23, 24, 25,
   2, 3, 26,
   26, 3, 27,
   3, 5, 27,
   27, 5, 28,
   5, 7, 28,
   28, 7, 29,
   7, 9, 29,
   29, 9, 30,
   9, 11, 30,
   30, 11, 31,
   11, 13, 31,
   31, 13, 32,
   13, 15, 32,
   32, 15, 33,
   15, 17, 33,
   33, 17, 34,
   17, 19, 34,
   34, 19, 35,
   19, 21, 35,
   35, 21, 36,
   21, 23, 36,
   36, 23, 37,
   23, 25, 37,
   37, 25, 38,
   26, 27, 39,
   39, 27, 40,
   27, 28, 40,
   40, 28, 41,
   28, 29, 41,
   41, 29, 42,
   29, 30, 42,
   42, 30, 43,
   30, 31, 43,
   43, 31, 44,
   31, 32, 44,
   44, 32, 45,
   32, 33, 45,
   45, 33, 46,
   33, 34, 46,
   46, 34, 47,
   34, 35, 47,
   47, 35, 48,
   35, 36, 48,
   48, 36, 49,
   36, 37, 49,
   49, 37, 50,
   37, 38, 50,
   50, 38, 51,
   39, 40, 52,
   52, 40, 53,
   40, 41, 53,
   53, 41, 54,
   41, 42, 54,
   54, 42, 55,
   42, 43, 55,
   55, 43, 56,
   43, 44, 56,
   56, 44, 57,
   44, 45, 57,
   57, 45, 58,
   45, 46, 58,
   58, 46, 59,
   46, 47, 59,
   59, 47, 60,
   47, 48, 60,
   60, 48, 61,
   48, 49, 61,
   61, 49, 62,
   49, 50, 62,
   62, 50, 63,
   50, 51, 63,
   63, 51, 64,
   1, 0, 65,
   4, 1, 66,
   6, 4, 67,
   8, 6, 68,
   10, 8, 69,
   12, 10, 70,
   14, 12, 71,
   16, 14, 72,
   18, 16, 73,
   20, 18, 74,
   22, 20, 75,
   24, 22, 76,
   52, 53, 77,
   53, 54, 78,
   54, 55, 79,
   55, 56, 80,
   56, 57, 81,
   57, 58, 82,
   58, 59, 83,
   59, 60, 84,
   60, 61, 85,
   61, 62, 86,
   62, 63, 87,
   63, 64, 88,
};
