create table prshrdaf
(
p2hrurun    varchar2(10),
p2hrfdat    varchar2(8),
p2hrtdat    varchar2(8),
p2hrcdat    varchar2(8),
p2hrrdat    varchar2(8),
p2hrhosp    varchar2(3),
p2hrspar    varchar2(47),
lf          varchar2(1),
constraint prshrda1 primary key( 
p2hrurun)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym prshrdaf for prshrdaf;
create unique index prshrda2 on prshrdaf
(
p2hrfdat,
p2hrtdat,
p2hrurun
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index prshrda3 on prshrdaf
(
p2hrhosp,
p2hrfdat,
p2hrtdat,
p2hrurun
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
