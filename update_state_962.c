/* File: "update_state_962.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 959",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_959[0]);
*/
SBool update_state_962(const SBool *queue_959,
                       const SWord32 ptr_959)
{
  const SBool   s0 = queue_959[0];
  return s0;
}