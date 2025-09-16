create table webplnaf
(
wbplurn     varchar2(8),
wbpluni     varchar2(8),
wbplvis     varchar2(8),
wbpldoc     varchar2(6),
wbpldat     varchar2(8),
wbpltim     varchar2(5),
wbpluid     varchar2(4),
wbpllty     varchar2(3),
wbplurl     varchar2(80),
wbplicn     varchar2(80),
wbplde1     varchar2(80),
wbplde2     varchar2(80),
wbplde3     varchar2(80),
wbplur1     varchar2(30),
wbplur2     varchar2(30),
wbplud1     varchar2(8),
wbplud2     varchar2(8),
wbpluy1     varchar2(1),
wbpluy2     varchar2(1),
wbplwrd     varchar2(3),
wbplspa     varchar2(77),
lf          varchar2(1),
constraint webplna1 primary key( 
wbplurn,
wbpluni)
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
create public synonym webplnaf for webplnaf;
create unique index webplna2 on webplnaf
(
wbplurn,
wbpldat,
wbpltim,
wbpluni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index webplna3 on webplnaf
(
wbpldoc,
wbpldat,
wbpltim,
wbplurn,
wbpluni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index webplna4 on webplnaf
(
wbplwrd,
wbpldat,
wbpltim,
wbplurn,
wbpluni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
