/* File: "update_state_1021.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1018",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1018[0]);
*/
SBool update_state_1021(const SBool *queue_1018,
                        const SWord32 ptr_1018)
{
  const SBool   s0 = queue_1018[0];
  return s0;
}
