/* RT-Thread config file */

#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

#include <rtthread.h>

// #define RT_USING_FINSH
//��ϵͳ���� FinSH ���Դ�����Ҫ�� rtconfig.h �п���������
#include "finsh_config.h"

//��������
// <<< Use Configuration Wizard in Context Menu >>>
// <h>Basic Configuration
// <o>Maximal level of thread priority <8-256>
//  <i>Default: 32
//1������ϵͳ������ȼ��������÷�Χ 8 �� 256��Ĭ��ֵ 32�����޸ġ�
#define RT_THREAD_PRIORITY_MAX  16
// <o>OS tick per second
//  <i>Default: 1000   (1ms)
//2������ RT-Thread ����ϵͳ���ģ���ʾ���� tick ÿ�룬��Ĭ��ֵΪ 100 ����ʾһ��ʱ�ӽ��ģ�os tick������Ϊ 10ms������ֵΪ 100 �� 1000��ʱ�ӽ�����Խ�죬ϵͳ�Ķ��⿪����Խ��
#define RT_TICK_PER_SECOND  1000
// <o>Alignment size for CPU architecture data access
//  <i>Default: 4
//3���ֽڶ���ʱ�趨������ֽڸ�����Ĭ�� 4����ʹ�� ALIGN (RT_ALIGN_SIZE) �����ֽڶ��롣
#define RT_ALIGN_SIZE   4
// <o>the max length of object name<2-16>
//  <i>Default: 8
//4�����ö������Ƶ���󳤶ȣ�Ĭ�� 8 ���ַ���һ�������޸ġ�
#define RT_NAME_MAX    8
// <c1>Using RT-Thread components initialization
//  <i>Using RT-Thread components initialization
//5������ʹ������Զ���ʼ�����ܣ�Ĭ����Ҫʹ�ã������ú������ʹ���Զ���ʼ�����ܡ�
#define RT_USING_COMPONENTS_INIT
// </c>
//6������ RT_USING_USER_MAIN �꣬��� user_main ���ܣ�Ĭ����Ҫ�������������ܵ��� RT-Thread ���������룻main �̵߳�ջ��С���޸ġ�
#define RT_USING_USER_MAIN
// <o>the stack size of main thread<1-4086>
//  <i>Default: 512
#define RT_MAIN_THREAD_STACK_SIZE     512

//�ں˵��Թ�������
//���� RT_DEBUG ������ debug ģʽ��������ϵͳ���ԣ�����ʵ�ִ�ӡ֮����Դ�ӡϵͳ LOG ��־�����ڴ��뿪������Թ����д򿪸���������Զ�λ���⣬�ڴ��뷢��ʱ�رո��
//#define RT_DEBUG                 // �ر� debug
#define RT_DEBUG_INIT 0            // ���������ʼ���������ã�����Ϊ 1 ����ӡ�Զ���ʼ���ĺ�������
//#define RT_USING_OVERFLOW_CHECK  // �ر�ջ������


//���Ӻ�������
//�����Ƿ�ʹ�ù��Ӻ�����Ĭ�Ϲرա�
#define RT_USING_HOOK                         // �Ƿ� ����ϵͳ���ӹ���
#define RT_USING_IDLE_HOOK                    // �Ƿ� ���������̹߳��ӹ���

//�����ʱ������
//�����Ƿ����������ʱ�����Լ���ز��������ã�Ĭ�Ϲرա�
#define RT_USING_TIMER_SOFT       0             // �ر������ʱ�����ܣ�Ϊ 1 ���
#if RT_USING_TIMER_SOFT == 0
#undef RT_USING_TIMER_SOFT
#endif
#define RT_TIMER_THREAD_PRIO        4           // ���������ʱ���̵߳����ȼ���Ĭ��Ϊ 4
#define RT_TIMER_THREAD_STACK_SIZE  512         // ���������ʱ���̵߳�ջ��С��Ĭ��Ϊ 512 �ֽ�

//IPC ����
#define RT_USING_SEMAPHORE       // �����Ƿ�ʹ�� �ź�����Ĭ�ϴ�
#define RT_USING_MUTEX           // �����Ƿ�ʹ�� ������
#define RT_USING_EVENT           // �����Ƿ�ʹ�� �¼���
#define RT_USING_MAILBOX         // �����Ƿ�ʹ��  ����
#define RT_USING_MESSAGEQUEUE    // �����Ƿ�ʹ�� ��Ϣ����

//�ڴ�����
//#define RT_USING_MEMPOOL      // �Ƿ�ʹ�� �ڴ��
#define RT_USING_HEAP           // �Ƿ�ʹ�� �ڴ��
#define RT_USING_SMALL_MEM      // �Ƿ�ʹ�� С�ڴ����
//#define RT_USING_TINY_SIZE    // �Ƿ�ʹ�� С������㷨��ǣ���� rt_memset��rt_memcpy �����������

// <h>Console Configuration
// <c1>Using console
//  <i>Using console
#define RT_USING_CONSOLE
// </c>
// <o>the buffer size of console <1-1024>
//  <i>the buffer size of console
//  <i>Default: 128  (128Byte)
#define RT_CONSOLEBUF_SIZE          128
#define RT_CONSOLE_DEVICE_NAME  "uart1"
// </h>

#if 0
#if defined(RT_USING_FINSH)
    #define FINSH_USING_MSH
    #define FINSH_USING_MSH_ONLY
    // <h>Finsh Configuration
    // <o>the priority of finsh thread <1-7>
    //  <i>the priority of finsh thread
    //  <i>Default: 6
    #define __FINSH_THREAD_PRIORITY     5
    #define FINSH_THREAD_PRIORITY       (RT_THREAD_PRIORITY_MAX / 8 * __FINSH_THREAD_PRIORITY + 1)
    // <o>the stack of finsh thread <1-4096>
    //  <i>the stack of finsh thread
    //  <i>Default: 4096  (4096Byte)
    #define FINSH_THREAD_STACK_SIZE     1024
    // <o>the history lines of finsh thread <1-32>
    //  <i>the history lines of finsh thread
    //  <i>Default: 5
    #define FINSH_USING_HISTORY
    #define FINSH_HISTORY_LINES         5
    #define FINSH_USING_SYMTAB
    #define FINSH_USING_DESCRIPTION
    #define FINSH_CMD_SIZE 80
    // </h>
#endif
#endif

// <<< end of configuration section >>>

#define RT_USING_SERIAL
#define RT_USING_PIN
#define RT_USING_UART1
#define RT_USING_DEVICE_IPC

//DEVICE �������
//��ϵͳ�м��� device ���Դ��ʱ������Ҫ�� rtconfig.h �п���������
#define RT_USING_DEVICE

//#define RT_USING_POSIX

#endif
