create table pmsimpaf
(
  pmimcode    char(7) default ' ' not null,
  pmimdesc    char(50) default ' ' not null,
  pmimactv    char(1) default ' ' not null,
  pmimdact    char(8) default ' ' not null,
  pmimdiac    char(8) default ' ' not null,
  pmimcuid    char(10) default ' ' not null,
  pmimcdat    char(8) default ' ' not null,
  pmimctim    char(8) default ' ' not null,
  pmimuuid    char(10) default ' ' not null,
  pmimudat    char(8) default ' ' not null,
  pmimutim    char(8) default ' ' not null,
  pmimhdpe    char(7) default ' ' not null,
  pmimgcde    char(3) default ' ' not null,
  pmimspar    char(47) default ' ' not null,
  lf          char(1)
);
create unique index pmsimpa1 on pmsimpaf
(
pmimcode
);
revoke all on pmsimpaf from public ; 
grant select on pmsimpaf to public ; 
