1. BIOS(Basic Input/Output System)

컴퓨터를 켜자마자 작동하는 펌웨어(하드웨어 장치에 포함된 소프트웨어)로 운영체제의 일종

2. The ROM BIOS

IBM PC(Program Counter)의 physical address는 0x000ffff0에서 실행된다.

BIOS의 CS(Current Segment register) = 0xf000, IP(Instruction Pointer, or Program Counter) = 0xfff0

첫번째 Instruction은 jmp, which jumps to the segmented address CS = 0xf000 and IP = 0xe05b

// 0xe50b로 jmp하는 이유가 BIOS는 hard-wired라 가장 먼저 시작되는 건 보장하지만 범위가 >매우 좁아서 한계가 있기 때문인가? 모르겠다.

3. The Boot Loader

커널을 메모리에 로드하고, OS를 읽어내는 역할

BIOS가 부팅가능한 장치를 찾으면, 0x00007C00 ~ 0x00007dff(512 bytes) 섹터에 있는 부트섹터를 로드

// 512 bytes는 하드디스크 섹터의 최소단위, 0x7c00은 국룰..ㅎ

 
- Main Function

1.프로세서를 32bit 보호모드로 전환 // offset이 16bit가 아닌 32bit

2.x86의 I/O명령어를 이용해 하드디스크에 직접접근해서 커널을 읽는다.

- gdb command

b [@] - @ 부분에 브레이크 포인트 설정 // func, 10, *0x7c00 등 

s - step, 현재 행 수행 후 정지, 함수 호출시 함수 안으로

si - s를 i(어셈블리)형식으로..?

c - 다음 브레이크 포인트까지 진행

x - 메모리 상태 검사 x/([범위][출력형식[범위의단위][메모리주소나 함수명]

x/i - 어셈블리 형식

4. 느낀점

- 어셈블리어를 다 까먹은 수준이다.. 컴퓨터구조 복습해야 겠다.
- 어셈블리어에 겁을먹어서 코드를 너무 얕게 본 것 같다.. 내일은 더 깊은 곳까지 이해하도록 해봐야 겠다.
