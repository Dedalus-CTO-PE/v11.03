create table patwc1af
(
dwcadmno    varchar2(8),
wcename     varchar2(30),
wceadd1     varchar2(35),
wceadd2     varchar2(35),
wceadd3     varchar2(35),
wceadd4     varchar2(35),
wcepost     varchar2(8),
wcetele     varchar2(20),
wcacdat     varchar2(8),
wcaccpt     number(1,0),
wcicode     varchar2(6),
wcclmno     varchar2(20),
wccomn1     varchar2(40),
wccomn2     varchar2(40),
ptwcurno    varchar2(8),
ptwcvdat    varchar2(8),
ptwcspar    varchar2(6),
lf          varchar2(1),
constraint patwc1a1 primary key( 
dwcadmno)
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
create public synonym patwc1af for patwc1af;
create unique index patwc1a2 on patwc1af
(
ptwcurno,
dwcadmno
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index patwc1a3 on patwc1af
(
wcclmno,
ptwcurno,
dwcadmno,
ptwcvdat
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
