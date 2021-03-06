/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_PROCESS_H__
#define __EXTPROFILE_PROCESS_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_process.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline int x_pcntl_alarm(int seconds) {
  FUNCTION_INJECTION_BUILTIN(pcntl_alarm);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_alarm(seconds);
}

inline void x_pcntl_exec(CStrRef path, CArrRef args = null_array, CArrRef envs = null_array) {
  FUNCTION_INJECTION_BUILTIN(pcntl_exec);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_pcntl_exec(path, args, envs);
}

inline int x_pcntl_fork() {
  FUNCTION_INJECTION_BUILTIN(pcntl_fork);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_fork();
}

inline Variant x_pcntl_getpriority(int pid = 0, int process_identifier = 0) {
  FUNCTION_INJECTION_BUILTIN(pcntl_getpriority);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_getpriority(pid, process_identifier);
}

inline bool x_pcntl_setpriority(int priority, int pid = 0, int process_identifier = 0) {
  FUNCTION_INJECTION_BUILTIN(pcntl_setpriority);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_setpriority(priority, pid, process_identifier);
}

inline bool x_pcntl_signal(int signo, CVarRef handler, bool restart_syscalls = true) {
  FUNCTION_INJECTION_BUILTIN(pcntl_signal);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_signal(signo, handler, restart_syscalls);
}

inline int x_pcntl_wait(VRefParam status, int options = 0) {
  FUNCTION_INJECTION_BUILTIN(pcntl_wait);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_wait(status, options);
}

inline int x_pcntl_waitpid(int pid, VRefParam status, int options = 0) {
  FUNCTION_INJECTION_BUILTIN(pcntl_waitpid);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_waitpid(pid, status, options);
}

inline int x_pcntl_wexitstatus(int status) {
  FUNCTION_INJECTION_BUILTIN(pcntl_wexitstatus);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_wexitstatus(status);
}

inline bool x_pcntl_wifexited(int status) {
  FUNCTION_INJECTION_BUILTIN(pcntl_wifexited);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_wifexited(status);
}

inline bool x_pcntl_wifsignaled(int status) {
  FUNCTION_INJECTION_BUILTIN(pcntl_wifsignaled);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_wifsignaled(status);
}

inline bool x_pcntl_wifstopped(int status) {
  FUNCTION_INJECTION_BUILTIN(pcntl_wifstopped);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_wifstopped(status);
}

inline int x_pcntl_wstopsig(int status) {
  FUNCTION_INJECTION_BUILTIN(pcntl_wstopsig);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_wstopsig(status);
}

inline int x_pcntl_wtermsig(int status) {
  FUNCTION_INJECTION_BUILTIN(pcntl_wtermsig);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_wtermsig(status);
}

inline bool x_pcntl_signal_dispatch() {
  FUNCTION_INJECTION_BUILTIN(pcntl_signal_dispatch);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pcntl_signal_dispatch();
}

inline String x_shell_exec(CStrRef cmd) {
  FUNCTION_INJECTION_BUILTIN(shell_exec);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_shell_exec(cmd);
}

inline String x_exec(CStrRef command, VRefParam output = null, VRefParam return_var = null) {
  FUNCTION_INJECTION_BUILTIN(exec);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_exec(command, output, return_var);
}

inline void x_passthru(CStrRef command, VRefParam return_var = null) {
  FUNCTION_INJECTION_BUILTIN(passthru);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_passthru(command, return_var);
}

inline String x_system(CStrRef command, VRefParam return_var = null) {
  FUNCTION_INJECTION_BUILTIN(system);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_system(command, return_var);
}

inline Variant x_proc_open(CStrRef cmd, CArrRef descriptorspec, VRefParam pipes, CStrRef cwd = null_string, CVarRef env = null_variant, CVarRef other_options = null_variant) {
  FUNCTION_INJECTION_BUILTIN(proc_open);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_proc_open(cmd, descriptorspec, pipes, cwd, env, other_options);
}

inline bool x_proc_terminate(CObjRef process, int signal = 0) {
  FUNCTION_INJECTION_BUILTIN(proc_terminate);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_proc_terminate(process, signal);
}

inline int x_proc_close(CObjRef process) {
  FUNCTION_INJECTION_BUILTIN(proc_close);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_proc_close(process);
}

inline Array x_proc_get_status(CObjRef process) {
  FUNCTION_INJECTION_BUILTIN(proc_get_status);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_proc_get_status(process);
}

inline bool x_proc_nice(int increment) {
  FUNCTION_INJECTION_BUILTIN(proc_nice);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_proc_nice(increment);
}

inline String x_escapeshellarg(CStrRef arg) {
  FUNCTION_INJECTION_BUILTIN(escapeshellarg);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_escapeshellarg(arg);
}

inline String x_escapeshellcmd(CStrRef command) {
  FUNCTION_INJECTION_BUILTIN(escapeshellcmd);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_escapeshellcmd(command);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_PROCESS_H__
