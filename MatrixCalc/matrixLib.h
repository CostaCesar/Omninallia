typedef struct P_Matrix
{
    double **matrix;
    int Xsize;
    int Ysize;
} Matrix;

void free_Matrix(Matrix* freed);
void show_Matrix(Matrix* show);
void copy_Matrix(Matrix *source, Matrix *destiny);
void swap_MatrixRows(Matrix *A, int rowA, int rowB);
void multiply_MatrixRow(Matrix *A, int row, double num);
void multiplyRow_AddMatrix(Matrix *A, int multipRow, double num, int addRow);
void split_Matrix_AtCol(Matrix *origin, Matrix **left, Matrix **right, int column);
int find_MatrixRowNum_AtCol(Matrix *A, int col);
double getDeterminant(Matrix *A);
Matrix* clone_Matrix(Matrix *source);
Matrix* getInverse_Matrix(Matrix *A);
Matrix* multiply_MatrixByN(Matrix* A);
Matrix* extract_Row(Matrix* A, int row);
Matrix* create_IdentityMatrix(Matrix *A);
Matrix* alloc_Matrix(int Xsize, int Ysize);
Matrix* multiply_Matrixes(Matrix *A, Matrix *B);
Matrix* join_Matrix_Left(Matrix *Base, Matrix *Add);
Matrix* extract_Matrix_Except(Matrix* A, int rowExcep, int colExcep);
Matrix* extract_Matrix(Matrix *extractFrom, int rowStart, int colStart, int rowEnd, int colEnd);
Matrix* add_Matrix_Part(Matrix *main, Matrix *add, int atRow, int atCol, int untilRow, int untilCol);