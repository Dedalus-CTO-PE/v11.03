create table eocrefaf
(
  ecrfurno    char(8) default ' ' not null,
  decrfepn    char(5) default ' ' not null,
  decrfhos    char(2) default ' ' not null,
  decrfref    char(8) default ' ' not null,
  ecrfaccn    char(20) default ' ' not null,
  ecrfstat    decimal(1,0) default 0 not null,
  ecrfcdat    char(8) default ' ' not null,
  ecrfspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index eocrefa1 on eocrefaf
(
ecrfurno,
decrfepn
);
create unique index eocrefa2 on eocrefaf
(
ecrfurno,
decrfhos,
decrfepn
);
create unique index eocrefa3 on eocrefaf
(
ecrfaccn,
ecrfurno,
decrfepn
);
revoke all on eocrefaf from public ; 
grant select on eocrefaf to public ; 
