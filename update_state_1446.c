/* File: "update_state_1446.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1443",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1443[0]);
*/
SInt64 update_state_1446(const SInt64 *queue_1443,
                         const SWord32 ptr_1443)
{
  const SInt64  s0 = queue_1443[0];
  return s0;
}
