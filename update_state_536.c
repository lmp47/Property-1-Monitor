/* File: "update_state_536.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 533",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_533[0]);
*/
SBool update_state_536(const SBool *queue_533,
                       const SWord32 ptr_533)
{
  const SBool   s0 = queue_533[0];
  return s0;
}
