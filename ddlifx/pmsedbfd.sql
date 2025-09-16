create table pmsedbaf
(
  pmdbuniq    char(20) default ' ' not null,
  pmdbprid    char(8) default ' ' not null,
  pmdbwbid    char(8) default ' ' not null,
  pmdbnval    decimal(18,4) default 0 not null,
  pmdbdval    char(8) default ' ' not null,
  pmdbvalu    char(600) default ' ' not null,
  pmdbspar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index pmsedba1 on pmsedbaf
(
pmdbuniq,
pmdbprid
);
revoke all on pmsedbaf from public ; 
grant select on pmsedbaf to public ; 
