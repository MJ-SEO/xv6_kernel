#### 1. Process

The unit of isolation in xv6 (as in other Unix operating systems)

Isolation memory, CPU, file descriptors, etc …

- Address space(주소공간)

The process abstraction provides the illusion to a program that it has it own private machine

// xv6 uses page table to map a virtual address to a physical address

---

#### 2. First process

BIOS >> Bootloader >> entry >> mian >> userinit

- allocproc 

allocate a slot in the process table 

Find UNUSED slot and sey the state to EMBRYO to mark it as used and gives the process a unique pid

---

#### 3. Interrupt vs Trap

- trap

	caused by the current process running on a processor

- Interrupt

	caused by devices and may not be related to the currently running process

- xv6 inturrpt

총 256개의 interrupt 허용

0 ~ 31 are defined for software exceptions

32 ~ 63 maps the hardware interrupt

64 as the system call interrupt  

// by tvinit() by main() >> sets up the 256 entries in the IDT table.

---

#### 4. Wait, exit, and kill

exit() system call 이후 Child process는 바로 죽는게 아니라 ZOMBIE process상태가 된다.

parent가 wait()을통해 ZOMBIE, child 프로세스를 찾고, 초기화 시켜준다.

// parent process가 child process보다 먼저 종료될 경우 init process가 chile를 입양하고, wait

---

#### 5. 느낀점

첫날 느꼈던 막막한 감정에 비하면 점점 코드를 읽는게 익숙해지는 것 같다.

아직 많이 어렵긴 하지만 그렇기에 그 과정에서 더 많이 배우는 것 같다.

