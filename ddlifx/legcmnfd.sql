create table legcmntf
(
  dlpcadmn    char(8) default ' ' not null,
  dlpclno     char(3) default ' ' not null,
  lpcline     char(70) default ' ' not null,
  lf          char(1)
);
create unique index legcmnt1 on legcmntf
(
dlpcadmn,
dlpclno
);
revoke all on legcmntf from public ; 
grant select on legcmntf to public ; 
