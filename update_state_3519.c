/* File: "update_state_3519.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3516",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3516[0]);
*/
SInt64 update_state_3519(const SInt64 *queue_3516,
                         const SWord32 ptr_3516)
{
  const SInt64  s0 = queue_3516[0];
  return s0;
}
