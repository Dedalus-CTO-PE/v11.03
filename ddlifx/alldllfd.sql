create table alldllaf
(
  aldldept    char(3) default ' ' not null,
  aldlracp    char(3) default ' ' not null,
  aldlracr    char(3) default ' ' not null,
  aldlurap    char(3) default ' ' not null,
  aldlurar    char(3) default ' ' not null,
  aldlrpat    char(3) default ' ' not null,
  aldlrref    char(3) default ' ' not null,
  aldlplab    char(2) default ' ' not null,
  aldlracg    char(3) default ' ' not null,
  aldlurag    char(3) default ' ' not null,
  aldlrrjg    char(3) default ' ' not null,
  aldlspar    char(61) default ' ' not null,
  lf          char(1)
);
create unique index alldlla1 on alldllaf
(
aldldept
);
revoke all on alldllaf from public ; 
grant select on alldllaf to public ; 
