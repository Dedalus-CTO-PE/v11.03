create table pmsemsaf
(
  pmemvisn    char(8) default ' ' not null,
  pmemadat    char(8) default ' ' not null,
  pmematim    char(8) default ' ' not null,
  pmemlysi    char(1) default ' ' not null,
  pmemsily    char(1) default ' ' not null,
  pmemsist    char(1) default ' ' not null,
  pmemstan    char(1) default ' ' not null,
  pmemgait    char(1) default ' ' not null,
  pmemtwlk    char(1) default ' ' not null,
  pmemfunr    char(1) default ' ' not null,
  pmemstps    char(1) default ' ' not null,
  pmemgugo    char(4) default ' ' not null,
  pmemcdat    char(8) default ' ' not null,
  pmemctim    char(8) default ' ' not null,
  pmemcuid    char(10) default ' ' not null,
  pmemudat    char(8) default ' ' not null,
  pmemutim    char(8) default ' ' not null,
  pmemuuid    char(10) default ' ' not null,
  pmemspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index pmsemsa1 on pmsemsaf
(
pmemvisn,
pmemadat,
pmematim
);
revoke all on pmsemsaf from public ; 
grant select on pmsemsaf to public ; 
