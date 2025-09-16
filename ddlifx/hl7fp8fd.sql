create table hl7fp8af
(
  hlp8rsid    char(64) default ' ' not null,
  hlp8vrid    char(10) default ' ' not null,
  hlp8cnt1    char(4) default ' ' not null,
  hlp8cnt2    char(4) default ' ' not null,
  hlp8tsys    char(50) default ' ' not null,
  hlp8tval    char(200) default ' ' not null,
  hlp8tuse    char(50) default ' ' not null,
  hlp8trnk    char(10) default ' ' not null,
  hlp8tstr    char(40) default ' ' not null,
  hlp8tend    char(40) default ' ' not null,
  hlp8spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp8a1 on hl7fp8af
(
hlp8rsid,
hlp8vrid,
hlp8cnt1,
hlp8cnt2
);
revoke all on hl7fp8af from public ; 
grant select on hl7fp8af to public ; 
