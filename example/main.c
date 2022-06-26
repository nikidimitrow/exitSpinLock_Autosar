volatile int exitSpinLock = 0;

void Debug_spinLock(void)
{
    while (exitSpinLock == 0) { }
}

/*****************************************************************************/
/*@brief      Main function
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     always 0 as the function is not expected to return
 * @context    Called by the startup code
 *****************************************************************************/
int main(void)
{
  
  //change exitSpinLock variable to continued with debbuging
  Debug_spinLock();
  
  BrsHwDisableInterruptAtPowerOn();

# if (BRS_CPU_CORE_AMOUNT>1)
  if (BrsHw_GetCore() == BRSHW_INIT_CORE_ID)
# endif
#endif /*!_MICROSOFT_C_VTT_*/
  {
    MainInit();
  }

  Os_InitMemory();
  Os_Init();
  EcuM_Init(); /* never returns */
 
#endif /*else BRS_FBL_NO_ECUMINIT*/

  return 0;
}
