/* File: "update_state_141.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 138",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_138[0]);
*/
SInt64 update_state_141(const SInt64 *queue_138,
                        const SWord32 ptr_138)
{
  const SInt64  s0 = queue_138[0];
  return s0;
}
