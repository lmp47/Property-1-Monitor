/* File: "update_state_881.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 878",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_878[0]);
*/
SBool update_state_881(const SBool *queue_878,
                       const SWord32 ptr_878)
{
  const SBool   s0 = queue_878[0];
  return s0;
}
