#include "kernel/system.h"
#include <minix/endpoint.h>
int do_sample (struct proc *caller_ptr, message *m_ptr)
{
 static int counter[20];
 int i;
 printf ("The message I got is %d\n", m_ptr->m1_i1);
 if (m_ptr->m1_i1==0)
 {
 for (i=0; i< 20; i++)
 printf ("%d: %d\n", i, counter[i]);
 }
 else
 counter[m_ptr->m1_i1]++;
 return (OK);
}