/* File: "update_state_2548.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2545",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2545[0]);
*/
SBool update_state_2548(const SBool *queue_2545,
                        const SWord32 ptr_2545)
{
  const SBool   s0 = queue_2545[0];
  return s0;
}
