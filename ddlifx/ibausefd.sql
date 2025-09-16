create table ibauseaf
(
  ibuscode    char(4) default ' ' not null,
  ibussyst    char(3) default ' ' not null,
  ibuslevl    char(1) default ' ' not null,
  ibusmpro    char(8) default ' ' not null,
  ibusspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibausea1 on ibauseaf
(
ibuscode,
ibussyst
);
create unique index ibausea2 on ibauseaf
(
ibussyst,
ibuscode
);
revoke all on ibauseaf from public ; 
grant select on ibauseaf to public ; 
