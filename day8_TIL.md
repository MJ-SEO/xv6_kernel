### 1. Scheduler 구현


기존 Round-Robin방식으로 동작하는 Scheduler를 Process의 Priority를 기반으로 동작하도록 바꾸는 작업을 진행했다.

OS수업에서 Round-Robin방식 을 포함해 FIFO, SJF, MLFQ 등의 스케줄링 기법들을 배웠는데, 실제로 커널을 들여다보며 스케줄러의 코드를 분석하고, 구현해보는 것이 큰 도움이 된다.

실제 OS Scheduler의 동작방식을 좀 더 명확하게 이해할 수 있었다.
  
----  
  
      
### 2. POSIX
      
     이식 가능 운영 체제 인터페이스(interface, Portable Operating System Interface)의 약자로,
     서로 다른 UNIX OS의 공통 API를 정리하여 이식성이 높은 유닉스 응용 프로그램을 개발하기 위한 목적으로 
     IEEE가 책정한 애플리케이션 인터페이스 규격.

다른 친구들과 테스트케이스를 공유하기 위해 API를 통합하는 작업을 진행했는데, POSIX같은 공식 규격을 지키면서 코드를 짜는 습관이 중요한 부분일 수 있다는 점을 배웠다.
