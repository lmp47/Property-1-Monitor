/* File: "update_state_2926.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2923",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2923[0]);
*/
SBool update_state_2926(const SBool *queue_2923,
                        const SWord32 ptr_2923)
{
  const SBool   s0 = queue_2923[0];
  return s0;
}
