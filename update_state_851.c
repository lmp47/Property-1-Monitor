/* File: "update_state_851.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 848",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_848[0]);
*/
SBool update_state_851(const SBool *queue_848,
                       const SWord32 ptr_848)
{
  const SBool   s0 = queue_848[0];
  return s0;
}
