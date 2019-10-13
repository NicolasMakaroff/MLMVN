#include<cmath>
#include<iostream>

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
                        _Tp theta_;

                        public:
                        // classic constructor
                        Complex();
                        Complex(_Tp, _Tp);
                        Complex(Complex<_Tp>&);
                        _Tp& getReal();
                        _Tp& getImag();
                        _Tp getTheta();
                        void setReal(_Tp);
                        void setImag(_Tp);
                        void setTheta(_Tp);
                        _Tp abs(const Complex<_Tp>&);
                        //_Tp arg(const Complex<_Tp>&);
                        _Tp norm(const Complex<_Tp>&);

                        Complex & operator+=(const Complex &);
                        Complex & operator-=(const Complex &);
                        Complex & operator*=(const _Tp);
                        Complex & operator*=(const Complex &);
                        Complex & operator/=(const _Tp);
                        Complex & operator/=(const Complex &);
        
                };
        template<typename _Tp>
        Complex<_Tp>::Complex(){
                real_ = 0;
                imag_ = 0;
                theta_ = 0;
        }

        template<typename _Tp>
        Complex<_Tp>::Complex(_Tp a, _Tp b){
                real_ = a;
                imag_ = b;
        }

        template<typename _Tp>
        _Tp& Complex<_Tp>::getReal(){
                return real_;
        }

        template<typename _Tp>
        _Tp& Complex<_Tp>::getImag(){
                return imag_;
        }

        template<typename _Tp>
        _Tp Complex<_Tp>::getTheta(){
                return this->theta_;
        }

        template<typename _Tp>
        void Complex<_Tp>::setReal(_Tp real_){
                this->real_ = real_;
        }

        template<typename _Tp>
        void Complex<_Tp>::setImag(_Tp imag_){
                this->imag_ = imag_;
        }

        template<typename _Tp>
        void Complex<_Tp>::setTheta(const _Tp theta_){
                this->theta_ = theta_;
        }

        template<typename _Tp>
        _Tp Complex<_Tp>::abs(const Complex<_Tp>& _z){
                return sqrt(_z.real_ * _z.real_ + _z.imag_ * _z.imag_);
        }

        template<typename _Tp>
        double arg(Complex<_Tp>& _z){
                return atan2(_z.getImag(),_z.getReal());
        }

        template<typename _Tp>
        _Tp Complex<_Tp>::norm(const Complex<_Tp>& _z){
                return _z.real_ * _z.real_ + _z.imag_ * _z.imag_;
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
                const _Tp _z1 = real_ * _z.real_ + imag_ * _z.imag_;
                const _Tp _n = norm(_z);
                imag_ = (imag_ * _z.real_ - real_ * _z.imag_)/_n;
                real_ = _z1 / _n;
                return *this;
        }

        template<typename _Tp>
        Complex<_Tp> &Complex<_Tp>::operator/=(const _Tp t){
                real_ /= t;
                imag_ /= t;
                return *this;
        }



        template<typename _Tp>
        Complex<_Tp> operator+(const Complex<_Tp>& _z,const _Tp t ){
                Complex<_Tp> _z1 = _z;
                _z1 += t;
                return _z1;
        }

        template<typename _Tp>
        Complex<_Tp> operator+(const Complex<_Tp>& _z1, const Complex<_Tp>& _z2){
                Complex<_Tp> _z3 = _z1;
                _z3 += _z2;
                return _z3;
        }

        template<typename _Tp>
        Complex<_Tp> operator+(const int t, const Complex<_Tp>& _z){
                Complex<_Tp> _z1 = _z;
                _z1 += t;
                return _z1;
        }

        template<typename _Tp>
        Complex<_Tp> operator-(const Complex<_Tp>& _z, const int t){
                Complex<_Tp> _z1 = _z;
                _z1 -= t;
                return _z1;
        }

        template<typename _Tp>
        Complex<_Tp> operator-(const Complex<_Tp>& _z1, const Complex<_Tp>& _z2){
                Complex<_Tp> _z3 = _z1;
                _z3 -= _z2;
                return _z3;
        }

        template<typename _Tp>
        Complex<_Tp> operator-(const int t,const Complex<_Tp>& _z){
                Complex<_Tp> _z2 = _z;
                _z2 -= t;
                return _z2;
        }

        template<typename _Tp>
        Complex<_Tp> operator*(const Complex<_Tp>& _z, const int t){
                Complex<_Tp> _z1 =_z;
                _z1 *= t;
                return _z1;
        }

        template<typename _Tp>
        Complex<_Tp> operator*(const Complex<_Tp>& _z1, const Complex<_Tp>& _z2){
                Complex<_Tp> _z3 = _z1;
                _z3 *= _z2;
                return _z3;
        }

        template<typename _Tp>
        Complex<_Tp> operator*(const int t, const Complex<_Tp>& _z){
                Complex<_Tp> _z1 = _z;
                _z1 *= t;
                return _z1;
        }

        template<typename _Tp>
        Complex<_Tp> operator/(const Complex<_Tp>& _z, const int t){
                Complex<_Tp> _z1 = _z;
                _z1 /= t;
                return _z1;
        }

        template<typename _Tp>
        Complex<_Tp> operator/(const Complex<_Tp>& _z1, const Complex<_Tp>& _z2){
                Complex<_Tp> _z3 = _z1;
                _z3 /= _z2;
                return _z3;
        }
        template<typename _Tp>
        Complex<_Tp> operator/(const int t, const Complex<_Tp>& _z){
                Complex<_Tp> _z1;
                _z1 /= t;
                return _z1;
        }

}


#endif // __COMPLEX_H

