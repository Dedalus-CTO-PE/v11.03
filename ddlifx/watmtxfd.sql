create table watmtxaf
(
  wtmturno    char(8) default ' ' not null,
  wtmtproc    char(9) default ' ' not null,
  wtmtpcnt    char(2) default ' ' not null,
  wtmttype    char(3) default ' ' not null,
  wtmtnote    char(6) default ' ' not null,
  wtmtuniq    char(3) default ' ' not null,
  wtmtcmnt    char(100) default ' ' not null,
  wtmtspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index watmtxa1 on watmtxaf
(
wtmturno,
wtmtproc,
wtmtpcnt,
wtmttype,
wtmtnote,
wtmtuniq
);
revoke all on watmtxaf from public ; 
grant select on watmtxaf to public ; 
