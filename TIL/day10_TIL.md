#### 1. Loadable Kernel Module

        A LKM(Loadable Kernel Module) is suite of functions in a file(module)
        that can be loaded to kernel space in runtime upon a superuser’s demand

- 커널 모듈이란, 커널을 수정하거나 재컴파일 할 필요 없이 실시간으로 커널을 수정 할 수 있도록 하는 코드를 포함하는 목적파일이다(.ko 파일)

- load by _insmod_,  unload by _rmmod_ listup by _lsmod_

- e.g) 디바이스 드라이버

---

#### 2. proc file

- A LKM(Loadable Kernel Module) can create a proc file.

- _proc_ file looks like a file but actually it is a kernel module.
(Interface for user betweend kernel)

- /proc 파일시스템은 리눅스 커널과 유저 영역 사이에 일어나는 통신 채널을 제공하는 가상 파일 시스템으로, 유저와 커널 사이의 통신을 가능하게 해준다.

---


#### 3.Prevent a kill to a specified process

LKM, proc file 적절히 사용하면, 커널과 통신하는 프로세스에 간섭할 수 있다.

- openhook - 특정 소스코드가 참조된 수를 저장하는 LKM

- listprocesses -  실행중인 전체 프로세스를 list하는 LKM

- dogdoor - 특정 프로세스를 kill되지 않도록 하는 LKM
