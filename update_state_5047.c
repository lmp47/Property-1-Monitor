/* File: "update_state_5047.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5044",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5044[0]);
*/
SBool update_state_5047(const SBool *queue_5044,
                        const SWord32 ptr_5044)
{
  const SBool   s0 = queue_5044[0];
  return s0;
}
