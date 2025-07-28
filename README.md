# 🖥️ Operating Systems Projects – COMP604 (2025, AUT Semester 1)

This repository contains my individual work for COMP604: Operating Systems at Auckland University of Technology. The work focuses on shell scripting, C programming, and modifying the xv6-riscv teaching OS, developed and tested on Ubuntu.

**Author:** Thuan Nguyen | **Student ID:** 12345678

---

## 📚 Table of Contents

- [📁 Project Structure](#-project-structure)
  - [Assignment 1](#assignment-1-shell--data-structures--xv6-system-calls--memory-management)
  - [Assignment 2](#assignment-2-cpu-scheduling--semaphores--file-system--file-seek)
- [🛠 Technologies Used](#-technologies-used)
- [📌 Key Concepts](#-key-concepts)
- [📸 Sample Outputs](#-sample-outputs)
  
---

## 📁 Project Structure

### Assignment 1: Shell • Data Structures • xv6 System Calls • Memory Management


- `extract.sh`: Shell script to filter lines containing "special" and manage file I/O  
- `main.c` and `listfuncs.c`: C program to insert, delete, and print a linked list of PCBs  
- `ps.c`: xv6 user program to list all or running processes using a kernel syscall  
- **xv6-riscv-q3/**: Implementation of the `ps` system call (Assignment 1, Q3)  
- **xv6-riscv-q4/**: Implementation of `pageAccess()` system call to track memory page usage (Assignment 1, Q4)

> 🔍 **Purposes/Goals**
> - Designed and tested a PCB linked list with insert/delete/print functionality in C.
> - Developed a bash script to extract text patterns and redirect output with error handling.
> - Implemented the `ps` system call in xv6 to list all processes, displaying their PID, PPID, state, and size.
> - Created a `pageAccess()` system call in xv6 that uses a bitmap to identify accessed virtual memory pages.


---

### Assignment 2: CPU Scheduling • Semaphores • File System • File Seek


- `scheduler_results.pdf`: Recorded performance results (avg runtime, wait, and sleep) for Round Robin, FCFS, and Priority schedulers on 1–3 CPUs  
- `q2-23194073.tar`: xv6 with implementation of `setnice(pid, n)` and `getnice(pid)` syscalls for Priority scheduling  
- `q3-23194073.tar`: xv6 implementation of Read-Write semaphores using counting semaphores (no locks)  
- `q4-23194073.docx`: Answers to file system corruption and inode/data bitmap repair analysis  
- `q5-23194073.tar`: xv6 implementation of simplified `lseek(fd, offset)` syscall  

> 🔍 **Purposes/Goals**
> - Integrated a macro-based priority scheduler into xv6
> - Designed kernel-level read/write semaphore behavior
> - Analyzed and resolved file system inconsistencies
> - Implemented basic file offset repositioning syscall (`lseek`)

---

## 🛠 Technologies Used

- C Programming  
- Bash (Shell scripting)  
- xv6-riscv (Educational Unix-like OS)  
- QEMU Emulator  
- Ubuntu Linux (Development environment)

---

## 📌 Key Concepts

- **Process Scheduling:** FCFS, RR, Priority using custom `setnice()` and `getnice()`  
- **Kernel Synchronization:** Read-Write Semaphores (reader-writer problem)  
- **Shell Scripting:** Text parsing and conditional file operations  
- **System Calls:** `ps`, `lseek()`, `pageAccess()`, `setnice()`, `getnice()`  
- **Memory Management:** Page access tracking with bitmaps (`pageAccess`)  
- **File Systems:** Inode and directory block consistency checking  
- **File Seeking:** Custom implementation of `lseek()` syscall  

---

## 📸 Sample Outputs

### 📌 `ps` Command Output in xv6
```bash
$ ps
1 0 sleep init 12288
2 1 sleep sh 16384
4 2 running ps 12288
There are a total of 3 processes in the system
```
**Full output of the program is in docx files**

---



