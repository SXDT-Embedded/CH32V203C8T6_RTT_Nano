/* FinSH config file */

#ifndef __MSH_CFG_H__
#define __MSH_CFG_H__

// <<< Use Configuration Wizard in Context Menu >>>
#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_USING_MSH_ONLY
// <h>FinSH Configuration
// <o>the priority of finsh thread <1-30>
//  <i>the priority of finsh thread
//  <i>Default: 21
// #define FINSH_THREAD_PRIORITY       14
#define __FINSH_THREAD_PRIORITY     5
#define FINSH_THREAD_PRIORITY       (RT_THREAD_PRIORITY_MAX / 8 * __FINSH_THREAD_PRIORITY + 1)

// <o>the stack of finsh thread <1-4096>
//  <i>the stack of finsh thread
//  <i>Default: 4096  (4096Byte)
#define FINSH_THREAD_STACK_SIZE     1024

// #define FINSH_USING_SYMTAB
// <c1>Enable command description
//  <i>Enable command description
// #define FINSH_USING_DESCRIPTION

#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES         5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_CMD_SIZE 80
//  </c>
// </h>

// <<< end of configuration section >>>
#endif
