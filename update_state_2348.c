/* File: "update_state_2348.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2345",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2345[0]);
*/
SBool update_state_2348(const SBool *queue_2345,
                        const SWord32 ptr_2345)
{
  const SBool   s0 = queue_2345[0];
  return s0;
}
