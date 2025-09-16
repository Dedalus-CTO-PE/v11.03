create table watunsaf
(
wtundate    varchar2(6),
wtununit    varchar2(3),
wtundoct    varchar2(6),
wtunprty    varchar2(3),
wtunrng1    number(8,0),
wtunrng2    number(8,0),
wtunrng3    number(8,0),
wtunrng4    number(8,0),
wtunrng5    number(8,0),
wtunrng6    number(8,0),
wtundycs    number(8,0),
wtuninpt    number(8,0),
wtunspar    varchar2(1),
lf          varchar2(1),
constraint watunsa1 primary key( 
wtundate,
wtununit,
wtundoct,
wtunprty)
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
create public synonym watunsaf for watunsaf;
