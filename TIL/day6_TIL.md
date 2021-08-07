#### 1. Xv6 Multiplexing

Xv6 multiplexes by switching each processor from one process to another in two
situations

- First, xv6’s sleep and wakeup mechanism switches.

- Second, xv6 periodically forces a switch when a process is executing user instructions.

	Chellenges

      1. how to switch from one process to another? >> standard mechanism of context switching

      2. how to do context switching transparently? >> using timer interrupt

      3. many CPUs may be switching among processes concurrently, and a locking plan is necessary to avoid races

      4. when a process has exited its memory and other resources must be freed, but it cannot do all of this itself >> ?

---

#### 2. Context Switching

Mechanism of switching between a kernel thread and a scheduler thread

Saving and restoring CPU registers

- struct context 

	ebx(Extended Base Register)

	ebp(Extended Base Pointer)

	esi(Extended Source Index)

	edi(Extended Destination Index)

	eip(Extended Instruction Pointer = PC)

---

#### 3. Xv6 Scheduling

Xv6 uses simple round-robin scheduler

time interrupt - In trap(trap.c)

yield() - timer interrupt에 의해 발생하는 함수, 현재 프로세스의 state를 RUNNABLE로 바꾸고 sched함수를 실행한다. 

sched() - yield(), exit(), sleep() 함수에 의해 발생하는 함수 intena 설정 후 swtach()함수 실행

swtch(**old, *new) - 현재 프로세스의 context를 **old에 저장한 후 *new(scheduler)의 context를 return

---

#### 4. 느낀점

책을 읽고 이해하는데 조금 오래걸렸다.

그래도 xv6의 scheduler가 어떻게 작동하는지 전체적인 그림을 그릴 수 있었다.

아직 100%이해했다고 보기는 어렵지만 내일 더 완전히 이해하고, 구현까지 완성할 수 있었으면 좋겠다.

