create table rcptrnaf
(
trndate     varchar2(8),
trncashr    varchar2(6),
trnrecno    varchar2(12),
dtrncoun    varchar2(3),
trnreg      varchar2(3),
trnmode     varchar2(1),
trnsys      number(2,0),
trninv      varchar2(8),
trnref      varchar2(17),
trncard     varchar2(3),
trnpayee    varchar2(20),
trnadd1     varchar2(20),
trnadd2     varchar2(20),
trnpost     varchar2(4),
trnptype    number(1,0),
trninacc    varchar2(14),
trnbnkac    varchar2(14),
dtrnamnt    number(14,2),
dtrndisc    number(14,2),
trnstat     number(1,0),
trnbank     number(1,0),
trntype     number(1,0),
trncheq     varchar2(12),
trnhosp     varchar2(2),
trngstc     varchar2(6),
trngsta     varchar2(14),
trnbddte    varchar2(8),
trnspare    varchar2(38),
lf          varchar2(1),
constraint rcptrna1 primary key( 
trndate,
trncashr,
trnrecno,
dtrncoun)
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
create public synonym rcptrnaf for rcptrnaf;
create unique index rcptrna2 on rcptrnaf
(
trnrecno,
dtrncoun
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index rcptrna3 on rcptrnaf
(
trndate,
trnreg,
trncashr,
trnrecno,
dtrncoun
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index rcptrna4 on rcptrnaf
(
trninv,
trndate,
trnrecno,
dtrncoun
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index rcptrna5 on rcptrnaf
(
trninv,
trnreg,
trnrecno,
dtrncoun
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
