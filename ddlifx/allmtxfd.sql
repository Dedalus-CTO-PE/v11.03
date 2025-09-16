create table allmtxaf
(
  almtvisn    char(8) default ' ' not null,
  almtencn    char(8) default ' ' not null,
  almttype    char(3) default ' ' not null,
  almtnote    char(6) default ' ' not null,
  almtuniq    char(3) default ' ' not null,
  almtcmnt    char(80) default ' ' not null,
  almtspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allmtxa1 on allmtxaf
(
almtvisn,
almtencn,
almttype,
almtnote,
almtuniq
);
revoke all on allmtxaf from public ; 
grant select on allmtxaf to public ; 
