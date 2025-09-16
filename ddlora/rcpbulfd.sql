create table rcpbulaf
(
drbclaim    varchar2(6),
rbcode      varchar2(6),
drbcnt      varchar2(3),
rbdate      varchar2(8),
rbstat1     number(1,0),
rbtype      number(1,0),
rbrdate     varchar2(8),
rbreg       varchar2(3),
rbinv       varchar2(8),
rbamt       number(14,2),
rbdisc      number(14,2),
rbstat2     number(1,0),
rbhosp      varchar2(2),
rbspare     varchar2(10),
lf          varchar2(1),
constraint rcpbula1 primary key( 
drbclaim,
rbcode,
drbcnt)
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
create public synonym rcpbulaf for rcpbulaf;
create unique index rcpbula2 on rcpbulaf
(
drbclaim,
rbcode,
rbreg,
rbinv
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index rcpbula3 on rcpbulaf
(
rbinv,
drbclaim,
rbcode,
drbcnt
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
