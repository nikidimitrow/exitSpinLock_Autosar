
volatile int exitSpinLock = 0;

void Debug_spinLock(void)
{
    while (exitSpinLock == 0) { }
}
