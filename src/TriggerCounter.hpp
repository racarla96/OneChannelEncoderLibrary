#pragma once

#include "Arduino.h"
#include "interrupt_pins.h"

class TriggerCounter
{
public:
  // Create the instance and initialize the counter to 0
  TriggerCounter() { _trigCounter = 0; }

  long getCount()
  {
    // Temporarily disable interrupts to avoid race conditions
    noInterrupts();
    long count = _trigCounter;
    interrupts();
    return count;
  }

  void clearCount()
  {
    // Temporarily disable interrupts to avoid race conditions
    noInterrupts();
    _trigCounter = 0;
    interrupts();
  }

private:
  volatile long _trigCounter;

  void Trigger()
  {
    _trigCounter++;
  }

  // Glue
  static TriggerCounter *instances[CORE_NUM_INTERRUPT];
#ifdef CORE_INT0_PIN
  static void TriggerExt0()
  {
    TriggerCounter::instances[0]->Trigger();
  }
#endif
#ifdef CORE_INT1_PIN
  static void TriggerExt1()
  {
    TriggerCounter::instances[1]->Trigger();
  }
#endif
#ifdef CORE_INT2_PIN
  static void TriggerExt2()
  {
    TriggerCounter::instances[2]->Trigger();
  }
#endif
#ifdef CORE_INT3_PIN
  static void TriggerExt3()
  {
    TriggerCounter::instances[3]->Trigger();
  }
#endif
#ifdef CORE_INT4_PIN
  static void TriggerExt4()
  {
    TriggerCounter::instances[4]->Trigger();
  }
#endif
#ifdef CORE_INT5_PIN
  static void TriggerExt5()
  {
    TriggerCounter::instances[5]->Trigger();
  }
#endif
#ifdef CORE_INT6_PIN
  static void TriggerExt6()
  {
    TriggerCounter::instances[6]->Trigger();
  }
#endif
#ifdef CORE_INT7_PIN
  static void TriggerExt7()
  {
    TriggerCounter::instances[7]->Trigger();
  }
#endif
#ifdef CORE_INT8_PIN
  static void TriggerExt8()
  {
    TriggerCounter::instances[8]->Trigger();
  }
#endif
#ifdef CORE_INT9_PIN
  static void TriggerExt9()
  {
    TriggerCounter::instances[9]->Trigger();
  }
#endif
#ifdef CORE_INT10_PIN
  static void TriggerExt10()
  {
    TriggerCounter::instances[10]->Trigger();
  }
#endif
#ifdef CORE_INT11_PIN
  static void TriggerExt11()
  {
    TriggerCounter::instances[11]->Trigger();
  }
#endif
#ifdef CORE_INT12_PIN
  static void TriggerExt12()
  {
    TriggerCounter::instances[12]->Trigger();
  }
#endif
#ifdef CORE_INT13_PIN
  static void TriggerExt13()
  {
    TriggerCounter::instances[13]->Trigger();
  }
#endif
#ifdef CORE_INT14_PIN
  static void TriggerExt14()
  {
    TriggerCounter::instances[14]->Trigger();
  }
#endif
#ifdef CORE_INT15_PIN
  static void TriggerExt15()
  {
    TriggerCounter::instances[15]->Trigger();
  }
#endif
#ifdef CORE_INT16_PIN
  static void TriggerExt16()
  {
    TriggerCounter::instances[16]->Trigger();
  }
#endif
#ifdef CORE_INT17_PIN
  static void TriggerExt17()
  {
    TriggerCounter::instances[17]->Trigger();
  }
#endif
#ifdef CORE_INT18_PIN
  static void TriggerExt18()
  {
    TriggerCounter::instances[18]->Trigger();
  }
#endif
#ifdef CORE_INT19_PIN
  static void TriggerExt19()
  {
    TriggerCounter::instances[19]->Trigger();
  }
#endif
#ifdef CORE_INT20_PIN
  static void TriggerExt20()
  {
    TriggerCounter::instances[20]->Trigger();
  }
#endif
#ifdef CORE_INT21_PIN
  static void TriggerExt21()
  {
    TriggerCounter::instances[21]->Trigger();
  }
#endif
#ifdef CORE_INT22_PIN
  static void TriggerExt22()
  {
    TriggerCounter::instances[22]->Trigger();
  }
#endif
#ifdef CORE_INT23_PIN
  static void TriggerExt23()
  {
    TriggerCounter::instances[23]->Trigger();
  }
#endif
#ifdef CORE_INT24_PIN
  static void TriggerExt24()
  {
    TriggerCounter::instances[24]->Trigger();
  }
#endif
#ifdef CORE_INT25_PIN
  static void TriggerExt25()
  {
    TriggerCounter::instances[25]->Trigger();
  }
#endif
#ifdef CORE_INT26_PIN
  static void TriggerExt26()
  {
    TriggerCounter::instances[26]->Trigger();
  }
#endif
#ifdef CORE_INT27_PIN
  static void TriggerExt27()
  {
    TriggerCounter::instances[27]->Trigger();
  }
#endif
#ifdef CORE_INT28_PIN
  static void TriggerExt28()
  {
    TriggerCounter::instances[28]->Trigger();
  }
#endif
#ifdef CORE_INT29_PIN
  static void TriggerExt29()
  {
    TriggerCounter::instances[29]->Trigger();
  }
#endif
#ifdef CORE_INT30_PIN
  static void TriggerExt30()
  {
    TriggerCounter::instances[30]->Trigger();
  }
#endif
#ifdef CORE_INT31_PIN
  static void TriggerExt31()
  {
    TriggerCounter::instances[31]->Trigger();
  }
#endif
#ifdef CORE_INT32_PIN
  static void TriggerExt32()
  {
    TriggerCounter::instances[32]->Trigger();
  }
#endif
#ifdef CORE_INT33_PIN
  static void TriggerExt33()
  {
    TriggerCounter::instances[33]->Trigger();
  }
#endif
#ifdef CORE_INT34_PIN
  static void TriggerExt34()
  {
    TriggerCounter::instances[34]->Trigger();
  }
#endif
#ifdef CORE_INT35_PIN
  static void TriggerExt35()
  {
    TriggerCounter::instances[35]->Trigger();
  }
#endif
#ifdef CORE_INT36_PIN
  static void TriggerExt36()
  {
    TriggerCounter::instances[36]->Trigger();
  }
#endif
#ifdef CORE_INT37_PIN
  static void TriggerExt37()
  {
    TriggerCounter::instances[37]->Trigger();
  }
#endif
#ifdef CORE_INT38_PIN
  static void TriggerExt38()
  {
    TriggerCounter::instances[38]->Trigger();
  }
#endif
#ifdef CORE_INT39_PIN
  static void TriggerExt39()
  {
    TriggerCounter::instances[39]->Trigger();
  }
#endif
#ifdef CORE_INT40_PIN
  static void TriggerExt40()
  {
    TriggerCounter::instances[40]->Trigger();
  }
#endif
#ifdef CORE_INT41_PIN
  static void TriggerExt41()
  {
    TriggerCounter::instances[41]->Trigger();
  }
#endif
#ifdef CORE_INT42_PIN
  static void TriggerExt42()
  {
    TriggerCounter::instances[42]->Trigger();
  }
#endif
#ifdef CORE_INT43_PIN
  static void TriggerExt43()
  {
    TriggerCounter::instances[43]->Trigger();
  }
#endif
#ifdef CORE_INT44_PIN
  static void TriggerExt44()
  {
    TriggerCounter::instances[44]->Trigger();
  }
#endif
#ifdef CORE_INT45_PIN
  static void TriggerExt45()
  {
    TriggerCounter::instances[45]->Trigger();
  }
#endif
#ifdef CORE_INT46_PIN
  static void TriggerExt46()
  {
    TriggerCounter::instances[46]->Trigger();
  }
#endif
#ifdef CORE_INT47_PIN
  static void TriggerExt47()
  {
    TriggerCounter::instances[47]->Trigger();
  }
#endif
#ifdef CORE_INT48_PIN
  static void TriggerExt48()
  {
    TriggerCounter::instances[48]->Trigger();
  }
#endif
#ifdef CORE_INT49_PIN
  static void TriggerExt49()
  {
    TriggerCounter::instances[49]->Trigger();
  }
#endif
#ifdef CORE_INT50_PIN
  static void TriggerExt50()
  {
    TriggerCounter::instances[50]->Trigger();
  }
#endif
#ifdef CORE_INT51_PIN
  static void TriggerExt51()
  {
    TriggerCounter::instances[51]->Trigger();
  }
#endif
#ifdef CORE_INT52_PIN
  static void TriggerExt52()
  {
    TriggerCounter::instances[52]->Trigger();
  }
#endif
#ifdef CORE_INT53_PIN
  static void TriggerExt53()
  {
    TriggerCounter::instances[53]->Trigger();
  }
#endif
  /*
    // Best practice, but overload check instance if null
    // we need a faster interrupt routine
    static void TriggerExt0()
    {
      if (TriggerCounter::instances[0] != NULL)
      TriggerCounter::instances[0]->Trigger();
    } // end of TriggerCounter::TriggerExt0
  */
public:
  bool begin(int trigCounterPin, int mode = CHANGE)
  {
    _trigCounter = 0;
    pinMode(trigCounterPin, INPUT_PULLUP);
    switch (trigCounterPin)
    {
#ifdef CORE_INT0_PIN
    case CORE_INT0_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT0_PIN), TriggerExt0, mode);
      instances[0] = this;
      break;
#endif
#ifdef CORE_INT1_PIN
    case CORE_INT1_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT1_PIN), TriggerExt1, mode);
      instances[1] = this;
      break;
