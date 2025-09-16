create table aaestaaf
(
  aescata     char(2) default ' ' not null,
  aescode     char(3) default ' ' not null,
  aesdate     char(6) default ' ' not null,
  aesnumb     decimal(6,0) default 0 not null,
  aesspare    char(32) default ' ' not null,
  lf          char(1)
);
create unique index aaestaa1 on aaestaaf
(
aescata,
aescode,
aesdate
);
revoke all on aaestaaf from public ; 
grant select on aaestaaf to public ; 
