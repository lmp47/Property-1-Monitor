/* File: "update_state_1203.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1200",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1200[0]);
*/
SInt64 update_state_1203(const SInt64 *queue_1200,
                         const SWord32 ptr_1200)
{
  const SInt64  s0 = queue_1200[0];
  return s0;
}
