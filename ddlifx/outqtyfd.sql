create table outqtyaf
(
  dotqtmes    char(20) default ' ' not null,
  octsite     char(6) default ' ' not null,
  octctyp     char(6) default ' ' not null,
  octgrp      char(3) default ' ' not null,
  octdesc     char(30) default ' ' not null,
  octxbok     char(2) default ' ' not null,
  octxatt     char(2) default ' ' not null,
  octbkt      char(3) default ' ' not null,
  octatt      char(3) default ' ' not null,
  octact      char(1) default ' ' not null,
  octvacs     char(3) default ' ' not null,
  octwunit    char(3) default ' ' not null,
  octusdf1    char(1) default ' ' not null,
  octusdf2    char(1) default ' ' not null,
  otqtspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index outqtya1 on outqtyaf
(
dotqtmes
);
revoke all on outqtyaf from public ; 
grant select on outqtyaf to public ; 
