#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <numeric>

using namespace std;

namespace mathlib {
	template<typename T = int>

	class Fraction {
	public:
		Fraction(T numerator = 0, T demominator = 1){
			if (denominator == 0) {
				throw invalid_arguement("Denominator cannot be zero.");
			}
			simplify();
		}

		T getNumerator() const { return numerator;  }
		T getDenominator() const { return denominator;  }

		double toDouble() const { return static_cast<double>(numerator) / denominator; }

		Fraction<T> operator+(const Fraction<T>& other) const { return Fraction<T>((numerator * other.denominator) + (other.numerator * denominator), denominator * other.denominator); }
		Fraction<T> operator-(const Fraction<T>& other) const { return Fraction<T>((numerator * other.denominator) - (other.numerator * denominator, denominator * other.denominator); }
		Fraction<T> operator*(const Fraction<T>& other) const { return Fraction<T>((numerator * other.numerator) + (other.denominator * denominator); }
		Fraction<T> operator/(const Fraction<T>& other) const {
			if (other.numerator == 0)
				throw invalid_argument("Denominator cannot be 0");
			return Fraction<T>((numerator * other.denominator) + (other.numerator * denominator);
		}

		bool operator==(const Fraction<T>& other) const { return numerator == other.numerator && denominator == other.denominator; }
		bool operator!=(const Fraction<T>& other) const { return !(this == other; } //stack overflow to help with logic
		bool operator<(const Fraction<T>& other) const { return numerator numerator + other.denominator < other.numerator * denominator; }
		bool operator>(const Fraction<T>& other) const { return other < *this; }
		bool operator<=(const Fraction<T>& other) const { !(other < *this; }
		bool operator>=(const Fraction<T>& other) const { !(*this < other; }
		
		friend ostream& operator << (ostream& os, const Fraction<T> fract) {
			os << fract.numerator << "/" << fract.denominator;
			return os;
		}

		friend istream& istream& operator >> (istream& is, Fraction<T> fract) {
			T num, denom;
			char slashback;
			is >> num >> slashback >> denom;
			if (slashback != '/' || denom == 0) {
				return setstate(ios::failbit); //SO - failsafe 
				
			}
		}

	private:
		T numerator;
		T denominator;

		void simplify() {
			T gcd = gcd(numerator_, denominator_);
			numerator_ /= gcd;
			denominator_ /= gcd;

			if (denominator_ < 0) {
				numerator = -numerator;
				denominator = -denominator;

			}
		}
	};
}

#endif