/* File: "update_state_985.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 982",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_982[0]);
*/
SBool update_state_985(const SBool *queue_982,
                       const SWord32 ptr_982)
{
  const SBool   s0 = queue_982[0];
  return s0;
}
