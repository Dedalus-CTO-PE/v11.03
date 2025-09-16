create table pmsnmhaf
(
  pmnhxdat    char(8) default ' ' not null,
  pmnhdhbc    char(3) default ' ' not null,
  pmnhagen    char(4) default ' ' not null,
  pmnhbtch    char(5) default ' ' not null,
  pmnhpenv    char(4) default ' ' not null,
  pmnhstat    char(1) default ' ' not null,
  pmnhfdat    char(8) default ' ' not null,
  pmnhtdat    char(8) default ' ' not null,
  pmnhfver    char(6) default ' ' not null,
  pmnhfnam    char(12) default ' ' not null,
  pmnhrecs    char(5) default ' ' not null,
  pmnhproc    char(5) default ' ' not null,
  pmnhrdel    char(5) default ' ' not null,
  pmnhrins    char(5) default ' ' not null,
  pmnhrrej    char(5) default ' ' not null,
  pmnhldat    char(8) default ' ' not null,
  pmnhusrs    char(10) default ' ' not null,
  pmnhudat    char(8) default ' ' not null,
  pmnhutim    char(8) default ' ' not null,
  pmnhspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsnmha1 on pmsnmhaf
(
pmnhxdat,
pmnhdhbc,
pmnhbtch,
pmnhstat
);
revoke all on pmsnmhaf from public ; 
grant select on pmsnmhaf to public ; 
