#### 1. Add new system call
    

Process의 Priority를 조절하기 위한 함수를 만들면서, 새로운 System call을 생성하는 과정에 대해 다시한번 리마인드 할 수 있었다.

xv6 kernel을 기준으로 system call함수를 새로 만들기 위해 수정해줘야할 소스코드는 다음과 같다.

        syscall.h
        syscall.c
        usys.S
        defs.h
        user.h
        sysproc.c
        proc.c

---
  
 
#### 2. Scheduler
  
Xv6커널의 Scheduler는 simple round-robin 방식으로 구현되어 있다.

---
  

#### 3. WSL2

오늘 작업하는 ssh 서버에 문제가 생겨서 그동안 미루고 미뤄오던 WSL2작업환경을 구현했다.

sudo명령어와 원하는 라이브러리를 사용할 수 있어서 좋다.


---
  
  
#### 4. 느낀점

아무래도 오늘은 Lab2의 코드구현에 시간을 많이 쓰다보니 적을게 많이 없는 것 같다.
