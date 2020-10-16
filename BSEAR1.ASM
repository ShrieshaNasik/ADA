;A program to implement binary search of 16 bit numbers

data segment
a dw 1234h,2345h,3456h,4567h,5678h,6789h,789ah,89abh
msg1 db "Search found the element @ position $"
msg2 db "element not found$"
key dw 1010h
num dw 08h
data ends

print macro msg
lea dx,msg
mov ah,09h
int 21h
endm

code segment
assume cs:code,ds:data
start: mov ax,data
mov ds,ax
mov si,0  ; initializing si to 1 num
mov di,num ; initializing di to last num
add di,di  ; to get the memory location of last number doubling it
sub di,2  ; since number stored in little indian sub 2

back: cmp si,di ; comparing low and high
ja loc3  ; jump to loc3 if low is greater than high : search fails : carry = 0 and zero = 0
mov bx,si ; next 3 inst are used to calc mid
add bx,di
shr bx,1
and bx,0fffeh ;masking bx to make it even to point to lower bits in the memory
mov ax,a[bx]
cmp ax,key
je loc1  ; jump if equal i.e key is in mid
jb loc2  ;jump if below i.e ignore lower half : mid < key : carry = 1
mov di,bx   ; moving mid to di : high = mid-1
sub di,2   ; adjusting as per lower indian
cmp di,0
js loc3
jmp back ; looping
loc2:
mov si,bx ; moving mid to si: low = mid+1
add si,2
jmp back
loc3:
print msg2
jmp ahead
loc1: print msg1
mov dx,48
shr bx,1
add dx, bx
mov ah,02h
int 21h
ahead:
mov ah,4ch
int 21h
code ends
end start


