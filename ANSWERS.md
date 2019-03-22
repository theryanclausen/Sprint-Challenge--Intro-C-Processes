**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

New:
When a process is created it enters a sort of waiting to wait stage where the system makes sure this process is OK and there is sufficient space for it to be handled.

Ready:
When a process deemed OK or when a running process is interrupted it enters the ready state. Ready state is like the sideline of a lacrosse game. All of these processes or players waiting for the scheduler or coach to pull players from the running state or field off and let them get in the game.

Running:
When a process is actually processing. To continue our lacrosse metaphor, a number of things can happen from this state. They can be interrupted and replaced by a different process i.e. put on the bench, it can exit, i.e. the game or program has ended or the process has experienced an injury or error and will not return to this game, or it can be put in a wait state, which is essentially the penalty box. A process must do it's time before returning to the ready state to await being put back in the game.

Terminated:
finished. See above.

Waiting:
Longer operation has been initialized from running state, process moves to this state. See above for metaphor. 

**2. What is a zombie process?**

A child process that has finished all of it's work but is still hanging out in the process list.

**3. How does a zombie process get created? How does one get destroyed?**

A zombie process gets created when a child process is not terminated. A zombie process can be destroyed by being reaped by the parent or to kill off the parent process.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

Compiled languages tend to be faster at run time than interpreted languages. By being closer in terms of abstraction to the actual CPU, compiled languages also have the benefit of memory management. 