/* File: "update_state_1042.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1039",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1039[0]);
*/
SBool update_state_1042(const SBool *queue_1039,
                        const SWord32 ptr_1039)
{
  const SBool   s0 = queue_1039[0];
  return s0;
}
