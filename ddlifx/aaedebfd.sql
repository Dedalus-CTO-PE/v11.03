create table aaedetbf
(
  dadbnumb    char(8) default ' ' not null,
  dadbclno    char(2) default ' ' not null,
  adbline     char(70) default ' ' not null,
  adbspare    char(19) default ' ' not null,
  lf          char(1)
);
create unique index aaedetb1 on aaedetbf
(
dadbnumb,
dadbclno
);
revoke all on aaedetbf from public ; 
grant select on aaedetbf to public ; 
