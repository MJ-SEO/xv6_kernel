#### 1. printf.c 

- Variable Argument(가변인자)

변수의 수가 달라질 수 있는 인자

// ...의 의미가 뭔지 모르고 있었는데, 교수님꼐서 말씀해주셔서 알 수 있었다.

---

#### 2. Console.c

Console에서의 input, ourput

Input - from thr keyboard or serial port

Output - wirttedn to the screen and serial port

- outb, inb

COM1 port(0x3f8)나, CRTPORT(0x3d4)등 low-level port와의 I/O를 돕는 function

// low-level의 함수가 많이 익숙하지 않다는 생각이 들었다. Arichitecture spec을 잘 찾아봐야 겠다.

---

#### 3. The Stack

- esp

Points to the lowest location on the stack that is currently in use (Current stack pointer)

현재 스택의 최상단(주소 값이 가장 작은) 곳을 저장하고 있는 레지스터

Push : 현재 esp의 주소 값을 데이터 크기만큼 감소 시킨 후, 값을 쓴다.

Pop : 현재 esp에 저장된 값을 목적 레지스터로 옮기고, esp주소 값을 증가시킨다.


- ebp

Base pointer for the current stack frame

 하나의 스택 프레임을 Reference하는 레지스터


- eip

다음에 실행할 명령의 주소를 저장하고 있는 레지스터 (=Program Counter)

---

#### 4. 느낀점

- 복잡하게 서로 묶여있는 코드를 이해하는게 쉽지 않았다. C로 된 코드도 JAVA처럼 여러 코드가 연결되어 빌드 될 수 있다는 걸 알았다. 이런 어려운 구조의 코드를 읽고, 이해할 수 있는 능력을 키우는게 중요하다고 느꼈고 동시에 기본기가 탄탄해야 어려운 구조의 코드도 읽을 수 있겠다는 생각이 들었다.
