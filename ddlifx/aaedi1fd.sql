create table aaedi1af
(
  adsnumb     char(8) default ' ' not null,
  adsdate     char(8) default ' ' not null,
  adstime     char(5) default ' ' not null,
  adssses     char(60) default ' ' not null,
  adsdisc     char(3) default ' ' not null,
  adsdiag     char(7) default ' ' not null,
  aedsdcft    char(8) default ' ' not null,
  aedstcft    char(5) default ' ' not null,
  aedsddta    char(8) default ' ' not null,
  aedsdcon    char(8) default ' ' not null,
  aedstcon    char(5) default ' ' not null,
  aedsdadm    char(8) default ' ' not null,
  aedstadm    char(5) default ' ' not null,
  aedsusr6    char(3) default ' ' not null,
  aedsusr7    char(3) default ' ' not null,
  aedsusr8    char(3) default ' ' not null,
  aedsoper    char(4) default ' ' not null,
  aedsspar    char(48) default ' ' not null,
  lf          char(1)
);
create unique index aaedi1a1 on aaedi1af
(
adsnumb
);
create unique index aaedi1a2 on aaedi1af
(
adsdate,
adsnumb
);
revoke all on aaedi1af from public ; 
grant select on aaedi1af to public ; 
