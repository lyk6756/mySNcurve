#include "standardSN_GeneralTest.h"

TEST_F(standardSN_GeneralTest, constructor) {
  double SRI1 = 300;
  double b1 = 5.0;
  double Nc1 = 1e5;
  double b2 = 2.0;
  double SE = 1.0;
  double RR = 0.5;
  double Nfc = 1.5e20;
  standardSN fatigueMaterial(SRI1, b1, Nc1, b2, SE, RR, Nfc);

  ASSERT_EQ(SRI1, fatigueMaterial.getSRI1());
  ASSERT_EQ(b1, fatigueMaterial.getB1());
  ASSERT_EQ(Nc1, fatigueMaterial.getNc1());
  ASSERT_EQ(b2, fatigueMaterial.getB2());
  ASSERT_EQ(SE, fatigueMaterial.getSE());
  ASSERT_EQ(RR, fatigueMaterial.getRR());
  ASSERT_EQ(Nfc, fatigueMaterial.getNfc());
}

TEST_F(standardSN_GeneralTest, constructorDefaultValues) {
  double SRI1 = 300;
  double b1 = 5.0;
  standardSN fatigueMaterial(SRI1, b1);

  /// default values
  double Nc1 = 1e6;
  double b2 = 0.0;
  double SE = 0.0;
  double RR = -1.0;
  double Nfc = 1e30;
  ASSERT_EQ(SRI1, fatigueMaterial.getSRI1());
  ASSERT_EQ(b1, fatigueMaterial.getB1());
  ASSERT_EQ(Nc1, fatigueMaterial.getNc1());
  ASSERT_EQ(b2, fatigueMaterial.getB2());
  ASSERT_EQ(SE, fatigueMaterial.getSE());
  ASSERT_EQ(RR, fatigueMaterial.getRR());
  ASSERT_EQ(Nfc, fatigueMaterial.getNfc());
}

TEST_F(standardSN_GeneralTest, constructorDefaultValues) {
  double SRI1 = 300;
  double b1 = 5.0;
  standardSN fatigueMaterial(SRI1, b1);

  /// default values
  double Nc1 = 1e6;
  double b2 = 0.0;
  double SE = 0.0;
  double RR = -1.0;
  double Nfc = 1e30;
  ASSERT_EQ(SRI1, fatigueMaterial.getSRI1());
  ASSERT_EQ(b1, fatigueMaterial.getB1());
  ASSERT_EQ(Nc1, fatigueMaterial.getNc1());
  ASSERT_EQ(b2, fatigueMaterial.getB2());
  ASSERT_EQ(SE, fatigueMaterial.getSE());
  ASSERT_EQ(RR, fatigueMaterial.getRR());
  ASSERT_EQ(Nfc, fatigueMaterial.getNfc());
}



def test_woehler_basquin_cycles_50_single_load_single_wc():
load = 500.
