/* File: "update_state_4679.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4676",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4676[0]);
*/
SBool update_state_4679(const SBool *queue_4676,
                        const SWord32 ptr_4676)
{
  const SBool   s0 = queue_4676[0];
  return s0;
}
