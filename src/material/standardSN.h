#ifndef MYSNCURVE_SRC_MATERIAL_STANDARDSN_H_
#define MYSNCURVE_SRC_MATERIAL_STANDARDSN_H_

/**
 * @brief Parameterized (log-log) S-N curve.
 *      SN-curve (aka Wöhler Curve) determines after how many load cycles at a
 *      certain load amplitude the component is expected to fail.
 *
 * @param SRI1      Stress range intercept
 * @param b1        First fatigue strength exponent
 * @param Nc1       Transition life
 * @param b2        Second fatigue strength exponent
 * @param SE        Standard error of log10(N).
 * @param RR        R-ratio (ratio of minimum to maximum load)
 * @param Nfc       Numerical fatigue cutoff life. Beyond Nfc, damage will be zero.
 *
 * @note The "_50" suffixes imply that the values are valid for a 50% probability of failure.
 */
class standardSN {
 public:
/**
 * 构造函数
 */
  standardSN(double SRI1, double b1,
             double Nc1 = 1e6,
             double b2 = 0.0,
             double SE = 0.0,
             double RR = -1.0,
             double Nfc = 1e30);

/**
* 析构函数
*/
  ~standardSN() {}

  inline double getSRI1() const { return sri1; }
  inline double getB1() const { return b1; }
  inline double getNc1() const { return nc1; }
  inline double getB2() const { return b2; }
  inline double getSE() const { return se; }
  inline double getRR() const { return rr; }
  inline double getNfc() const { return nfc; }

 private:
  double sri1;
  double b1;
  double nc1;
  double b2;
  double se;
  double rr;
  double nfc;
};

#endif // MYSNCURVE_SRC_MATERIAL_STANDARDSN_H_
