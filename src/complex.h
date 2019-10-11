#if !defined(__COMPLEX_H)
#define __COMPLEX_H

namespace complex_number{

        template<typename _Tp>
                class Complex{

                        typedef _Tp value_type;

                        private:
                        //complex formalisum
                        _Tp real_;
                        _Tp imag_;

                        public:
                        // classic constructor
                        Complex();
                        Complex(_Tp, _Tp);
                        Complex(Complex<_Tp>&);
                        _Tp getReal();
                        _Tp getImag();
                        void setReal();
                        void setImag();
                        _Tp abs(const Complex<_Tp>&);
                        _Tp arg(const Complex<_Tp>&);
                        _Tp norm(const Complex<_Tp>&);

                        Complex & operator+=(const Complex &);
                        Complex & operator-=(const Complex &);
                        Complex & operator*=(const _Tp);
                        Complex & operator*=(const Complex &);
                        Complex & operator/=(const _Tp);
                        Complex & operator/=(const Complex &);
        
                };

        template<typename _Tp>
        Complex<_Tp> operator+(const Complex<_Tp>&,const int){

        }
        template<typename _Tp>
        Complex<_Tp> operator+(const Complex<_Tp>&, const Complex<_Tp>&){

        }
        template<typename _Tp>
        Complex<_Tp> operator+(const int, const Complex<_Tp>&){

        }
        template<typename _Tp>
        Complex<_Tp> operator-(const Complex<_Tp>&, const int){

        }
        template<typename _Tp>
        Complex<_Tp> operator-(const Complex<_Tp>&, const Complex<_Tp>&){

        }
        template<typename _Tp>
        Complex<_Tp> operator-(const int,const Complex<_Tp>&){

        }
        template<typename _Tp>
        Complex<_Tp> operator*(const Complex<_Tp>&, const int){

        }
        template<typename _Tp>
        Complex<_Tp> operator*(const Complex<_Tp>&, const Complex<_Tp>&){

        }
        template<typename _Tp>
        Complex<_Tp> operator*(const int, const Complex<_Tp>&){

        }
        template<typename _Tp>
        Complex<_Tp> operator/(const Complex<_Tp>&, const int){

        }
        template<typename _Tp>
        Complex<_Tp> operator/(const Complex<_Tp>&, const Complex<_Tp>&){

        }
        template<typename _Tp>
        Complex<_Tp> operator/(const int, const Complex<_Tp>&){

        }

        template<typename _Tp>
        Complex<_Tp> &Complex<_Tp>::operator+=(const Complex<_Tp>& _z){
                real_ += _z.real_;
                imag_ += _z.imag_;
                return *this;
        }

        template<typename _Tp>
        Complex<_Tp> &Complex<_Tp>::operator-=(const Complex<_Tp>& _z){
                real_ -= _z.real_;
                imag_ -= _z.imag_;
                return *this;
        }

        template<typename _Tp>
        Complex<_Tp> &Complex<_Tp>::operator*=(const Complex<_Tp>& _z){
                const _Tp _z1 = real_ * _z.real_ - imag_ * _z.imag_;
                imag_ = real_ * _z.imag_ + imag_ * _z.real_;
                real_ = _z1;
                return *this; 
        }

        template<typename _Tp>
        Complex<_Tp> &Complex<_Tp>::operator*=(const _Tp t){
                real_ *= t;
                imag_ *= t;
                return *this;
        }

        template<typename _Tp>
        Complex<_Tp> &Complex<_Tp>::operator/=(const Complex<_Tp>& _z){
                const _Tp _z1 = 1;
        }

}




#endif // __COMPLEX_H
