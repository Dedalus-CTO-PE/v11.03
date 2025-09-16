create table watswsaf
(
wtswdate    varchar2(6),
wtswunit    varchar2(3),
wtswprty    varchar2(3),
wtswatyp    varchar2(3),
wtswclss    varchar2(3),
dwtswsta    varchar2(1),
wtswrng1    number(8,0),
wtswrng2    number(8,0),
wtswrng3    number(8,0),
wtswrng4    number(8,0),
wtswrng5    number(8,0),
wtswrng6    number(8,0),
wtswspar    varchar2(30),
lf          varchar2(1),
constraint watswsa1 primary key( 
wtswdate,
wtswunit,
wtswprty,
wtswatyp,
wtswclss,
dwtswsta)
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
create public synonym watswsaf for watswsaf;
