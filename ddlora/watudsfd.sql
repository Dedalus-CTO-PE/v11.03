create table watudsaf
(
wtuddate    varchar2(6),
wtudunit    varchar2(3),
wtuddoct    varchar2(6),
wtudprty    varchar2(3),
wtudadd     number(8,0),
wtudadmt    number(8,0),
wtudlast    number(8,0),
wtudiaa     number(8,0),
wtudbook    number(8,0),
wtudnumb    number(8,0),
wtudspar    varchar2(11),
lf          varchar2(1),
constraint watudsa1 primary key( 
wtuddate,
wtudunit,
wtuddoct,
wtudprty)
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
create public synonym watudsaf for watudsaf;
