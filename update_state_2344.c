/* File: "update_state_2344.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2341",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2341[0]);
*/
SBool update_state_2344(const SBool *queue_2341,
                        const SWord32 ptr_2341)
{
  const SBool   s0 = queue_2341[0];
  return s0;
}