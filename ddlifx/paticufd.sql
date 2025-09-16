create table paticuaf
(
  dpticuad    char(8) default ' ' not null,
  pticuint    decimal(5,0) default 0 not null,
  pticumec    decimal(5,0) default 0 not null,
  pticuccu    decimal(5,0) default 0 not null,
  pticambn    char(15) default ' ' not null,
  pticcpap    decimal(5,0) default 0 not null,
  ptichncu    decimal(5,0) default 0 not null,
  pticintm    char(2) default ' ' not null,
  pticmecm    char(2) default ' ' not null,
  pticchsc    char(15) default ' ' not null,
  pticuspr    char(30) default ' ' not null,
  lf          char(1)
);
create unique index paticua1 on paticuaf
(
dpticuad
);
revoke all on paticuaf from public ; 
grant select on paticuaf to public ; 
