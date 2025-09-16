create table rcpbulaf
(
drbclaim    char(6),
rbcode      char(6),
drbcnt      char(3),
rbdate      char(8),
rbstat1     decimal(1,0),
rbtype      decimal(1,0),
rbrdate     char(8),
rbreg       char(3),
rbinv       char(8),
rbamt       decimal(14,2),
rbdisc      decimal(14,2),
rbstat2     decimal(1,0),
rbhosp      char(2),
rbspare     char(10),
lf          char(1)
);
create unique index rcpbula1 on rcpbulaf
(
drbclaim,
rbcode,
drbcnt
);
create unique index rcpbula2 on rcpbulaf
(
drbclaim,
rbcode,
rbreg,
rbinv
);
create unique index rcpbula3 on rcpbulaf
(
rbinv,
drbclaim,
rbcode,
drbcnt
);
revoke all on rcpbulaf from public ; 
grant select on rcpbulaf to public ; 
