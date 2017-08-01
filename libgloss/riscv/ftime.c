#include <machine/syscall.h>
#include <sys/timeb.h>

//----------------------------------------------------------------------
// ftime                                                                 
//----------------------------------------------------------------------
// Get the current time.  Only relatively correct.

int ftime(struct timeb* tp)
{
  tp->time = tp->millitm = 0;
  return 0;
}
