/* File: "update_state_533.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 530",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_530[0]);
*/
SBool update_state_533(const SBool *queue_530,
                       const SWord32 ptr_530)
{
  const SBool   s0 = queue_530[0];
  return s0;
}
