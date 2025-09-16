create table pataudtc
(
pttcaudd    varchar2(8),
pttcaudt    varchar2(8),
pttcaudp    varchar2(2),
pttcaudr    varchar2(1),
pttcauds    number(1,0),
pttcaudo    varchar2(4),
pttcteam    varchar2(6),
pttcdoct    varchar2(6),
pttcsdat    varchar2(8),
pttcedat    varchar2(8),
pttcrole    varchar2(3),
pttcspar    varchar2(30),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym pataudtc for pataudtc;
create index pataudtc on pataudtc
(
pttcaudd,
pttcaudt,
pttcaudp,
pttcaudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table pattmcaf
(
pttcteam    varchar2(6),
pttcdoct    varchar2(6),
pttcsdat    varchar2(8),
pttcedat    varchar2(8),
pttcrole    varchar2(3),
pttcspar    varchar2(30),
lf          varchar2(1),
constraint pattmca1 primary key( 
pttcteam,
pttcsdat,
pttcdoct)
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
create public synonym pattmcaf for pattmcaf;
create unique index pattmca2 on pattmcaf
(
pttcdoct,
pttcsdat,
pttcteam
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
