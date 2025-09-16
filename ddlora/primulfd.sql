create table primultf
(
prmucode    varchar2(5),
prmudate    varchar2(8),
dprmunum    varchar2(3),
prmudesc    varchar2(30),
prmuitmn    varchar2(9),
prmusubn    varchar2(3),
prmuaman    varchar2(9),
prmuspar    varchar2(4),
lf          varchar2(1),
constraint primult1 primary key( 
prmucode,
prmudate,
dprmunum)
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
create public synonym primultf for primultf;
create unique index primult2 on primultf
(
prmudesc,
prmucode,
prmudate,
dprmunum
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
