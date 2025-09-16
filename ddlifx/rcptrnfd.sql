create table rcptrnaf
(
trndate     char(8),
trncashr    char(6),
trnrecno    char(12),
dtrncoun    char(3),
trnreg      char(3),
trnmode     char(1),
trnsys      decimal(2,0),
trninv      char(8),
trnref      char(17),
trncard     char(3),
trnpayee    char(20),
trnadd1     char(20),
trnadd2     char(20),
trnpost     char(4),
trnptype    decimal(1,0),
trninacc    char(14),
trnbnkac    char(14),
dtrnamnt    decimal(14,2),
dtrndisc    decimal(14,2),
trnstat     decimal(1,0),
trnbank     decimal(1,0),
trntype     decimal(1,0),
trncheq     char(12),
trnhosp     char(2),
trngstc     char(6),
trngsta     char(14),
trnbddte    char(8),
trnspare    char(38),
lf          char(1)
);
create unique index rcptrna1 on rcptrnaf
(
trndate,
trncashr,
trnrecno,
dtrncoun
);
create unique index rcptrna2 on rcptrnaf
(
trnrecno,
dtrncoun
);
create unique index rcptrna3 on rcptrnaf
(
trndate,
trnreg,
trncashr,
trnrecno,
dtrncoun
);
create unique index rcptrna4 on rcptrnaf
(
trninv,
trndate,
trnrecno,
dtrncoun
);
create unique index rcptrna5 on rcptrnaf
(
trninv,
trnreg,
trnrecno,
dtrncoun
);
revoke all on rcptrnaf from public ; 
grant select on rcptrnaf to public ; 
