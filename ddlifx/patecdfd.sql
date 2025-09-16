create table patecdaf
(
  dptedadm    char(8) default ' ' not null,
  dptedepn    char(2) default ' ' not null,
  dptedcnt    char(3) default ' ' not null,
  ptedcode    char(9) default ' ' not null,
  ptedtype    char(1) default ' ' not null,
  dptedunq    char(3) default ' ' not null,
  pteddtcd    char(8) default ' ' not null,
  ptedoper    char(4) default ' ' not null,
  ptedacdt    char(8) default ' ' not null,
  ptedtime    char(5) default ' ' not null,
  ptedcccl    char(1) default ' ' not null,
  ptedusid    char(10) default ' ' not null,
  pteddrgd    char(1) default ' ' not null,
  pteddesc    char(200) default ' ' not null,
  ptedoset    char(1) default ' ' not null,
  ptedccfl    char(2) default ' ' not null,
  ptedspar    char(43) default ' ' not null,
  lf          char(1)
);
create unique index patecda1 on patecdaf
(
dptedadm,
dptedepn,
dptedcnt
);
create unique index patecda2 on patecdaf
(
dptedadm,
dptedunq,
dptedepn,
dptedcnt
);
create unique index patecda3 on patecdaf
(
ptedcode,
dptedadm,
dptedunq,
dptedepn,
dptedcnt
);
create unique index patecda4 on patecdaf
(
pteddtcd,
dptedadm,
dptedepn,
dptedcnt
);
create unique index patecda5 on patecdaf
(
dptedadm,
ptedcode,
dptedepn,
dptedcnt
);
revoke all on patecdaf from public ; 
grant select on patecdaf to public ; 
