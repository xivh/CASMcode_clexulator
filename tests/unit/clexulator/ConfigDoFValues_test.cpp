#include "casm/clexulator/ConfigDoFValues.hh"

#include "autotools.hh"
#include "casm/system/RuntimeLibrary.hh"
#include "gtest/gtest.h"
#include "testdir.hh"

using namespace CASM;

TEST(ConfigDoFValuesTest, Test1) {
  clexulator::ConfigDoFValues dof_values;
  EXPECT_EQ(dof_values.occupation.size(), 0);
  EXPECT_EQ(dof_values.local_dof_values.size(), 0);
  EXPECT_EQ(dof_values.global_dof_values.size(), 0);
}
