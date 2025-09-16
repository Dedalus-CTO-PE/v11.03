create table cordttaf
(
codtctyp    varchar2(5),
codtflno    varchar2(5),
codtdseq    varchar2(3),
codthead    varchar2(25),
codtcnvt    varchar2(1),
codtspar    varchar2(80),
lf          varchar2(1),
constraint cordtta1 primary key( 
codtctyp,
codtflno)
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
create public synonym cordttaf for cordttaf;
create unique index cordtta2 on cordttaf
(
codtctyp,
codtdseq,
codtflno
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
