/* File: "update_state_2236.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2233",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2233[0]);
*/
SBool update_state_2236(const SBool *queue_2233,
                        const SWord32 ptr_2233)
{
  const SBool   s0 = queue_2233[0];
  return s0;
}