#endif
#ifdef CORE_INT2_PIN
    case CORE_INT2_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT2_PIN), TriggerExt2, mode);
      instances[2] = this;
      break;
#endif
#ifdef CORE_INT3_PIN
    case CORE_INT3_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT3_PIN), TriggerExt3, mode);
      instances[3] = this;
      break;
#endif
#ifdef CORE_INT4_PIN
    case CORE_INT4_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT4_PIN), TriggerExt4, mode);
      instances[4] = this;
      break;
#endif
#ifdef CORE_INT5_PIN
    case CORE_INT5_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT5_PIN), TriggerExt5, mode);
      instances[5] = this;
      break;
#endif
#ifdef CORE_INT6_PIN
    case CORE_INT6_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT6_PIN), TriggerExt6, mode);
      instances[6] = this;
      break;
#endif
#ifdef CORE_INT7_PIN
    case CORE_INT7_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT7_PIN), TriggerExt7, mode);
      instances[7] = this;
      break;
#endif
#ifdef CORE_INT8_PIN
    case CORE_INT8_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT8_PIN), TriggerExt8, mode);
      instances[8] = this;
      break;
#endif
#ifdef CORE_INT9_PIN
    case CORE_INT9_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT9_PIN), TriggerExt9, mode);
      instances[9] = this;
      break;
