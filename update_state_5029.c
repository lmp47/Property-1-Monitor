/* File: "update_state_5029.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5026",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5026[0]);
*/
SBool update_state_5029(const SBool *queue_5026,
                        const SWord32 ptr_5026)
{
  const SBool   s0 = queue_5026[0];
  return s0;
}
