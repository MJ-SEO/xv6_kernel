### Xv6 kernel memory layout
    
Xv6의 address space는 아래와 같다.

	code
	stack(fixed-sized, one page)
	heap(grows towards the high-end of address space)

오늘 진행한 Lab3에서는 기존의address space를 아래와 같이 수정했다.

	code
	heap(grows towards the high-end of address space)
	...(gap)
	stack(at end of address space; grows backwards)

---
  

### How we load the program into memory and set up the page table?
  
1. Opens the executable file and parses it // ELF format, header

2. Initializes the kernel memory using _setupkvm()_ ,which maps the pages of the kernel to the process adress space.

3. Moves on to load the sections of the executable file into memory using _loaduvm()_ ,which creates the memory pages for each section and maps them to the address space.

4. Create the stack.

5. Initialize the stack pointer.


---
  

### Lab3 TODO list

1. process structure에 새로운 stack pointer를 위한 변수를 하나 만든다.

2. exec.c 소스코드에서 Stack pointer의 위치를 재설정 하는 코드를 작성한다.

3. vm.c 소스코드에서 위와 관련된 함수 _allocuvm()_을 수정한다.

4. syscall.c 소스코드에서 기존 Stack pointer를 사용하던 부분의 코드를 수정한다.

5. vm.c 소스코드에서 _copyuvm()_함수를 수정한다.


