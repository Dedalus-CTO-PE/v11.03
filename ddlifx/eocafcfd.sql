create table eocafcaf
(
  decafadm    char(8) default ' ' not null,
  ecafdate    char(8) default ' ' not null,
  ecafsent    char(1) default ' ' not null,
  ecafspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index eocafca1 on eocafcaf
(
decafadm
);
create unique index eocafca2 on eocafcaf
(
ecafdate,
decafadm
);
revoke all on eocafcaf from public ; 
grant select on eocafcaf to public ; 
