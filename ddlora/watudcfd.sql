create table watudcaf
(
wtucdate    varchar2(6),
wtucunit    varchar2(3),
wtucdoct    varchar2(6),
wtucprty    varchar2(3),
wtucccod    varchar2(3),
wtucnumb    number(8,0),
wtucspar    varchar2(13),
lf          varchar2(1),
constraint watudca1 primary key( 
wtucdate,
wtucunit,
wtucdoct,
wtucprty,
wtucccod)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym watudcaf for watudcaf;
