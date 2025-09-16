create table watphiaf
(
  wtphproc    char(9) default ' ' not null,
  wtphefdt    char(8) default ' ' not null,
  wtphhdpv    char(9) default ' ' not null,
  wtphdrgc    char(6) default ' ' not null,
  wtphrhat    char(6) default ' ' not null,
  wtphchet    char(6) default ' ' not null,
  wtphspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index watphia1 on watphiaf
(
wtphproc,
wtphefdt
);
revoke all on watphiaf from public ; 
grant select on watphiaf to public ; 
