/* File: "update_state_772.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 769",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_769[0]);
*/
SBool update_state_772(const SBool *queue_769,
                       const SWord32 ptr_769)
{
  const SBool   s0 = queue_769[0];
  return s0;
}
