/* File: "update_state_830.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 827",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_827[0]);
*/
SBool update_state_830(const SBool *queue_827,
                       const SWord32 ptr_827)
{
  const SBool   s0 = queue_827[0];
  return s0;
}