#endif
#ifdef CORE_INT10_PIN
    case CORE_INT10_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT10_PIN), TriggerExt10, mode);
      instances[10] = this;
      break;
#endif
#ifdef CORE_INT11_PIN
    case CORE_INT11_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT11_PIN), TriggerExt11, mode);
      instances[11] = this;
      break;
#endif
#ifdef CORE_INT12_PIN
    case CORE_INT12_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT12_PIN), TriggerExt12, mode);
      instances[12] = this;
      break;
#endif
#ifdef CORE_INT13_PIN
    case CORE_INT13_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT13_PIN), TriggerExt13, mode);
      instances[13] = this;
      break;
#endif
#ifdef CORE_INT14_PIN
    case CORE_INT14_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT14_PIN), TriggerExt14, mode);
      instances[14] = this;
      break;
#endif
#ifdef CORE_INT15_PIN
    case CORE_INT15_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT15_PIN), TriggerExt15, mode);
      instances[15] = this;
      break;
#endif
#ifdef CORE_INT16_PIN
    case CORE_INT16_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT16_PIN), TriggerExt16, mode);
      instances[16] = this;
      break;
#endif
#ifdef CORE_INT17_PIN
    case CORE_INT17_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT17_PIN), TriggerExt17, mode);
      instances[17] = this;
      break;
#endif
#ifdef CORE_INT18_PIN
    case CORE_INT18_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT18_PIN), TriggerExt18, mode);
      instances[18] = this;
      break;
#endif
#ifdef CORE_INT19_PIN
    case CORE_INT19_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT19_PIN), TriggerExt19, mode);
      instances[19] = this;
      break;
#endif
#ifdef CORE_INT20_PIN
    case CORE_INT20_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT20_PIN), TriggerExt20, mode);
      instances[20] = this;
      break;
#endif
#ifdef CORE_INT21_PIN
    case CORE_INT21_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT21_PIN), TriggerExt21, mode);
      instances[21] = this;
      break;
#endif
#ifdef CORE_INT22_PIN
    case CORE_INT22_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT22_PIN), TriggerExt22, mode);
      instances[22] = this;
      break;
#endif
#ifdef CORE_INT23_PIN
    case CORE_INT23_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT23_PIN), TriggerExt23, mode);
      instances[23] = this;
      break;
#endif
#ifdef CORE_INT24_PIN
    case CORE_INT24_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT24_PIN), TriggerExt24, mode);
      instances[24] = this;
      break;
#endif
#ifdef CORE_INT25_PIN
    case CORE_INT25_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT25_PIN), TriggerExt25, mode);
      instances[25] = this;
      break;
#endif
#ifdef CORE_INT26_PIN
    case CORE_INT26_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT26_PIN), TriggerExt26, mode);
      instances[26] = this;
      break;
