create table fmslmbaf
(
  fmlbrpno    char(2) default ' ' not null,
  fmlbdesc    char(35) default ' ' not null,
  fmlbacui    decimal(1,0) default 0 not null,
  fmlbbuui    decimal(1,0) default 0 not null,
  fmlbspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index fmslmba1 on fmslmbaf
(
fmlbrpno
);
revoke all on fmslmbaf from public ; 
grant select on fmslmbaf to public ; 
