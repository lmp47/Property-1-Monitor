/* File: "update_state_929.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 926",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_926[0]);
*/
SBool update_state_929(const SBool *queue_926,
                       const SWord32 ptr_926)
{
  const SBool   s0 = queue_926[0];
  return s0;
}
