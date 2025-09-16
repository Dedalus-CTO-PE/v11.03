create table hicefxaf
(
  hcexbtch    char(5) default ' ' not null,
  hcextype    char(1) default ' ' not null,
  hcexdate    char(8) default ' ' not null,
  hcexfnam    char(30) default ' ' not null,
  hcexspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index hicefxa1 on hicefxaf
(
hcexbtch,
hcextype,
hcexdate,
hcexfnam
);
revoke all on hicefxaf from public ; 
grant select on hicefxaf to public ; 
