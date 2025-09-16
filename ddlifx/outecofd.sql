create table outecoaf
(
  oteomodl    char(1) default ' ' not null,
  oteodflg    char(1) default ' ' not null,
  oteotrid    char(24) default ' ' not null,
  oteoinvn    char(8) default ' ' not null,
  oteobatn    char(8) default ' ' not null,
  oteocdat    char(8) default ' ' not null,
  oteouser    char(10) default ' ' not null,
  oteospar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outecoa1 on outecoaf
(
oteomodl,
oteodflg,
oteotrid
);
create unique index outecoa2 on outecoaf
(
oteocdat,
oteodflg,
oteotrid,
oteomodl
);
revoke all on outecoaf from public ; 
grant select on outecoaf to public ; 
