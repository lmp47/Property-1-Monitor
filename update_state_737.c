/* File: "update_state_737.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 734",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_734[0]);
*/
SBool update_state_737(const SBool *queue_734,
                       const SWord32 ptr_734)
{
  const SBool   s0 = queue_734[0];
  return s0;
}
