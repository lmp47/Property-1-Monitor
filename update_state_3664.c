/* File: "update_state_3664.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3661",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3661[0]);
*/
SBool update_state_3664(const SBool *queue_3661,
                        const SWord32 ptr_3661)
{
  const SBool   s0 = queue_3661[0];
  return s0;
}
