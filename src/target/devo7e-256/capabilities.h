#ifdef CHANDEF
  CHANDEF(AILERON)
  CHANDEF(ELEVATOR)
  CHANDEF(THROTTLE)
  CHANDEF(RUDDER)
  CHANDEF(SWA0)
  CHANDEF(SWA1)
  CHANDEF(SWA2)
  CHANDEF(SWB0)
  CHANDEF(SWB1)
  CHANDEF(SWB2)
  CHANDEF(SWC0)
  CHANDEF(SWC1)
  CHANDEF(SWC2)
  CHANDEF(SWD0)
  CHANDEF(SWD1)
  CHANDEF(SWD2)
  CHANDEF(SWE0)
  CHANDEF(SWE1)
  CHANDEF(SWF0)
  CHANDEF(SWF1)
#endif

#ifdef UNDEF_INP
#define INP_RUD_DR0 INP_SWA0
#define INP_RUD_DR1 INP_SWA1
#define INP_RUD_DR2 INP_SWA2
#define INP_ELE_DR0 INP_SWB0
#define INP_ELE_DR1 INP_SWB1
#define INP_ELE_DR2 INP_SWB2
#define INP_AIL_DR0 INP_SWC0
#define INP_AIL_DR1 INP_SWC1
#define INP_AIL_DR2 INP_SWC2
#define INP_FMOD0  INP_SWD0
#define INP_FMOD1  INP_SWD1
#define INP_FMOD2  INP_SWD2
#define INP_MIX0   INP_SWD0
#define INP_MIX1   INP_SWD1
#define INP_MIX2   INP_SWD2
#define INP_GEAR0  INP_SWE0
#define INP_GEAR1  INP_SWE1
#define INP_HOLD0  INP_SWF0
#define INP_HOLD1  INP_SWF1
#endif
#ifdef CHANMAP
//These are legacy mappings
  CHANMAP("DR",     SWA1)
  CHANMAP("RUD DR", SWA1)
  CHANMAP("ELE_DR", SWB1)
  CHANMAP("AIL_DR", SWC1)
  CHANMAP("GEAR",   SWE1)
//Current mappings
  CHANMAP("RUD DR0", SWA0)
  CHANMAP("RUD DR1", SWA1)
  CHANMAP("ELE DR0", SWB0)
  CHANMAP("ELE DR1", SWB1)
  CHANMAP("AIL DR0", SWC0)
  CHANMAP("AIL DR1", SWC1)
  CHANMAP("FMODE0", SWD0)
  CHANMAP("FMODE1", SWD1)
  CHANMAP("FMODE2", SWD2)
  CHANMAP("MIX0", SWD0)
  CHANMAP("MIX1", SWD1)
  CHANMAP("MIX2", SWD2)
  CHANMAP("GEAR0", SWE0)
  CHANMAP("GEAR1", SWE1)
#endif

#ifdef BUTTONDEF
  BUTTONDEF(TRIM_LV_NEG) /* LEFT-VERTICAL */
  BUTTONDEF(TRIM_LV_POS)
  BUTTONDEF(TRIM_RV_NEG) /* RIGHT-VERTICAL */
  BUTTONDEF(TRIM_RV_POS)
  BUTTONDEF(TRIM_LH_NEG) /* LEFT-HORIZONTAL */
  BUTTONDEF(TRIM_LH_POS)
  BUTTONDEF(TRIM_RH_NEG) /* RIGHT-HORIZONTAL */
  BUTTONDEF(TRIM_RH_POS)
  BUTTONDEF(LEFT)
  BUTTONDEF(RIGHT)
  BUTTONDEF(DOWN)
  BUTTONDEF(UP)
  BUTTONDEF(ENTER)
  BUTTONDEF(EXIT)
#endif
