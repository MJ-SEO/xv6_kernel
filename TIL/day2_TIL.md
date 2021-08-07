#### 1. ELF(Executable and Linkable Format)

- ELP magin number

ELF binary는 four-byte의 “magic number”로 시작  // 0x7f, 45, 46, 4C

exec 시스템 콜이 이를 통해 제대로 된 ELF인지 확인

- ELF section header

0 .text - The program’s executable instructions

1 .rodata - Read-Only data, such as ASCII string constants produced by C compiler.

2 .data - The data section hold the program’s initialized data, such as global variable  like int x = 0;

VMA(virtual memory address) : 섹션이 실행될 것으로 예상되는 메모리주소

LMA(load memory address) : 섹션이 로드되어야 하는 메모리주소

- ELF program header

vaddr - virtual address

paddr - physical address

filesz - segment size in file

memsz - segment size in memory

---

#### 2. Control Register

- CR4 - 프로세서에서 지원하는 각종 확장기능을 제어하는 레지스터

    페이지 크기 확장 또는 메모리 영역 확장 기능을 활성화

- CR3 - 페이지 디렉토리의 물리주소와 페이지 캐시에 관련된 기능을 설정하는 레지스터

   Set page directory

- CR0 - 운영모드를 제어하는 레지스터

   실제모드에서 보호 모드로 전환(?)

   캐시 및 페이징 기능 등을 활성화 시킨다.

---

#### 3. 느낀점

- 코드를 보고 완전히 이해하는 느낌이 아직 없다. 
코드에 너무 겁먹지 않고, 다 이해할 수 있다는 마인드로 코드를 대할 필요성이 있을 것 같다. 
- 지난 과목들 C, 컴퓨터 구조, 운영체제 등의 과목에서 몰랐거나, 대충알고 지나간 것들이 많다는 것을 느꼈다. 내가 어디까지 알고, 어디까지 모르는지 확인할 필요성을 느꼈다.
- 영어가 부족해 1차자료를 보기 힘들다. 그래도 영어가 어렵다고 도망치기보다는 시간이 좀 걸리더라도 제대로된 자료를 찾아보는 습관을 들여야겠다는 생각이 들었다.
