create table webimcaf
(
  wbimhosp    char(3) default ' ' not null,
  dwbimflg    char(2) default ' ' not null,
  wbimhfnd    char(6) default ' ' not null,
  wbimuniq    char(8) default ' ' not null,
  wbiminvn    char(8) default ' ' not null,
  wbimbatn    char(8) default ' ' not null,
  wbimurno    char(8) default ' ' not null,
  wbimpbat    char(8) default ' ' not null,
  wbimnbat    char(8) default ' ' not null,
  wbimtrid    char(24) default ' ' not null,
  wbimeetp    char(1) default ' ' not null,
  wbimamtc    decimal(14,2) default 0 not null,
  wbimamfp    decimal(14,2) default 0 not null,
  wbimammp    decimal(14,2) default 0 not null,
  wbimpdat    char(8) default ' ' not null,
  wbimstat    char(2) default ' ' not null,
  wbimftid    char(24) default ' ' not null,
  wbimprac    char(10) default ' ' not null,
  wbimmsid    char(36) default ' ' not null,
  wbimctyp    char(2) default ' ' not null,
  wbimspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimca1 on webimcaf
(
wbimhosp,
dwbimflg,
wbimhfnd,
wbimuniq,
wbiminvn,
wbimbatn
);
create unique index webimca2 on webimcaf
(
wbiminvn,
wbimbatn
);
create unique index webimca3 on webimcaf
(
wbimbatn,
wbimuniq,
wbiminvn
);
create unique index webimca4 on webimcaf
(
wbimuniq,
wbiminvn,
wbimbatn
);
create unique index webimca5 on webimcaf
(
wbimhosp,
wbimurno,
wbimuniq,
wbiminvn,
wbimbatn
);
create unique index webimca6 on webimcaf
(
wbimtrid,
wbiminvn,
wbimbatn
);
create unique index webimca7 on webimcaf
(
wbimprac,
wbimhosp,
dwbimflg,
wbimhfnd,
wbimuniq,
wbiminvn,
wbimbatn
);
create unique index webimca8 on webimcaf
(
dwbimflg,
wbimhfnd,
wbimuniq,
wbiminvn,
wbimbatn,
wbimhosp
);
revoke all on webimcaf from public ; 
grant select on webimcaf to public ; 
