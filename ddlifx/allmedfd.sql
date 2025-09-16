create table allmedaf
(
  almecode    char(20) default ' ' not null,
  almedesc    char(60) default ' ' not null,
  almeactv    char(1) default ' ' not null,
  almeunit    char(3) default ' ' not null,
  almegenr    char(1) default ' ' not null,
  almemedr    char(3) default ' ' not null,
  almeivad    char(1) default ' ' not null,
  almeinvc    char(7) default ' ' not null,
  almemedt    char(3) default ' ' not null,
  almespar    char(70) default ' ' not null,
  lf          char(1)
);
create unique index allmeda1 on allmedaf
(
almecode
);
revoke all on allmedaf from public ; 
grant select on allmedaf to public ; 
