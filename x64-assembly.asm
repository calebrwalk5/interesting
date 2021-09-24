; x64 shit lol
extrn ExitProcess: PROC
libraries
extrn MessageBoxA: PROC
.data
caption db 'x64 assembly', 0
message db 'hello, world', 0
.code 
Start PROC
  sub    rsp,28h
  mov    rcx, 0
  lea    rdx, message
  lea    r8,  caption
  mov    r9d, 0
  call   MessageBoxA
  mov    ecx, eax
  call ExitProcess
Start ENDP
Exit
