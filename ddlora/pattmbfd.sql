create table pataudtb
(
pttbaudd    varchar2(8),
pttbaudt    varchar2(8),
pttbaudp    varchar2(2),
pttbaudr    varchar2(1),
pttbauds    number(1,0),
pttbaudo    varchar2(4),
pttbteam    varchar2(6),
pttbdoct    varchar2(6),
pttbsdat    varchar2(8),
pttbrole    varchar2(3),
pttbspar    varchar2(30),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym pataudtb for pataudtb;
create index pataudtb on pataudtb
(
pttbaudd,
pttbaudt,
pttbaudp,
pttbaudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table pattmbaf
(
pttbteam    varchar2(6),
pttbdoct    varchar2(6),
pttbsdat    varchar2(8),
pttbrole    varchar2(3),
pttbspar    varchar2(30),
lf          varchar2(1),
constraint pattmba1 primary key( 
pttbteam,
pttbdoct)
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
create public synonym pattmbaf for pattmbaf;
create unique index pattmba2 on pattmbaf
(
pttbdoct,
pttbteam
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
