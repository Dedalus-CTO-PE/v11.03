create table watnbhaf
(
  wtnhxdat    char(8) default ' ' not null,
  wtnhdhbc    char(3) default ' ' not null,
  wtnhagen    char(4) default ' ' not null,
  wtnhbtch    char(5) default ' ' not null,
  wtnhpenv    char(4) default ' ' not null,
  wtnhstat    char(1) default ' ' not null,
  wtnhfdat    char(8) default ' ' not null,
  wtnhftim    char(4) default ' ' not null,
  wtnhfver    char(5) default ' ' not null,
  wtnhfnam    char(12) default ' ' not null,
  wtnhrecs    char(5) default ' ' not null,
  wtnhproc    char(5) default ' ' not null,
  wtnhrdel    char(5) default ' ' not null,
  wtnhrins    char(5) default ' ' not null,
  wtnhrerr    char(5) default ' ' not null,
  wtnhrwrn    char(5) default ' ' not null,
  wtnhldat    char(8) default ' ' not null,
  wtnhusrs    char(10) default ' ' not null,
  wtnhudat    char(8) default ' ' not null,
  wtnhutim    char(8) default ' ' not null,
  wtnhspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index watnbha1 on watnbhaf
(
wtnhxdat,
wtnhdhbc,
wtnhbtch,
wtnhstat
);
revoke all on watnbhaf from public ; 
grant select on watnbhaf to public ; 
