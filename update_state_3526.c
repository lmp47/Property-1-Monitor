/* File: "update_state_3526.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3523",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3523[0]);
*/
SBool update_state_3526(const SBool *queue_3523,
                        const SWord32 ptr_3523)
{
  const SBool   s0 = queue_3523[0];
  return s0;
}