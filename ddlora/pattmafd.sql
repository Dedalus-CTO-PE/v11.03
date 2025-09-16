create table pataudta
(
pttaaudd    varchar2(8),
pttaaudt    varchar2(8),
pttaaudp    varchar2(2),
pttaaudr    varchar2(1),
pttaauds    number(1,0),
pttaaudo    varchar2(4),
pttateam    varchar2(6),
pttadesc    varchar2(30),
pttatype    varchar2(3),
pttastat    number(1,0),
pttaspar    varchar2(30),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym pataudta for pataudta;
create index pataudta on pataudta
(
pttaaudd,
pttaaudt,
pttaaudp,
pttaaudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table pattmaaf
(
pttateam    varchar2(6),
pttadesc    varchar2(30),
pttatype    varchar2(3),
pttastat    number(1,0),
pttaspar    varchar2(30),
lf          varchar2(1),
constraint pattmaa1 primary key( 
pttateam)
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
create public synonym pattmaaf for pattmaaf;
create unique index pattmaa2 on pattmaaf
(
pttadesc,
pttateam
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pattmaa3 on pattmaaf
(
pttatype,
pttadesc,
pttateam
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
