/* File: "update_state_4145.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4142",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4142[0]);
*/
SBool update_state_4145(const SBool *queue_4142,
                        const SWord32 ptr_4142)
{
  const SBool   s0 = queue_4142[0];
  return s0;
}
