// Matrix.h

#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>
#include <tuple>
#include <functional>
#include <random>
using namespace std;

template <typename Type>

class Matrix 
{
  size_t cols;
  size_t rows;

  public:
   vector<Type> data;
   tuple<size_t, size_t> shape;
   int numel = rows * cols;

  /* constructors */
  Matrix(size_t rows, size_t cols) : cols(cols), rows(rows), data({}) {
    data.resize(cols * rows, Type()); 
    shape = {rows, cols};
  }

  Matrix() : cols(0), rows(0), data({}) {
     shape = {rows, cols}; 
     };

  /* [print methods go here] */

  void shape_matrix(){
    cout << "Matrix has shape(["<<rows<<","<<cols<<"])"<<endl;
  }

  void print_matrix(){
    for(size_t r =0; r< rows; r++){
        for (int c = 0; c < cols; c++)
        {
            cout << (*this)(r,c) << " "; 
        }
        cout << endl;
    }
    cout << endl;
  }

  Type& operator()(size_t row, size_t col) {
    return data[row * cols + col];
  }


  /* [linear algebra methods go here] */

    //O(rows^2 * cols) time | O(rows*cols) space
  Matrix matmul(Matrix &target) {
    assert(cols == target.rows);
    Matrix output(rows, target.cols);

    for (size_t r = 0; r < output.rows; ++r) {
      for (size_t c = 0; c < output.cols; ++c) {
        for (size_t k = 0; k < target.rows; ++k)
          output(r, c) += (*this)(r, k) * target(k, c);
      }
    }
    return output;
  }

    // O(rows*cols) time | O(rows*cols) space
  Matrix multiply_elementwise(Matrix &target){
    assert(shape == target.shape);
    Matrix output((*this));
    for (size_t r = 0; r < output.rows; ++r) {
      for (size_t c = 0; c < output.cols; ++c) {
        output(r, c) = target(r,c) * (*this)(r, c);
      }
    }
    return output;
  }

  // O(rows*cols) time | O(rows*cols) space
  Matrix square() { 
    Matrix output((*this));
    output = multiply_elementwise(output);
    return output;
  }

  // O(rows*cols) time | O(rows*cols) space
  Matrix multiply_scalar(Type scalar) {
    Matrix output((*this));
    for (size_t r = 0; r < output.rows; ++r) {
      for (size_t c = 0; c < output.cols; ++c) {
        output(r, c) = scalar * (*this)(r, c);
      }
    }
    return output;
  }

  // binary arg matrix addition
  // O(rows*cols) time | O(rows*cols) space
  Matrix add(Matrix &target) {
    assert(shape == target.shape);
    Matrix output(rows, get<1>(target.shape));

    for (size_t r = 0; r < output.rows; ++r) {
      for (size_t c = 0; c < output.cols; ++c) {
        output(r, c) = (*this)(r, c) + target(r, c);
      }
    }
    return output;
  }
  Matrix operator+(Matrix &target) {
    return add(target);
  }

   // unary-arg matrix negation
  // O(rows*cols) time | O(rows*cols) space
  Matrix operator-() {
    Matrix output(rows, cols);
    for (size_t r = 0; r < rows; ++r) {
      for (size_t c = 0; c < cols; ++c) {
        output(r, c) = -(*this)(r, c);
      }
    }
    return output;
  }

  // binary-arg matrix subtraction
  // O(rows*cols) time | O(rows*cols) space
  Matrix sub(Matrix &target) {
    Matrix neg_target = -target;
    return add(neg_target);
  }
  Matrix operator-(Matrix &target) {  // for cleaner usage
    return sub(target);
  }

   // swap rows and cols
  // O(rows*cols) time | O(rows*cols) space
  Matrix transpose() {
    size_t new_rows{cols}, new_cols{rows};
    Matrix transposed(new_rows, new_cols);

    for (size_t r = 0; r < new_rows; ++r) {
      for (size_t c = 0; c < new_cols; ++c) {
        transposed(r, c) = (*this)(c, r);  // swap row and col
      }
    }
    return transposed;
  }
  Matrix T(){ // Similar to numpy, etc.
    return transpose(); 
  }

   // O(rows*cols* O(function)) time | space depends on function
  Matrix apply_function(const function<Type(const Type &)> &function) {
    Matrix output((*this));
    for (size_t r = 0; r < rows; ++r) {
      for (size_t c = 0; c < cols; ++c) {
        output(r, c) = function((*this)(r, c));
      }
    }
    return output;
  }




};