/* File: "update_state_1098.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1095",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1095[0]);
*/
SInt64 update_state_1098(const SInt64 *queue_1095,
                         const SWord32 ptr_1095)
{
  const SInt64  s0 = queue_1095[0];
  return s0;
}
