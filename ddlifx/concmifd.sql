create table concmiaf
(
  dcocmadm    char(8) default ' ' not null,
  cocmlchg    char(8) default ' ' not null,
  cocmsend    char(1) default ' ' not null,
  dcocmtyp    char(2) default ' ' not null,
  cocmrunn    char(4) default ' ' not null,
  cocmtchg    char(5) default ' ' not null,
  cocmspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index concmia1 on concmiaf
(
dcocmadm
);
create unique index concmia2 on concmiaf
(
dcocmtyp,
cocmsend,
cocmlchg,
dcocmadm
);
create unique index concmia3 on concmiaf
(
dcocmtyp,
cocmrunn,
dcocmadm
);
revoke all on concmiaf from public ; 
grant select on concmiaf to public ; 
