/* File: "update_state_2866.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2863",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2863[0]);
*/
SBool update_state_2866(const SBool *queue_2863,
                        const SWord32 ptr_2863)
{
  const SBool   s0 = queue_2863[0];
  return s0;
}