#endif
#ifdef CORE_INT27_PIN
    case CORE_INT27_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT27_PIN), TriggerExt27, mode);
      instances[27] = this;
      break;
#endif
#ifdef CORE_INT28_PIN
    case CORE_INT28_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT28_PIN), TriggerExt28, mode);
      instances[28] = this;
      break;
#endif
#ifdef CORE_INT29_PIN
    case CORE_INT29_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT29_PIN), TriggerExt29, mode);
      instances[29] = this;
      break;
#endif
#ifdef CORE_INT30_PIN
    case CORE_INT30_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT30_PIN), TriggerExt30, mode);
      instances[30] = this;
      break;
#endif
#ifdef CORE_INT31_PIN
    case CORE_INT31_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT31_PIN), TriggerExt31, mode);
      instances[31] = this;
      break;
#endif
#ifdef CORE_INT32_PIN
    case CORE_INT32_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT32_PIN), TriggerExt32, mode);
      instances[32] = this;
      break;
#endif
#ifdef CORE_INT33_PIN
    case CORE_INT33_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT33_PIN), TriggerExt33, mode);
      instances[33] = this;
      break;
#endif
#ifdef CORE_INT34_PIN
    case CORE_INT34_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT34_PIN), TriggerExt34, mode);
      instances[34] = this;
      break;
#endif
#ifdef CORE_INT35_PIN
    case CORE_INT35_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT35_PIN), TriggerExt35, mode);
      instances[35] = this;
      break;
#endif
#ifdef CORE_INT36_PIN
    case CORE_INT36_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT36_PIN), TriggerExt36, mode);
      instances[36] = this;
      break;
#endif
#ifdef CORE_INT37_PIN
    case CORE_INT37_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT37_PIN), TriggerExt37, mode);
      instances[37] = this;
      break;
#endif
#ifdef CORE_INT38_PIN
    case CORE_INT38_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT38_PIN), TriggerExt38, mode);
      instances[38] = this;
      break;
#endif
#ifdef CORE_INT39_PIN
    case CORE_INT39_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT39_PIN), TriggerExt39, mode);
      instances[39] = this;
      break;
#endif
#ifdef CORE_INT40_PIN
    case CORE_INT40_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT40_PIN), TriggerExt40, mode);
      instances[40] = this;
      break;
#endif
#ifdef CORE_INT41_PIN
    case CORE_INT41_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT41_PIN), TriggerExt41, mode);
      instances[41] = this;
      break;
#endif
#ifdef CORE_INT42_PIN
    case CORE_INT42_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT42_PIN), TriggerExt42, mode);
      instances[42] = this;
      break;
#endif
#ifdef CORE_INT43_PIN
    case CORE_INT43_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT43_PIN), TriggerExt43, mode);
      instances[43] = this;
      break;
#endif
#ifdef CORE_INT44_PIN
    case CORE_INT44_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT44_PIN), TriggerExt44, mode);
      instances[44] = this;
      break;
#endif
#ifdef CORE_INT45_PIN
    case CORE_INT45_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT45_PIN), TriggerExt45, mode);
      instances[45] = this;
      break;
#endif
#ifdef CORE_INT46_PIN
    case CORE_INT46_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT46_PIN), TriggerExt46, mode);
      instances[46] = this;
      break;
#endif
#ifdef CORE_INT47_PIN
    case CORE_INT47_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT47_PIN), TriggerExt47, mode);
      instances[47] = this;
      break;
#endif
#ifdef CORE_INT48_PIN
    case CORE_INT48_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT48_PIN), TriggerExt48, mode);
      instances[48] = this;
      break;
#endif
#ifdef CORE_INT49_PIN
    case CORE_INT49_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT49_PIN), TriggerExt49, mode);
      instances[49] = this;
      break;
#endif
#ifdef CORE_INT50_PIN
    case CORE_INT50_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT50_PIN), TriggerExt50, mode);
      instances[50] = this;
      break;
#endif
#ifdef CORE_INT51_PIN
    case CORE_INT51_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT51_PIN), TriggerExt51, mode);
      instances[51] = this;
      break;
#endif
#ifdef CORE_INT52_PIN
    case CORE_INT52_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT52_PIN), TriggerExt52, mode);
      instances[52] = this;
      break;
#endif
#ifdef CORE_INT53_PIN
    case CORE_INT53_PIN:
      attachInterrupt(digitalPinToInterrupt(CORE_INT53_PIN), TriggerExt53, mode);
      instances[53] = this;
      break;
#endif
    default:
      return false;
    } // end of switch
    return true;
  } // end of TriggerCounter::begin

}; // end of class TriggerCounter

TriggerCounter *TriggerCounter::instances[CORE_NUM_INTERRUPT];