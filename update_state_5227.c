/* File: "update_state_5227.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5224",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5224[0]);
*/
SBool update_state_5227(const SBool *queue_5224,
                        const SWord32 ptr_5224)
{
  const SBool   s0 = queue_5224[0];
  return s0;
}
